#include <iostream>
using namespace std;

// Constants
const float kMetersToInches = 39.37;
const float kKilosToPunds = 2.204;
const int kBMIImperial = 703;
const float kLowBMILimit = 18.5;
const float kHighBMILimit = 24.9;

int main()
{
    // Calculate BMI: weight(kg)/[height(m)]^2
    // Floating point variables: float, double
    float weight = 0, height = 0, bmi = 0;  // open the space and intialize it 
    /*
    cout << "Enter your weight in kg: " << endl;
    cin >> weight;
    cout << "Enter your height in m: " << endl;
    cin >> height;
    bmi = weight / (height * height);
    cout << "Your BMI (metric) is: \n" << bmi << endl;
    */

    // Task: Now, convert it to imperial units
    // Calculate BMI (imperial): (weight(lbs)) * 703/[height(in)]^2
    // 1m = 39.37in
    // 1kg = 2.204lbs
    cout << "Enter your weight in lbs: " << endl;
    cin >> weight;
    cout << "Enter your height in inches: " << endl;
    cin >> height;
    bmi = weight * kBMIImperial / (height * height);
    cout << "Your BMI (imperial) is: \n" << bmi << endl;

    // Task: Print if they are in the "good" range: BMI is in the 18.5 to 24.9
    // && (AND) to test two conditions
    if(bmi > kLowBMILimit && bmi < kHighBMILimit)
    {
        cout << "\nYour BMI of " << bmi << " is good\n" << endl;
    }
    else
    {
        cout << "\nYour BMI of " << bmi << " is bad\n" << endl;
    }
    
    cout << "Thank you for using BMI program" << endl;

    return 0;
}