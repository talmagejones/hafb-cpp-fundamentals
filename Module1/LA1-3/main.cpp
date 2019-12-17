#include <iostream>
#include "my_functions.h"
#include <array>
using namespace std;

// Main Function
int main()
{
  int number1, number2, number3, number4, number5, number6, number7, number8, number9, number10;
  
  cout << "Enter 3 numbers: " << endl;
  cin >> number1;
  cin >> number2;
  cin >> number3;
  cin >> number4;
  cin >> number5;
  cin >> number6;
  cin >> number7;
  cin >> number8;
  cin >> number9;
  cin >> number10;

  array<int,10> my_array;
  
  cout << "The sum of " << number1 << " and " << number2 
    << " is: " << Sum(number1, number2) << endl;

  cout << "Number before UpdateStep() " << number1 << endl;
  UpdateStep(number1);
  cout << "Number after UpdateStep() " << number1 << endl;

  cout << "Number before UpdateStep() " << number1 << endl;
  UpdateStepRef(number1);
  cout << "Number after UpdateStep() " << number1 << endl;

  cout << "The maximum of " << number1 << " and " << number2 
    << " is: " << Max2(number1, number2) << endl;

  cout << "The maximum of " << number1 << ", " << number2 << " and " << number3 
    << " is: " << Max3(number1, number2, number3) << endl;

  ClearElements(my_array);
  for(int index = 0; index < my_array.size(); ++index)
  {
    cout << my_array[index];
  }
  


  return 0;
}