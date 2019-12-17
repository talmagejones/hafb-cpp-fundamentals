#include <array>      // for array containers
#include <iostream>   // baisc I/O
#include <string>     // strings
#include <fstream>    // file stream

using namespace std;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */

const int kMaxSize = 24;
int main() {
  // create an ojbect of type ifstream
  std::ifstream in;   // inputFileStream
  // open the file age.txt
  in.open("../age.txt");  // relative path from the executable
  if(in.fail())
  {
    std::cout << "Unable to open file age.txt.\nShutting down.\n";
    return 1;
  }
  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  ages.fill(-1); // initialize elements to -1
  int age_size = 0;
  // in >> ages[age_size];
  // age_size++;
  // in >> ages[age_size++];
  // in >> ages[age_size++];

  // read to the end of the file
  while(age_size < kMaxSize && in >> ages[age_size])
{
  age_size++;
}
  // print out the values in the array
  for(auto age: ages)
  {
    std::cout << age << std::endl;
  }

  in.close();   // close input file

  // print out the valid values in the array


  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt
  std::ifstream in_names;
  in_names.open("../name.txt");
  if(in_names.fail())
  {
    std::cout << "Unable to open file age.txt.\nShutting down.\n";
    return 1;
  }

  // read one name, store it in the array, and print it
  std:array<string, kMaxSize> names;
  names.fill("-");
  int name_index = 0; // array index

  while(name_index < kMaxSize && std::getline(in_names, names[name_index]))
  {
    name_index++;
  }

  for(auto name : names)
  {
    std::cout << name << std::endl;
  }

  in_names.close();

  // read the rest of the names in the file


  // print valid elements in the names array


  // print all the elements in the names array


  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt
  std::ifstream in_name_age;
  in_name_age.open("../name_age.txt");
  if(in_name_age.fail())
  {
    std::cout << "Unable to open file in_name_age.txt.\nShutting down.\n";
    return 1;
  }

  // reset age and name arrays
  ages.fill(-1);
  names.fill("-");
 
  // read all the values from the name_age.txt file
  int index = 0;
  while(index < kMaxSize && in_name_age >> ages[index])
  {
    in_name_age.ignore();
    std::getline(in_name_age, names[index]);
    index++;
  }
  // print valid elements in the names and ages array


  // print all elements in the names and ages array


  return 0;
}
