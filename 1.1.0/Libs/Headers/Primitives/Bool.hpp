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