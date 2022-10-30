/*          Gius Corporation          *\
 *       All rights are reserved      *
 *                                    *  
 *  - Author: Giulio Salvi            *
 *  - Date: 05.VII.2022               *
 *  - Name: FixedArray.h              *
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
                        Object* atIndex(int index);
                        void set(int index, Object* value);
                        void remove(Object* value);
                        bool contains(Object* value);
                        FixedArray copy();
                };

                FixedArray fromPointer(Object** pointer, int size);
        }
    }
}
#endif