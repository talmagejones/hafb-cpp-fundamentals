#include <iostream>
using namespace std;

// Constants
const float kMetersToInches = 39.37;
const float kKilosToPunds = 2.204;
const float kBMIImperial = 703;

int main()
{
    // Calculate BMI: weight(kg)/[height(m)]^2
    // Floating point variables: float, double
    float weight = 0, height = 0, bmi = 0;  // open the space and intialize it 
    cout << "Enter your weight in kg: " << endl;
    cin >> weight;
    cout << "Enter your height in m: " << endl;
    cin >> height;
    bmi = weight / (height * height);
    cout << "Your BMI is: \n" << bmi << endl;

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

    return 0;
}