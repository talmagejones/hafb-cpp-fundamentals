#include "age.h"

void ByValueAgeIn5Years(int age) // pass by value
{
    age += 5;
}

void ByReferenceAgeIn5Years(int& age) // pass by reference
{
    age += 5;
}

int CurrentAge(int age) // pass by value
{
    return age;
}
