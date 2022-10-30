@REM /*          Gius Corporation          *\
@REM  *       All rights are reserved      *
@REM  *                                    *  
@REM  *  - Author: Giulio Salvi            *
@REM  *  - Date: 10.VII.2022               *
@REM  *  - Name: Demo-Win.bat              *
@REM  *  - Notes: A script to compile      *
@REM  \*     Demo.cpp on Windows platform.  */

@echo off

echo Compiling main.cpp...
g++ Demo.cpp -L./Libs -lArrays -lTypes -o Demo.exe

echo Executable compiled!

@REM cls
echo Running Demo.exe
Demo