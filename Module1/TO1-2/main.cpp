#include <iostream>
#include "factor.h"
using namespace std;

/**
 * @brief Calculate the number of instances a number is
 * divisble by 3 in the range 1 through 30
 * 
 * @return int 
 */

int main()
{
    unsigned int input1;
    unsigned int input2;
    unsigned int returned_value1;

    FactorMod3();

    cout << "What do you want to divide by? ";
    cin >> input1;
    FactorModX(input1);

    cout << "What do you want as your max range? ";
    cin >> input2;
    FactorModXRange(input1,input2);

    returned_value1 = GetFactorModXRange(input1,input2);
    cout << "The result returned from the GetFactorModXRange function is: "<< returned_value1 << endl;
    // or
    unsigned int returned_value2 = GetFactorModXRange(input1,input2);
    cout << "The result returned from the GetFactorModXRange function is: "<< returned_value2 << endl;
    // or with auto (uses the same type)
    auto returned_value3 = GetFactorModXRange(input1,input2);
    cout << "The result returned from the GetFactorModXRange function is: "<< returned_value3 << endl;

    return 0;
}