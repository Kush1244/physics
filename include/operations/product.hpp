#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include "../quantities/scalar_quantity.hpp"
#include "../quantities/vec_quantity.hpp"
scalar_quantity dot_product(const vec_quantity& a, const vec_quantity& b) {}
vec_quantity cross_product(const vec_quantity& a, const vec_quantity& b) {}

/* Operator Overload for cross and dot product */
scalar_quantity operator*(const vec_quantity& a, const vec_quantity& b) {
  return dot_product(a, b);
}

vec_quantity operator|(const vec_quantity& a, const vec_quantity& b) {
  return cross_product(a, b);
}

vec_quantity operator+(const vec_quantity& a, const vec_quantity& b) {}
vec_quantity operator-(const vec_quantity& a, const vec_quantity& b) {}

#endif  // PRODUCT_HPP
