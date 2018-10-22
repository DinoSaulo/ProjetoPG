#pragma once

#include "Geometry.h"
#include "Material.h"
#include "ObjectIntersection.h"

class Object {
public:
    Geometry* geometry;
    Material* material;
public;
    Object(Geometry* geometry, Material* materal);

    /*
    Retorna true se r intersecta o objeto e falso caso contrário
    Guarda possíveis informações sobre a intersecção em info, caso seja provido.
    */
   boll intersect(const Ray& r, ObjectIntersection* info = nullptr);
}