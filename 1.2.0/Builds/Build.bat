@REM /*          Gius Corporation          *\
@REM  *       All rights are reserved      *
@REM  *                                    *
@REM  *  - Author: Giulio Salvi            *
@REM  *  - Date: 30.X.2022                 *
@REM  *  - Last Modified: 27.IX.2024       *
@REM  *  - Name: Build.bat                 *
@REM  *  - Notes: A script to build the    *
@REM  *     library on Windows platform.   *
@REM \*                                    */

@echo off

echo Compiling into objects...
cd Objects

g++ -c ../../Source/FixedArray.cpp -o FixedArray.o
g++ -c ../../Source/DynamicArray.cpp -o DynamicArray.o

echo Linking objects dynamically...
g++ -shared FixedArray.o DynamicArray.o -o ../Dynamic/Arrays.dll -L./../../Libs/Builds/Dynamic -lTypes

echo Linking objects statically...
ar rcs ../Static/Arrays.lib FixedArray.o DynamicArray.o

echo Copying static library for the Demo...
cd ../Static
if exist "../../Demo/Libs/Arrays.lib" (
    del "../../Demo/Libs/Arrays.lib"
)
(copy Arrays.lib "../../Demo/Libs/Arrays.lib")>nul

cd ..