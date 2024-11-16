// Copyright 2023
// By Noah Fay
#include "ps5.hpp"

EDistance::EDistance(std::string word1, std::string word2) {
    WORD = word1;
    WORD2 = word2;
    m = word1.size();
    n = word2.size();
    opt.resize(m + 1, std::vector<int>(n + 1, 0));
    int counter1 = n;
    int counter2 = m;
    for (int k = 0; k < n; k++) {
            opt[m][k] = counter1 * 2;
            counter1--;
        }
        for (int j = 0; j < m; j++) {
            opt[j][n] = counter2 * 2;
            counter2--;
    }
    for (int i = m; i > 0; i--) {
        for (int j = n; j > 0; j--) {
            if (word1[i-1] != word2[j-1]) {
            opt[i-1][j-1] =  std::min((opt[i][j]) + 1, std::min(opt[i-1][j] + 2, opt[i][j-1] + 2));
            } else if (word1[i-1] == word2[j-1]) {
                    opt[i-1][j-1] = opt[i][j];
            }
            }
        }
    /*for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
        std::cout << "opt[" << i << "]" << "[" << j << "]= " << opt[i][j] << "   ";     // printing contents of matrix
    }
    std::cout << std::endl;
}*/
}
int EDistance::optDistance() {
    return opt[0][0];
}
std::string EDistance::alignment() {
    std::string alignment = "";
    for (int i = 0; i < m;) {
        for (int j = 0; j < n;) {
            if (WORD[i] == WORD2[j]) {
            alignment += std::string(1, WORD[i]) + " " +  std::string(1, WORD2[j]) + " 0\n";
                i++;
                j++;
            } else {
                if (opt[i+1][j+1] + 1 <= opt[i+1][j] + 2 && opt[i+1][j+1] + 1 <= opt[i][j+1] + 2) {
                alignment += std::string(1, WORD[i]) + " " +  std::string(1 , WORD2[j]) + " 1\n";
                    i++;
                    j++;
                } else {
                    if (opt[i+1][j+1] + 1 >= opt[i+1][j]) {
                    alignment += std::string(1, WORD[i]) + std::string(" - 2\n");
                    i++;
                    } else {
                        j++;
                        alignment += std::string(1, WORD[i]) + std::string(" - 2\n");
                    }
                }
            }
        }
    }
    return alignment;
}
int EDistance::testBoundary() {
    return opt[m+1][n+1];
}
int EDistance::getN() {
    return n;
}
