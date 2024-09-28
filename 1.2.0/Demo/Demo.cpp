/*          Gius Corporation          *\
 *       All rights are reserved      *
 *                                    *  
 *  - Author: Giulio Salvi            *
 *  - Date: 10.VII.2022               *
 *  - Last Modified: 27.IX.2024
 *  - Name: Demo.cpp                  *
 *  - Notes: This file can be compiled*
 *     by the users to have a demo of *
 *     the library.                   *
\*                                    */

#include <iostream>
#include "../Headers/FixedArray.hpp"
#include "../Headers/DynamicArray.hpp"
#include "../Libs/Headers/Object.hpp"
#include "../Libs/Headers/Primitives/Int.hpp"

using namespace Org::Gius;

void demoForFixedArray();
void demoForDynamicArray();

int main() {
    std::cout << std::endl;
    char o = ' ';

    std::cout << "Do you want to try the demo for the FixedArray class (F) or for the DynamicArray class (D)? ";
    std::cin >> o;

    if(o == 'F')demoForFixedArray();
    else if(o == 'D') demoForDynamicArray();
    else std::cout << "\aUnknown option, aborting...";
    
    system("pause>nul");
    return 0;
}

void demoForFixedArray() {
    int n = 0;
    
    std::cout << "\aInsert the number of values you are going to digit: ";
    std::cin >> n;
    
    Arrays::FixedArray ar = Arrays::FixedArray(n);

    std::cout << "Start to write the values:\n";
    for(int i = 0; i < ar.size(); i++) {
        std::cout << "\a" << i + 1 << ". ";
        std::cin >> n;

        ar.setAt(i, (Types::Object*) new Types::Primitives::Int(n));
    }

    std::cout << "\nThese are the values saved in the array:\n";
    for(int i = 0; i < ar.size(); i++) std::cout << "\a" << i + 1 << ". " << ((Types::Primitives::Int*) ar.at(i))->value << "\n";
}

void demoForDynamicArray() {
    int n = 0, i = 1;

    Arrays::DynamicArray ar = Arrays::DynamicArray();
    std::cout << "Write values and when you'll have finished type -1:\n";

    do {
        std::cout << "\a" << i++ << ". ";
        std::cin >> n;

        if(n != -1) ar.add((Types::Object*) new Types::Primitives::Int(n));
    } while(n != -1);

    std::cout << "\nThese are the values saved in the array:\n";
    for(int i = 0; i < ar.size(); i++) {
        std::cout << "\a" << i + 1 << ". " << ((Types::Primitives::Int*) ar.at(i))->value << "\n";
    }
}