/**
 * @file multi_tables.cpp
 * @author Talmage Jones (talmagehjones@gmail.com)
 * @brief Display multiplication tables based on user input
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <iomanip>
using namespace std;

const int kMax = 12;

int main()
{
    int number;
    cout << "Enter a value to print multiplication tables: " << endl;
    cin >> number;
    cout << setiosflags(ios::showpoint);

    for (int num1 = 1; num1 <= number; ++num1)
    {
        for (int num2 = 1; num2 <= kMax; ++num2)
        {
            cout << setw(4) << num1*num2;
        }
        cout << endl;
    }

    return 0;
}