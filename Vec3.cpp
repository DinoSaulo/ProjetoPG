#include "Vec3.h"

double Vec3::getX() const{
  return x;
}

double Vec3::getY() const{
  return y;
}

double Vec3::getZ() const{
  return z;
}

Vec3::Vec3(double x, double y, double z) : x(x), y(y), z(z) {}

Vec3 Vec3::operator+(const Vec3 rhs) const{
  return Vec3(x + rhs.x, y + rhs.y, z + rhs.z);
}

Vec3 Vec3::operator*(const double rhs) const{
  return Vec3(x * rhs, y * rhs, z * rhs);
}

Vec3 Vec3::operator*(const Vec3 rhs) const{
  double matrix[6] = {x, y, x, rhs.getX(), rhs.getY(), rhs.getZ()};
  return Vec3(matrix[1]*matrix[5] - matrix[2]*matrix[4],
  matrix[0]*matrix[0] - matrix[0]*matrix[0],
  matrix[0]*matrix[0] - matrix[0]*matrix[0]
);
}
