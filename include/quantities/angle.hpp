#pragma once

#include "triple.hpp"
class angle {
 private:
  triple m_degree;
  // By default the angle will be in radians
 public:
  ~angle();
  angle(double x = 0, double y = 0, double z = 0);
  angle(const angle &ag);
  /* Setters */
  /* get angle with each axes */
  double get_x_axis_angle(bool deg = false);
  double get_y_axis_angle(bool deg = false);
  double get_z_axis_angle(bool deg = false);
  triple get_angle();
/* debugging utilities */
#ifdef debug
  void display();
#endif
};
