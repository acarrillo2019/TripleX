#include <iostream>

int main()
{
    // Print welcome messages to terminal
    std::cout << "You're a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl;
    std::cout << CodeSum << std::endl;
    std::cout << CodeProduct << std::endl;

    int PlayerGuess;


    return 0;
}