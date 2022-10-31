/*                                    *\
 *          Gius Corporation          *
 *      All rights are reserved.      *
 *                                    *
 *  - Author: Giulio Salvi            *
 *  - Date: 01.X.2022                 *
 *  - Name: Object.hpp                *
 *  - Notes: The header file for the  *
 *     class Object.                  *
\*                                    */

#ifndef ObjectDefined
    #define ObjectDefined

    namespace Org {
        namespace Gius {
            namespace Types {
                class Object {
                    public:
                        Object();
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
#endif