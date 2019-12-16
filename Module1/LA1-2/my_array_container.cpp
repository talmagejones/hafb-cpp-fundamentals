/**
 * @file container.cpp
 * @author your name (you@domain.com)
 * @brief Learn C++ array container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
#include <array>        // array container
using namespace std;

int main()
{
    // To create arrays with library:
    // array<type, numOfElements> name;
    array<double, 5> grades {23.4,234.3,23,34.3,1.0};

    cout << "Size of array: " << grades.size() << endl;
    cout << "Array empty: " << grades.empty() << endl;

    for(int index = 0; index < grades.size(); ++index)
    {
        cout << grades[index] << endl;
    }

    // For each loop (run for each value in the array)
    cout << "For each: " << endl;
    for(auto grade : grades)
    {
        cout << grade << endl;
    }

    return 0;
}