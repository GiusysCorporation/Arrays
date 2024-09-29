/*                                    *\
 *          Gius Corporation          *
 *      All rights are reserved.      *
 *                                    *
 *  - Author: Giulio Salvi            *
 *  - Date: 01.X.2022                 *
 *  - Last Modified: 27.IX.2024       *
 *  - Name: Bool.hpp                  *
 *  - Notes: The header file for the  *
 *     class Bool.                    *
\*                                    */

#ifndef BoolDefined
    #define BoolDefined
    #include "../Object.hpp"

    namespace Org {
        namespace Gius {
            namespace Types {
                namespace Primitives {
                    class Bool: public Object {
                        public:
                            bool value = false;

                            Bool(bool value);
                            bool isObject();
                            bool isInt();
                            bool isFloat();
                            bool isDouble();
                            bool isBool();
                            bool isChar();
                            bool isNotPrimitive();
                    };
                }
            }
        }
    }
#endif