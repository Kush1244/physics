#include "scalar_quantity.hpp"
#ifdef debug
#include <iostream>
#endif
#include <utility>

scalar_quantity::scalar_quantity(double mag, unit ut)
    : m_mag(std::move(mag)), m_ut(std::move(ut)) {}

double scalar_quantity::get_mag() { return m_mag; }

unit scalar_quantity::get_unit() { return m_ut; }

void scalar_quantity::change_magnitude(const double new_val) {
  m_mag = std::move(new_val);
}

scalar_quantity scalar_quantity::operator+(const scalar_quantity &sq) {
  return scalar_quantity(m_mag + sq.m_mag, m_ut);
}

scalar_quantity scalar_quantity::operator-(const scalar_quantity &sq) {
  return scalar_quantity(m_mag - sq.m_mag, m_ut);
}

scalar_quantity scalar_quantity::operator*(const scalar_quantity &sq) {
  return scalar_quantity(m_mag * sq.m_mag, m_ut * sq.m_ut);
}

scalar_quantity scalar_quantity::operator/(const scalar_quantity &sq) {
  return scalar_quantity(m_mag / sq.m_mag, m_ut / sq.m_ut);
}

void scalar_quantity::display() {
  std::cout << "magnitude: " << m_mag << " ";
  m_ut.display();
}
