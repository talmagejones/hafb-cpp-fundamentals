/**
 * @file my_array.cpp
 * @author your name (you@domain.com)
 * @brief Learn about C-Style arrays
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

const int kMaxNum = 5;
const int kMaxRow = 3;
const int kMaxCol = 5;

int main()
{
    // C-Style
    // Array notation: type name[elements];
    // To access elements, use Index notation: begins at 0
    // int grades[kMaxNum];  // an array of 5 integers
    // int grades[kMaxNum] = {10, 20, 30, 10, 50};  // an array of 5 integers
    int grades[] = {10, 20, 30, 10, 50};  // an array of 5 integers set by the compiler
    //int grades[kMaxNum] = {10, 20, 30};  // an array of 5 integers, initialize 3, rest are 0
 
    float average = 0;
    int sum = 0;
    // cout << "Enter your exam grades" << endl;
    for(int num = 0; num < kMaxNum; ++num)
    {
        // cout << "Exam grade " << num+1 << ": ";
        // cin >> grades[num]; // access each element using 
        // average = average + grades[num]
        average += grades[num];
        sum += grades[num];
    }

    average = average/kMaxNum;
    cout << "Your average exam score is: " << average << endl;
    // Cast or change variable type from integer to float to preserve fraction (it is good to keep for as an integer as long as possible to not waste space)
    // static_cast<type>(variable)  [from C, you can use (type)(variable)]
    average = static_cast<float>(sum)/kMaxNum;
    cout << "Your average exam score is: " << average << endl;

    // 2D Arrays: type name[row][column]
    int bi_array[3][5]={
        {2,4,6,11,67},
        {2,54,6,4,76},
        {23,454,34,56,5}
    };
    // Print each element in the array
    int row,col;
    cout << "Enter row number: ";
    cin >> row;
    cout << "Enter col number: ";
    cin >> col;
    cout << "Array element at position " << row << "," << col << ": " << bi_array[row-1][col-1];

    return 0;
}