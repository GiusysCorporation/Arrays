@echo off

echo Compiling into objects...
cd Objects

g++ -c ../../Source/Object.cpp -o Object.o
g++ -c ../../Source/Primitives/Int.cpp -o Int.o
g++ -c ../../Source/Primitives/Float.cpp -o Float.o
g++ -c ../../Source/Primitives/Double.cpp -o Double.o
g++ -c ../../Source/Primitives/Bool.cpp -o Bool.o
g++ -c ../../Source/Primitives/Char.cpp -o Char.o

echo Linking objects dynamicly...
g++ -shared Object.o Int.o Float.o Double.o Bool.o Char.o -o ../Dynamic/Types.dll

echo Linking objects staticly...
ar rcs ../Static/Types.lib Object.o Int.o Float.o Double.o Bool.o Char.o

cd ..