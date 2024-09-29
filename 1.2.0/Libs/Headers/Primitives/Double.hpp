/*                                    *\
 *          Gius Corporation          *
 *      All rights are reserved.      *
 *                                    *
 *  - Author: Giulio Salvi            *
 *  - Date: 01.X.2022                 *
 *  - Last Modified: 27.IX.2024       *
 *  - Name: Double.hpp                *
 *  - Notes: The header file for the  *
 *     class Double.                  *
\*                                    */

#ifndef DoubleDefined
    #define DoubleDefined
    #include "../Object.hpp"

    namespace Org {
        namespace Gius {
            namespace Types {
                namespace Primitives {
                    class Double: public Object {
                        public:
                            double value = 0.0;

                            Double(double value);
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