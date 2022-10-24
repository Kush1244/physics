#include "../../include/quantities/vec_quantity.hpp"

#include <cmath>
#include <utility>
#ifdef debug
#include <iostream>
#endif

void vec_quantity::FindAllComponent() {
  m_x_comp = m_magnitude * (cos(m_angle.get_x_axis_angle()));
  m_y_comp = m_magnitude * (cos(m_angle.get_y_axis_angle()));
  m_y_comp = m_magnitude * (cos(m_angle.get_z_axis_angle()));
}

vec_quantity::vec_quantity() : vec_quantity(0.0, angle(), unit()) {}

vec_quantity::vec_quantity(double mag, angle theta, unit ut)
    : m_magnitude(std::move(mag)),
      m_angle(std::move(theta)),
      m_ut(std::move(ut)) {
  FindAllComponent();
}

angle vec_quantity::get_angle() { return m_angle; }

triple vec_quantity::get_component() {
  return triple(m_x_comp, m_y_comp, m_z_comp);
}

#ifdef debug
void vec_quantity::display() {
  std::cout << "Magnitude " << m_magnitude << '\n';
  m_angle.display();
  m_ut.display();
}
#endif
