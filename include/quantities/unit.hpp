#ifndef UNIT_HPP
#define UNIT_HPP
#define debug
class unit {
 private:
  int m_mass_index;
  int m_len_index;
  int m_time_index;

 public:
  unit(int mass = 0, int len = 0, int time = 0);
  // copy constructor
  unit(const unit &ut);
  /* Operator overloads */
  unit operator*(const unit &ut);
  unit operator/(const unit &ut);
  bool operator==(const unit &ut);
/* deubgging utility */
#ifdef debug
  void display();
#endif
};

#endif  // UNIT_HPP