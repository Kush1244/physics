// Implementatioin of unit.hpp
#include "../../include/quantities/unit.hpp"

#include <utility>
#ifdef debug
#include <iostream>
#endif

// constructor
unit::unit(int mass, int len, int time)
    : m_mass_index(std::move(mass)),
      m_len_index(std::move(len)),
      m_time_index(std::move(time)) {}

unit::unit(const unit& ut)
    : unit(ut.m_mass_index, ut.m_len_index, ut.m_time_index) {}

unit unit::operator*(const unit& ut) {
  return unit(m_mass_index + ut.m_mass_index, m_len_index + m_len_index,
              m_time_index + ut.m_time_index);
}

unit unit::operator/(const unit& ut) {
  return unit(m_mass_index - ut.m_mass_index, m_len_index - m_len_index,
              m_time_index - ut.m_time_index);
}

bool unit::operator==(const unit& ut) {
  if (m_mass_index == ut.m_mass_index and m_len_index == ut.m_len_index and
      m_time_index == ut.m_time_index) {
    return true;
  }
  return false;
}

#ifdef debug
void unit::display() {
  std::cout << "M: " << m_mass_index << " L: " << m_len_index
            << " T: " << m_time_index << '\n';
}

#endif