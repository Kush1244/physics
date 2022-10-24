#ifndef SCALAR_QUANTITY_HPP
#define SCALAR_QUANTITY_HPP

#include "unit.hpp"

class scalar_quantity {
  double m_mag;
  unit m_ut;

 public:
  scalar_quantity(double mag, unit ut);
  double get_mag();
  unit get_unit();
  void change_magnitude(const double new_val);
  scalar_quantity operator+(const scalar_quantity &sq);
  scalar_quantity operator-(const scalar_quantity &sq);
  scalar_quantity operator*(const scalar_quantity &sq);
  scalar_quantity operator/(const scalar_quantity &sq);

#ifdef debug
  void display();
#endif
};

#endif  // SCALAR_QUANTITY_HPP
