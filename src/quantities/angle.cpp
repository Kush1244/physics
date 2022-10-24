#include "../../include/quantities/angle.hpp"

#include "../../include/quantities/constants.hpp"

#ifdef debug
#include <iostream>
#endif

angle::~angle() {}

angle::angle(double x, double y, double z) : m_degree(x, y, z) {}

angle::angle(const angle &ag) : m_degree(ag.m_degree) {}

double angle::get_x_axis_angle(bool deg) { return m_degree.get_x(); }

double angle::get_y_axis_angle(bool deg) { return m_degree.get_y(); }

double angle::get_z_axis_angle(bool deg) { return m_degree.get_z(); }

triple angle::get_angle() { return m_degree; }

#ifdef debug
void angle::display() {
  std::cout << "Angle in Degree ";
  m_degree.display("Alpha", "Beta", "Gamma");
}
#endif
