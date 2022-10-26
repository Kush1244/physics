#include <debugutils/debug.h>
#include <core/base.h>


int main() {
  vec_quant force(1, 2, INIT_TYPE::CARTESIAN);
  debug::debug_displacement(force);
}
