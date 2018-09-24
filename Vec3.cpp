#include "Vec3.h"

double Vec3::getX(){
  return x;
}

double Vec3::getY(){
  return y;
}

double Vec3::getZ(){
  return z;
}

Vec3::Vec3(double x, double y, double z) : x(x), y(y), z(z) {}

Vec3 Vec3::operator+(const Vec3 rhs) const{
  return Vec3(x + rhs.x, y + rhs.y, z + rhs.z);
}

Vec3 Vec3::operator*(const double rhs) const{
  return Vec3(x * rhs, y * rhs, z * rhs);
}
