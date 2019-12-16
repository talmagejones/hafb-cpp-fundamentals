#include <iostream>
using namespace std;

int main()
{
    int age;    // int: signed integers
    // cout: for system output
    std::cout << "My name is Talmage" << std::endl;
    cout << "Now I'm using namespace std" << endl;
    cout << "Cougars"<<" "<<"BYU "<<"Provo"<< endl;
    // cin: for system/user input
    cout << "What is your age?"<< endl;
    cin >> age;
    cout << "I see you are " << age << " years old" << endl;
    //sizeof: get the size of the variable
    cout << "Integers are " << sizeof(int) << " bytes. " << endl;
    cout << "Min Integer value: " << INT32_MIN << " bytes." <<
        "Max Integers value: " << INT32_MAX << " bytes." << endl;

    return 0;
}