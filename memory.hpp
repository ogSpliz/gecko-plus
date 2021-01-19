#pragma once

namespace memory{
    class write{
        public:
        static write* address(unsigned int address){
            return (write*)address;
        }
        void uint32(unsigned int value){
            *(unsigned int *) (unsigned int)this = value;
        }
        void clear32(){
            *(unsigned int *) (unsigned int)this = 0x00000000;
        }
        void clearTo(unsigned int endAddress){
            for (unsigned int i = (unsigned int)this; i < endAddress;){
                *(unsigned int *) (unsigned int)i = 0x00000000;
                i += 4;
            }
        }
        void fillTo(unsigned int endAddress, unsigned int value){
            for (unsigned int i = (unsigned int)this; i < endAddress;){
                *(unsigned int *) (unsigned int)i = value;
                i += 4;
            }
        }
    };
    class read{
        public:
        static read* address(unsigned int address){
            return (read*)address;
        }
        unsigned int* uint32(){
            unsigned int *ptr = *(unsigned int**)this;
            if (ptr == nullptr) return 0;
            return ptr;
        }
    };
}
