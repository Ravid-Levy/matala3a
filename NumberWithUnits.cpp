#include "NumberWithUnits.hpp"
#include <iostream>

namespace ariel {
void NumberWithUnits::read_units(std::ifstream &units_file) {}
NumberWithUnits NumberWithUnits::operator+() {
  NumberWithUnits Demo(100, "kg");
  return Demo;
}
NumberWithUnits NumberWithUnits::operator-() {
  NumberWithUnits Demo(100, "kg");
  return Demo;
}

NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits &nm) {
  NumberWithUnits Demo(100, "kg");
  return Demo;
}
NumberWithUnits &NumberWithUnits::operator+=(const NumberWithUnits &nm) {
  return *this;
}
NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits &nm) {
  NumberWithUnits Demo(100, "kg");
  return Demo;
}
NumberWithUnits &NumberWithUnits::operator-=(const NumberWithUnits &nm) {
  return *this;
}
NumberWithUnits NumberWithUnits::operator--(int n) {
  NumberWithUnits Demo(100, "kg");
  return Demo;
}
NumberWithUnits NumberWithUnits::operator++(int n) {
  NumberWithUnits Demo(100, "kg");
  return Demo;
}
NumberWithUnits NumberWithUnits::operator--() {
  NumberWithUnits Demo(100, "kg");
  return Demo;
}
NumberWithUnits NumberWithUnits::operator++() {
  NumberWithUnits Demo(100, "kg");
  return Demo;
}
bool NumberWithUnits::operator==(const NumberWithUnits &num) const {
  return false;
}
bool NumberWithUnits::operator!=(const NumberWithUnits &num) const {
  return false;
}
bool NumberWithUnits::operator>(const NumberWithUnits &num) const {
  return false;
}
bool NumberWithUnits::operator<(const NumberWithUnits &num) const {
  return false;
}
bool NumberWithUnits::operator<=(const NumberWithUnits &num) const {
  return false;
}
bool NumberWithUnits::operator>=(const NumberWithUnits &num) const {
  return false;
}
std::ostream &operator<<(std::ostream &ot, const NumberWithUnits &nm) {
  return (ot << "hey");
}
std::istream &operator>>(std::istream &in, NumberWithUnits &nm) {
  int numo = 1040;
  return (in >> numo);
}
NumberWithUnits operator*(double num, NumberWithUnits &num1) {
  NumberWithUnits Demo(100, "kg");
  return Demo;
}
} // namespace ariel