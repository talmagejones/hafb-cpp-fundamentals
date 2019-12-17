/*
** EPITECH PROJECT, 2019
** my_functions
** File description:
** my_functions
*/

#pragma once
#include <array>

int Sum(int num1, int num2);
void UpdateStep (int step); // "pass by value"
void UpdateStepRef (int& step); // int& specifies that we are passing the actual variable in ("pass by address or reference")
int Max2(int num1, int num2);
int Max3(int num1, int num2, int num3);
//int Max10(std::array<int,10> nums);
//int Max10(std::array<int,10>& nums);    // this will be faster because it is passing by reference instead of passing over a value of each element, but it allows the funciton to edit 
int Max10(const std::array<int,10>& nums);  // this uses a constant address so you pass by reference, but can't modify
void ClearElements(std::array<int,10> nums);