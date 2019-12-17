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

/**
 * @brief Returns the max of the 2 input numbers
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int Max2(int num1, int num2)
{
  int max;
  if (num1 > num2)
  {
    max = num1;
  }
  else
  {
    max = num2;
  }
  return max;
}

/**
 * @brief Returns the max of the 2 input numbers
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int Max3(int num1, int num2, int num3)
{
  int max;
  if (num1 > num2 && num1 > num3)
  {
    max = num1;
  }
  else if (num2 > num1 && num2 > num3)
  {
    max = num2;
  }
  else
  {
    max = num3;
  }
  return max;
}

int Max10(const std::array<int,10>& nums)
{
  int max = nums[0];  //get the first element
  for(auto num : nums)
  {
    if(max <= num)
    {
      max = num;
    }
  }
  return max;
}

void ClearElements(std::array<int,10>& nums)
{
  for(unsigned int index = 0; index < nums.size(); ++index)
  {
    nums[index] = -99;
  }
  return;
}