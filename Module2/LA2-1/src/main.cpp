#include <iostream>
#include <string>

/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // create a variable of type string
  std::string name = "BYU Cosmo";

  // print it out
  std::cout << name << std::endl;

  // // get a string from a user
  // std::cout << "Enter your full name: " << std::endl;

  // // to get strings with spaces, use getline() instead
  // getline(std::cin, name);
  // std::cout << "Hi " << name << std::endl;

  // add two strings together
  std::string title = "Dr.";
  std::string formal;
  formal = title + " " + name;
  std::cout << "Hi: " << formal << std::endl;

  // how long is the string
  std::cout << "The length of name is " << name.size() << std::endl;
  std::cout << "The length of title is " << title.size() << std::endl;
  std::cout << "The length of formal is " << formal.size() << std::endl;
  std::cout << "The length of formal is " << formal.length() << std::endl; // size is the same as length


  // use [] to get an individual character
  std::cout << "The first character of name is " << name[0] << std::endl;
  std::cout << "The third character of name is " << name[2] << std::endl;

  // get name and commute information from a user
  int minutes, miles;
  std::cout << "Enter your full name: " << std::endl;
  getline(std::cin, name);
  std::cout << "How long is your commute in minutes? ";
  std::cin >> minutes;
  std::cout << "How long is your commute in miles? ";
  std::cin >> miles;
  std::cout << name << " has a " << minutes << " minute, " << miles 
    << " mile commute." << std::endl;

  // the string function find
  std::string story = 
    "adsfds dhdf gf dsfg sfdg qewro werf wfe sjdf sdf sdfewioqew nqew dewn ewewnew ew ewd"
    "zsdgff  sdfgdf df gd dfgdfs dsfg dfg.dfg dgh.d ger gyre .ergr fdgdfg";

  std::cout << "wfe is at location: " << story.find("wfe") << std::endl;

  // the string function replace
  std::cout << story << std::endl;
  std::string nick = "wfe";
  std::string new_nick = "XXXXX";
  story.replace(story.find(nick), nick.size(), new_nick); // replace wfe with xxxxx
  std::cout << story << std::endl;



  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
