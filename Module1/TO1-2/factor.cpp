#include "factor.h"
#include <iostream>
using namespace std;

/**
 * @brief 
 * 
 */
void FactorMod3()
{
    unsigned int count = 0;
    for (unsigned int x = 1; x <= 30; ++x)
    {
        if (x % 3 == 0)
        {
             count++;
        }
    }
    cout << "The result is: " << count << endl;
}

/**
 * @brief Calculate the number of instances divisible
 *  by input parameter in the range 1 through 30
 * 
 * @param mod_number: the divisible number
 */
void FactorModX(int mod_number)
{
    // Everything in here already knows about mod_number
    unsigned int count = 0;
    for (unsigned int x = 1; x <= 30; ++x)
    {
        if (x % mod_number == 0)
        {
             count++;
        }
    }
    cout << "The result is: " << count << endl;
}

/**
 * @brief Calculate the number of instances divisible
 *  by input parameter in the range 1 through an input parameter
 * 
 * @param mod_number: the divisible number
 * @param max_range: the maximum range 
 */
void FactorModXRange(int mod_number, int max_range)
{
    unsigned int count = 0;
    for (unsigned int x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
        {
             count++;
        }
    }
    cout << "The result is: " << count << endl;
}

/**
 * @brief Get the Factor Mod X Range object
 * 
 * @param mod_number : the divisible number
 * @param max_range : the maximum range 
 * @return unsigned int : number of instances
 */
unsigned int GetFactorModXRange(int mod_number, int max_range)
{
        unsigned int count = 0;
    for (unsigned int x = 1; x <= max_range; ++x)
    {
        if (x % mod_number == 0)
        {
             count++;
        }
    }
    return count;
}