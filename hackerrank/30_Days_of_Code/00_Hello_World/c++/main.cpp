// Hello_World_C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declare the variable to hold the input
    std::string input;

    // read in the input from stdin
    getline(cin, input);

    // output "Hello, World." to stdout
    std::cout << "Hello, World.\n";

    // output the recorded input to stdout
    std::cout << input;
}