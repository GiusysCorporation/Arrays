#ifndef CharDefined
    #define CharDefined
    #include "../Object.hpp"

    namespace Org {
        namespace Gius {
            namespace Types {
                namespace Primitives {
                    class Char: public Object {
                        public:
                            char value = 0;

                            Char(char value);
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