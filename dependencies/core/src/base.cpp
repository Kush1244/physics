#include <core/base.h>
#include <utility>
#include <cmath>

void vec_quant::init_mag() {
    x_comp = m_magnitude * cos(m_angle);
    y_comp = m_magnitude * sin(m_angle);
}

double vec_quant::find_angle() {
    return atan(abs(y_comp / x_comp));
}

vec_quant::vec_quant() 
    : x_comp(0), y_comp(0),
      m_angle(0), m_magnitude(0) {

  }    

vec_quant::vec_quant(double x, double y, INIT_TYPE type) {
    if(type == INIT_TYPE::CARTESIAN) {
        x_comp = std::move(x);
        y_comp = std::move(y);
        m_magnitude = sqrt(x_comp * x_comp + y_comp * y_comp);
        m_angle = find_angle();
    }
    else {
        m_angle = std::move(y);
        m_magnitude = std::move(x);
        init_mag();
    }

}

double vec_quant::get_angle() const {
    return m_angle;
}

double vec_quant::get_x() const {
    return x_comp;
}

double vec_quant::get_y() const {
    return y_comp;
}

double vec_quant::get_magnitude() const {
    return m_magnitude;
}

void vec_quant::set_angle(double angle) {
    m_angle = std::move(angle);
    init_mag();
}

void vec_quant::set_magnitude(double mag) {
    m_magnitude = std::move(mag);
    init_mag();
}

vec_quant vec_quant::operator + (const vec_quant& d) {
    return vec_quant(x_comp + d.x_comp, y_comp + d.y_comp, INIT_TYPE::CARTESIAN);
}

vec_quant vec_quant::operator - (const vec_quant& d) {
    return vec_quant(x_comp - d.x_comp, y_comp - d.y_comp, INIT_TYPE::CARTESIAN);
}

vec_quant& vec_quant::operator = (const vec_quant& d) {
    x_comp = d.x_comp;
    y_comp = d.y_comp;
    m_angle = find_angle();
    return *this;
}