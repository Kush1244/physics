#define debug
#include "include/quantities/angle.hpp"
#include "include/quantities/constants.hpp"
#include "include/quantities/point.hpp"
#include "include/quantities/scalar_quantity.hpp"
#include "include/quantities/triple.hpp"
#include "include/quantities/unit.hpp"
#include "include/quantities/vec_quantity.hpp"
int main() {
  scalar_quantity distance(10, unit(0, 1, 0));
  distance.display();
  return 0;
}
