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