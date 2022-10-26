#include <iostream>
#include <debugutils/debug.h>

void debug::debug_displacement(const vec_quant& d) {
    std::cout << "x-comp = " << d.get_x()
              << " y-comp = " << d.get_y()
              << " angle = "  << d.get_angle() << '\n';
}