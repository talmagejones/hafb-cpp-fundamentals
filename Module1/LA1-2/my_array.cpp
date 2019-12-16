/**
 * @file my_array.cpp
 * @author your name (you@domain.com)
 * @brief Learn about C-Style arrays and C++ array container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

const int kMaxNum = 5;

int main()
{
    // C-Style
    // Array notation: type name[elements];
    // To access elements, use Index notation: begins at 0
    int grades[kMaxNum];  // an array of 5 integers
    float average = 0;
    int sum = 0;
    cout << "Enter your exam grades" << endl;
    for(int num = 0; num < kMaxNum; ++num)
    {
        cout << "Exam grade " << num+1 << ": ";
        cin >> grades[num]; // access each element using 
        // average = average + grades[num]
        average += grades[num];
        sum += grades[num];
    }

    average = average/kMaxNum;
    cout << "Your average exam score is: " << average << endl;
    // Cast or change variable type from integer to float to preserve fraction (it is good to keep for as an integer as long as possible to not waste space)
    // static_cast<type>(variable)  [from C, you can use (type)(variable)]
    average = static_cast<float>(sum)/kMaxNum;
    cout << "Your average exam score is: " << average << endl;;
    return 0;
}