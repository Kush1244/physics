#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include <stdexcept>

class point {
	private:
		double m_x, m_y, m_z;
	public:
    /* constructors */
		point(int X, int Y, int Z)
			: m_x(X), m_y(Y), m_z(Z) {

		}

		point(int common_val)
			:point(common_val, common_val, common_val) {

		}
        
        point(int X, int Y) 
            :point(X, Y, 0) {

        }
        
		point() 
			:point(0.0, 0.0, 0.0) {

		}
		
		point(const point& p) // Copy Constructor 
			:point(p.m_x, p.m_y, p.m_z) {

		}
		
		/* Getters */	
        double get_x() {
			return m_x;
		}	
		
        double get_y() {
			return m_y;
		}

        double get_z() {
            return m_z;
        }

		/* Setters */
		void set_x(double x) {
			m_x = x;
		}

		void set_y(double y) {
			m_y = y;
		}

		void set_z(double z) {
			m_z = z;
		}
		/* Member Functions */
		double distance(point p = point()) {
			auto first = (m_x - p.m_x), second = (m_y - p.m_y), third = m_z - p.m_z;
			return sqrt(first * first + second * second + third * third);
		}

		/* Operator Overloading */	
		friend std::ostream& operator << (std::ostream& os, const point p);
		
		bool operator == (const point p) {
			if(m_x == p.m_x and m_y == p.m_y and m_z == p.m_z) {
				return true;
			}
			return false;
		}

		double& operator [] (int index) {
			if(index == 0) {
				return m_x;
			}
			if(index == 1) {
				return m_y;
			}
			if(index == 2) {
				return m_z;
			}
			throw std::out_of_range("index must be in between 0 and 2");
		} 

		point& operator = (double n) {
			m_x = m_y = m_z = n;
			return *this;
		}

		point& operator = (const point p) {
			m_x = p.m_x;
			m_y = p.m_y;
			m_z = p.m_z;
			return *this;
		}
};

std::ostream& operator << (std::ostream& os, const point p) {
    os << "X: " << p.m_x << " , Y: " << p.m_y << " , Z: " << p.m_z;
    return os;
}

#endif // POINT_HPP
