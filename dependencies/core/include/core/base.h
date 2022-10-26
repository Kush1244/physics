#ifndef BASE_H
#define BASE_H

enum class INIT_TYPE {
  CARTESIAN,
  POLAR
};


class vec_quant {
private:
    double x_comp, y_comp;
    double m_angle;
    double m_magnitude;
protected:
    double find_angle();
    void init_mag();
public:
    vec_quant(double x, double y, INIT_TYPE type = INIT_TYPE::CARTESIAN);
    vec_quant();
    /* Getters */
    double get_angle() const;
    double get_magnitude() const;
    double get_x() const;
    double get_y() const;

    /* Setters */
    void set_angle(double angle);
    void set_magnitude(double mag);

    /* Operators Overloading */
    vec_quant  operator + (const vec_quant& d);
    vec_quant  operator - (const vec_quant& d);
    vec_quant& operator = (const vec_quant& d);
};

#endif