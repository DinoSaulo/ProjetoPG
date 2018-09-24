#pragma once

class Vec3 {
private:
  double x, y, z;
public:
  double getX();
  double getY();
  double getZ();
  Vec3(double x, double y, double z);
  Vec3 operator+(const Vec3 rhs) const;
  Vec3 operator*(const double rhs) const;
};
