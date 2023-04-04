#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    std::string words[10] = {"apple", "banana", "carrot", "dog", "elephant", "fish", "grape", "house", "igloo", "jacket"};
    
    std::srand(std::time(nullptr)); // seed the random number generator with the current time
    
    for (int i = 0; i < 10; i++)
    {
        int randomIndex = std::rand() % 10; // generate a random index between 0 and 9
        std::cout << words[randomIndex] << std::endl; // print the word at that index
    }
    
    return 0;
}
