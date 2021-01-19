#pragma once

#include "include/memory.hpp"

__attribute__((noinline))
void write(){
	memory::write::address(0x10000000)->uint32(0x11000000);
}
