#include "../../include/quantities/triple.hpp"

#include <utility>

#ifdef debug
#include <iostream>
#endif

triple::triple(double x, double y, double z)
    : m_x(std::move(x)), m_y(std::move(y)), m_z(std::move(z)) {}
/* Copy Constructor */
triple::triple(const triple &trip) : triple(trip.m_x, trip.m_y, trip.m_z) {}

double &triple::get_x(){
  return m_x;
}

double &triple::get_y() { return m_y; }

double &triple::get_z() { return m_z; }
const triple &triple::operator<<(triple &a) {
  a.m_x = m_x;
  a.m_y = m_y;
  a.m_z = m_z;
  return *this;
}
const triple &triple::operator/=(double num) {
  m_x /= num;
  m_y /= num;
  m_z /= num;
  return *this;
}
const triple &triple::operator*=(double num) {
  m_x *= num;
  m_y *= num;
  m_z *= num;
  return *this;
}

#ifdef debug

void triple::display(const char *x, const char *y, const char *z) {
  std::cout << x << ": " << m_x << " ," << y << ": " << m_y << ", " << z << ": "
            << m_z << '\n';
}

#endif
