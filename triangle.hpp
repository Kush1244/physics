#pragma once

#include <cmath>

class triangle
{
private:
    double m_a, m_b, m_c;

public:
    triangle(double x, double y, double z)
        : m_a(x), m_b(y), m_c(z)
    {
    }

    triangle()
        : triangle(1.0, 1.0, 1.0)
    {
    }

    double perimeter()
    {
        return m_a + m_b + m_c;
    }

    double area()
    {
        double s = (m_a + m_b + m_c) / 2;
        return sqrt(s * (s - m_a) * (s - m_b) * (s - m_c));
    }

    void operator()()
    {
        std::cout << "Operator Overloading";
    }
};