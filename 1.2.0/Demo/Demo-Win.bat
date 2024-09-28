@REM /*          Gius Corporation          *\
@REM  *       All rights are reserved      *
@REM  *                                    *  
@REM  *  - Author: Giulio Salvi            *
@REM  *  - Date: 10.VII.2022               *
@REM  *  - Last Modified: 27.IX.2024       *
@REM  *  - Name: Demo-Win.bat              *
@REM  *  - Notes: A script to compile      *
@REM  *     Demo.cpp on Windows platform.  *
@REM  \*                                   */

@echo off

if exist Demo.exe (
    del Demo.exe
)

echo Compiling 'Demo.cpp'...
g++ Demo.cpp -L./Libs -lArrays -lTypes -o Demo.exe

echo Executable compiled!

echo Running 'Demo.exe'
Demo