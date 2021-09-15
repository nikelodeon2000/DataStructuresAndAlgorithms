#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> data;
    int temp;
    int key;
    int comparison;

    std::cout << "Enter your array q to finish: ";
    while (std::cin >> temp)
    {
        data.push_back(temp);
    }

    for (int j = 1; j < data.size(); j++) //start at element 2 and work up until last element
    {
        key = data.at(j);                                    //key = current number being considered
        comparison = j - 1;                                  //sorted element index to the left
        while (comparison >= 0 && data.at(comparison) > key) //while comparison is bigger than key and not at index 0
        {
            data.at(comparison + 1) = data.at(comparison); //comparison is shifted right
            comparison--;                                  //comparison index shifted left
        }
        data.at(comparison + 1) = key; //insert key into last shifted index
    }

    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data.at(i) << ", ";
    }
}

//I ADDED SOME CHANGE FOR A TEST
