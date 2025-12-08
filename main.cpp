#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <map>

// Function to convert a string to lowercase
std::string toLowerCase(const std::string& str) {
    std::string lowerStr;
    std::transform(str.begin(), str.end(), std::back_inserter(lowerStr), [](unsigned char c) { return std::tolower(c); });
    return lowerStr;
}   