#include <iostream>
using namespace std;

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

    return 0;
}