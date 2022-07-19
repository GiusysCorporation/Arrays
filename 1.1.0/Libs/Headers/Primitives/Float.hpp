#ifndef FloatDefined
    #define FloatDefined
    #include "../Object.hpp"

    namespace Org {
        namespace Gius {
            namespace Types {
                namespace Primitives {
                    class Float: public Object {
                        public:
                            float value = 0.0F;

                            Float(float value);
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