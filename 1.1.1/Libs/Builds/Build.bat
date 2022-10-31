@REM /*                                    *\
@REM  *          Gius Corporation          *
@REM  *      All rights are reserved.      *
@REM  *                                    *
@REM  *  - Author: Giulio Salvi            *
@REM  *  - Date: 01.X.2022                 *
@REM  *  - Name: Build.bat                 *
@REM  *  - Notes: A script to build the    *
@REM  *     library on Windows platform.   *
@REM \*                                    */

@echo off

echo Compiling into objects...
cd Objects

g++ -c ../../Source/Object.cpp -o Object.o
g++ -c ../../Source/Primitives/Int.cpp -o Int.o
g++ -c ../../Source/Primitives/Float.cpp -o Float.o
g++ -c ../../Source/Primitives/Double.cpp -o Double.o
g++ -c ../../Source/Primitives/Bool.cpp -o Bool.o
g++ -c ../../Source/Primitives/Char.cpp -o Char.o

echo Linking objects dynamically...
g++ -shared Object.o Int.o Float.o Double.o Bool.o Char.o -o ../Dynamic/Types.dll

echo Linking objects statically...
ar rcs ../Static/Types.lib Object.o Int.o Float.o Double.o Bool.o Char.o

cd ..
