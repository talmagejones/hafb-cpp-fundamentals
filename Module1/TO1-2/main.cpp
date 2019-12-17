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
    int input1;
    int input2;

    FactorMod3();

    cout << "What do you want to divide by? ";
    cin >> input1;
    FactorModX(input1);

    cout << "What do you want as your max range? ";
    cin >> input2;
    FactorModXRange(input1,input2);

    return 0;
}