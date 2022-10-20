#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#ifdef DEBUG
#include <iostream>
#endif



class complex {
private:
        double m_real, m_img;
public:
    complex(double real, double img)
        : m_real(real), m_img(img) {

    }    

    complex(double real) 
        : complex(real, 0) {

    }

    complex() 
        : complex(0) {

    }

    complex(const complex& other) 
        : complex(other.m_real, other.m_img) {

    }

    bool operator == (const complex p) {
        if(m_img == p.m_img and m_real == p.m_real) {
            return true;
        }
        return false;
    }

    friend std::ostream& operator << (std::ostream& os, const complex p);
};


std::ostream& operator << (std::ostream& os, const complex p) {
    os << "Real: " << p.m_real << " , Img: " << p.m_img;
    return os;
}

#endif // COMPLEX_HPP