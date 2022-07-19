#ifndef IntDefined
    #define IntDefined
    #include "../Object.hpp"

    namespace Org {
        namespace Gius {
            namespace Types {
                namespace Primitives {
                    class Int: public Object {
                        public:
                            int value = 0;
                            
                            Int(int value);
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