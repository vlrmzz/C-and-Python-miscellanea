#pragma once

#include "HSLAPixel.h"


namespace uiuc {
    class Cube {
        public:
            Cube(double length, HSLAPixel color); // Custom constructor

            double getLength() const;
            void setLength(double length);

            double getVolume() const;
            double getSurfaceArea() const;

        private:
            double length_;
            HLSAPixel color_;
    };
}