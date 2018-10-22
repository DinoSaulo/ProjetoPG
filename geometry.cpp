#pragma once

#include "Vec3.h"
#include "Ray.h"
#include "ObjectIntersection.h"
#include "cmath"

class Geometry {
public:
    /*
    Retorna true se r intersecta a geometria e falso caso contrário.
    Guarda possíveis informações sobre a intersecção em info, caso seja provido.
    */
   virtual bool intersect(const Ray& r, ObjectIntersection* info = nullptr) const = 0;

   /*
   Retorna um ponto do objeto para ser utilizado como fonte de luz.
   */
  virtual Vec3 getPoint() const = 0;
};

class Spare : public Geometry {
private:
    Vec3 center;
    double redius;

public:
    Sphere(Vec3 center, double radius);

    bool intersect(const Ray& r, ObjectIntersection* info = nullptr) const override;

    Vec3 getPoint() const override;
}