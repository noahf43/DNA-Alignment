// Copyright 2023
// By Noah
#include "ps5.hpp"
int main(int argc, char* argv[]) {
    sf::Clock clock;
    sf::Time t;
    std::string word1, word2;
    getline(std::cin, word1);
    getline(std::cin, word2);
    EDistance test(word1, word2);
    std::cout << "edit distance = " << test.optDistance() << std::endl;
    std::string s = test.alignment();
     std:: cout << s;
    t = clock.getElapsedTime();
    std::cout << "Execution time is " << t.asSeconds() << " seconds \n";
    return 0;
}
