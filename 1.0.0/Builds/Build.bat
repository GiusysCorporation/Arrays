@echo off

echo Compiling into objects...
cd Objects

g++ -c ../../Source/FixedArray.cpp -o FixedArray.o
g++ -c ../../Source/DynamicArray.cpp -o DynamicArray.o

echo Linking objects dynamicly...
g++ -shared FixedArray.o DynamicArray.o -o ../Dynamic/Arrays.dll

echo Linking objects staticly...
ar rcs ../Static/Arrays.lib FixedArray.o DynamicArray.o

cd ..