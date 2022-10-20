#pragma once

#include <iostream>

class dimension
{
    // Dimension of Points
private:
    double *arr{nullptr};
    int m_N;

public:
    dimension(int N) : m_N(N)
    {
        arr = new double[m_N];
    }

    ~dimension()
    {
        delete[] arr;
        arr = nullptr;
    }

    friend std::ostream &operator<<(std::ostream &os, const dimension d);
};

std::ostream &operator<<(std::ostream &os, const dimension d)
{
    os << "Dimension is " << d.m_N;
    return os;
}
