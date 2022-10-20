#pragma once

class vec_quantity
{
private:
    double i_compnent, j_component, k_component;

public:
    vec_quantity(double i, double j, double k)
        : i_compnent(i), j_component(j), k_component(k)
    {
    }

    vec_quantity()
        : vec_quantity(0.0, 0.0, 0.0)
    {
    }

    vec_quantity(const vec_quantity &v)
        : vec_quantity(v.i_compnent, v.j_component, v.k_component)
    {
    }
    double get_i()
    {
        return i_compnent;
    }

    double get_j()
    {
        return j_component;
    }

    double get_k()
    {
        return k_component;
    }
};