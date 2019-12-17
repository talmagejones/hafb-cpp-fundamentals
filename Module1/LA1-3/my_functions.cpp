#include <iostream>
#include "my_functions.h"
using namespace std;

/**
 * @brief Finds the sum of two input numbers
 * 
 * @param num1 : input number 1
 * @param num2 : input number 2
 * @return int : returned sum
 */
int Sum(int num1, int num2) // pass both parameters by value (make your own copy)
{
  return num1 + num2;  
}

/**
 * @brief This function increments the value of step by 1
 * 
 * @param step : current step value
 */
void UpdateStep (int step)
{
    cout << "Current step: " << step << endl;
    step += 1;
    cout << "New step: " << step << endl;
    return;
}

/**
 * @brief This function increments the value of step by 1
 * 
 * @param step : current step value
 */
void UpdateStepRef (int& step) // pass the address of the parameter so we can actually modify the variable
{
    cout << "Current step: " << step << endl;
    step += 1;
    cout << "New step: " << step << endl;
    return;
}
