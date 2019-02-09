#include <iostream>
#include "vec3.h"

int main()
{
    int nx = 2000;
    int ny = 1000;

    std::cout << "P3\n" << nx << " " << ny << "\n255\n";

    for(int j = ny - 1; j >= 0; j --)
    {
        for(int i = 0; i < nx; i ++)
        {
            // double r = double(i) / double(nx);
            // double g = double(j) / double(ny);
            // double b = 0.2;
            vec3 col(double(i) / double(nx), double(j) / double(ny), 0.2);

            int ir = int(255.99 * col[0] /* r */);
            int ig = int(255.99 * col[1] /* g */);
            int ib = int(255.99 * col[2] /* b */);

            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }

    return 0;
}
