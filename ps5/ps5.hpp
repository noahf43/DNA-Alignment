#pragma once
// Copyright 2023
// By Noah Fay
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <SFML/System.hpp>
class EDistance {
 public:
    EDistance(std::string word1, std::string word2);
    static int penalty(char a, char b);
    // static int min(int a, int b, int c);
    int optDistance();
    int testBoundary();
    int getN();
    std::string alignment();
 private:
    int m, n;
    std::string WORD, WORD2;
    std::vector<std::vector<int>> opt;
    int nextRow, nextCol;
};
