/*          Gius Corporation          *\
 *       All rights are reserved      *
 *                                    *  
 *  - Author: Giulio Salvi            *
 *  - Date: 05.VII.2022               *
 *  - Last Modified: 27.IX.2024       *
 *  - Name: FixedArray.hpp            *
 *  - Notes: The header file for the  *
 *     class FixedArray.              *
\*                                    */

#ifndef FixedArrayDefined
    #define FixedArrayDefined
    #include "../Libs/Headers/Object.hpp"

    using namespace Org::Gius::Types;

    namespace Org {
        namespace Gius {
            namespace Arrays {
                class FixedArray: public Object {
                    protected:
                        Object** _a; // _array
                        int _s; // _size

                    public:
                        FixedArray(int size);
                        bool isObject();
                        bool isNotPrimitive();
                        int size();
                        int find(Object* value);
                        Object* at(int index);
                        void setAt(int index, Object* value);
                        void remove(Object* value);
                        bool contains(Object* value);
                        FixedArray* copy();
                };

                FixedArray* fromPointer(Object** buffer, int size);
        }
    }
}
#endif