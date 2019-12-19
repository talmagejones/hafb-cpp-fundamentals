#include <iostream>
#include "distance.h"

/**
 * @brief show the distance and inches in:
 * feet and inches
 */
void Distance::ShowDist() const
{
    std::cout << feet() << "\' " << inches() << "\"" << std::endl; 
}

/**
 * @brief Plus + operator for distance objects
 * 
 * @param d2 Second Distance object
 * @return Distance : sum of self + d2 objects
 */
Distance Distance::operator + (Distance rhs) const
{
    int feet = feet_ + rhs.feet_;
    float inches = inches_ + rhs.inches_;
    // update values IF inches > 12
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    Distance temp(feet, inches);
    return temp;
}