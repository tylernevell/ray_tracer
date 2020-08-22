#include <iostream>
#include "Vec3.h"
#include "Color.h"

int main() {
    // Image 
    
    const int image_width = 256;
    const int image_height = 256;

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    // rows written out from top to bottom
    for (int j  = image_height - 1; j >= 0; --j) {
        std::cerr << "\rScanlines remaing: " << j << std::flush;
        // pixels written out in rows with pixels left to right
        for (int i = 0; i < image_width; ++i) {
            
            // make a vector color
            Color pixel_color(double(i) / (image_width - 1), double(j) / (image_height - 1), 0.25);
            // pass operator you want to use and pass color vector
            write_color(std::cout, pixel_color);

            // Red goes from full off (black) to fully on (bright red) from left to right
            // Green goes from black at the bottom to fully on at the top
            // upper right corner should be yellow
        }
    }
    std::cerr << "\nDone.\n";
}