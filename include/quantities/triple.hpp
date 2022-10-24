#ifndef TRIPLE_HPP
#define TRIPLE_HPP

#define debug
class triple {
 private:
  double m_x, m_y, m_z;

 public:
  triple(double x = 0, double y = 0, double z = 0);
  triple(const triple &trip);
  /* getters */
  double &get_x();
  double &get_y();
  double &get_z();
  /* Operators */
  const triple &operator<<(triple &a);
  const triple &operator/=(double num);
  const triple &operator*=(double num);

/* debug */
#ifdef debug
  void display(const char *x = "X ", const char *y = "Y ",
               const char *z = "Z ");
#endif
};

#endif  // TRIPLE_HPP