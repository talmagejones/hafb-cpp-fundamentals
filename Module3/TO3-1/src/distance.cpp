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


std::ostream& operator << (std::ostream& os, const Distance& distance)
{
    // NOT to include a '\n' or endl character (let the user do it in main if they want)
    os << "feet: " << distance.feet_ << " inches: " << distance.inches_;
    return os;
}

Distance Distance::operator - (Distance rhs) const
{
    int ft = feet_ - rhs.feet_;
    float in = 0;
    if(inches_ < rhs.inches_)
    {
        ft--;
        in = (inches_ + 12) - rhs.inches_;
    }
    Distance temp(ft,in);
    //   Distance temp;
    return temp;
}