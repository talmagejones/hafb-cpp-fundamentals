#include <iostream>
#include "containers.h"
using namespace std;

// Main Function
int main()
{
  std::vector<Data> education_data;
  std::string in_file = "../data/sample_data.csv";
  Load_Data(education_data, in_file);
  // Loop
  for(const auto& value : education_data)
  {
    std::cout << value.id 
      << "\t" << value.gender
      << "\t" << value.school 
      << "\t" << value.state
      << endl;
  }

  return 0;
}