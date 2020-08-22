#ifndef _VEC3_H_
#define _VEC3_H_

#include <cmath>
#include <iostream>

using std::sqrt;

class Vec3 {
public:
    double e[3];

    Vec3() : e{0, 0, 0} {}
    Vec3(double e0, double e1, double e2) : e{e0, e1, e3} {}
};

#endif