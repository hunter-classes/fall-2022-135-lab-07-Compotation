#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("remove tabs and spaces") {
    CHECK_EQ(removeLeadingSpaces("\thi"), "hi");
    CHECK_EQ(removeLeadingSpaces("hi"), "hi");
    CHECK_EQ(removeLeadingSpaces("hi hi"), "hi hi");
    CHECK_EQ(removeLeadingSpaces("    hi"), "hi");
    CHECK_EQ(removeLeadingSpaces("       int x = 1;  "), "int x = 1;  ");
}

TEST_CASE("count chars") {
    CHECK_EQ(countChar("\t\t\tfiowe", '\t'), 3);
    CHECK_EQ(countChar("{", '{'), 1);
    CHECK_EQ(countChar("hi", 'c'), 0);
}