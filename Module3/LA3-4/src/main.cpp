
#include <iostream>
#include "distance.h"

// Main Function
int main()
{
  Distance d1(34,9.5);
  d1.ShowDist();
  Distance d2(10, 8.5);
  d2.ShowDist();
  // add two objects
  Distance d3;
  d3 = d1 + d2;
  d3.ShowDist();
  Distance d5;
  d5 = d1 - d2;
  std::cout<<"subtract"<<std::endl;
  d5.ShowDist();
  d5.update_distance(4,5);
  std::cout<<"should be 4' 5\""<<std::endl;
  d5.ShowDist();
  Distance d4 = d1 + d2 + d3;
  d4.ShowDist();
  // Display info with stdout
  std::cout << d4 << std::endl;

  if(d1 < d2)
  {
    std::cout << d1 << " is less than " << d2 << std::endl;
  }

  d2 = d1;  // aSSIGNMENT operator invoked
  std::cout << d2 << " and " << d1 << std::endl;
  // Initialization is not the same thing as assignment
  Distance d3 = d2; //Assignment operator not invoked
  std::cout << d3 << " and " << d1 << std::endl;
  return 0;
}
