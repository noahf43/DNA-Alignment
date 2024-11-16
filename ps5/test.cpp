// Copyright 2022
// By Dr. Rykalova
// Editted by Dr. Daly
// test.cpp for PS1a
// updated 5/12/2022
#include <iostream>
#include <string>
#include "ps5.hpp"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Main
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(testStepInstr1) {
  std::string word1, word2;
  getline(std::cin, word1);
  getline(std::cin, word2);
  EDistance test(word1, word2);
  BOOST_REQUIRE_NE(word1, word2);
}
