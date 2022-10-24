#ifndef VEC_QUANTITY_HPP
#define VEC_QUANTITY_HPP

#include "angle.hpp"
#include "triple.hpp"
#include "unit.hpp"

class vec_quantity {
  unit m_ut;
  double m_magnitude;
  angle m_angle;
  double m_x_comp, m_y_comp, m_z_comp;

 protected:
  void FindAllComponent();

 public:
  vec_quantity();
  vec_quantity(double mag, angle theta, unit ut);

  /* getters */
  angle get_angle();
  triple get_component();
/* Debugging utility */
#ifdef debug
  void display();
#endif
};

#endif  // VEC_QUANTITY_HPP
