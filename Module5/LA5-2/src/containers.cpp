#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>


void Load_Data(std::vector<Data>& data, const std::string& input_file)
{
    Data temp;
    csvstream csvinput(input_file);
    std::map<std::string, std::string> row;
    // Extract the animal column
    while(csvinput >> row)
    {
        // std::cout << row["id"] << ","
        //     << row["name"] << ","
        //     << row["animal"] << ","
        //     <<std::endl;
        temp.id = std::stoi(row["id"]);
        temp.name = row["name"];
        temp.animal = row["animal"];
        data.push_back(temp);   // load Data struct into vector
    }
}