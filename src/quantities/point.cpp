#include "../../include/quantities/point.hpp"

#include <cmath>
#include <utility>
#ifdef debug
#include <iostream>
#endif

double point::findMagnitude(double x, double y, double z) {
  return sqrt(x * x + y * y + z * z);
}

point::point(double x, double y, double z)
    : m_theta(x, y, z), m_magnitude(findMagnitude(x, y, z)) {}

point::point(double magnitude, angle angl)
    : m_theta(angl), m_magnitude(std::move(magnitude)) {}

/* Copy Constructor */
point::point(const point& pt)
    : m_theta(pt.m_theta), m_magnitude(pt.m_magnitude) {}

/* setters */
void point::change_angle(double angle) { m_theta = angle; }

void point::change_angle(double x, double y, double z) {
  m_theta = angle(x, y, z);
}

/* getters */
double point::magnitude() { return m_magnitude; }
#ifdef debug
void point::display() {
  std::cout << "Magnitude-> " << m_magnitude << '\n';
  m_theta.display();
}

#endif
