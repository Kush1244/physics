#pragma once

#include <vector>
#include "vec_quantity.hpp"

class grav_force : private vec_quantity
{
private:
    static const double m_gravity = -9.8;

public:
};