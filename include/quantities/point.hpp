#ifndef POINT_HPP
#define POINT_HPP

#include "angle.hpp"
#include "triple.hpp"

class point {
 private:
  /* coordinates */
  angle m_theta;
  double m_magnitude;
  triple m_direction;

 protected:
  double findMagnitude(double x, double y, double z);

 public:
  /* creating from coordinates */
  point(double x, double y, double z);
  /* creating from magnitude and angle */
  point(double magnitude, angle angl);
  // Copy Constructor
  point(const point &pt);
  /* setters */
  void change_angle(double angle);
  void change_angle(double x, double y, double z);
  void change_magnitude(double length);
  /* getters */
  double magnitude();
  ~point() = default;

/* debugging utilities */

/* debugging utilities */
// Only accessible when debug is defined
#ifdef debug
  void display();
#endif
};

#endif  // POINT_HPP
