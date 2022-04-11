#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> split(std::string arg) {
    std::string myBuffer;

    std::vector<std::string> myVec;

    std::stringstream ss;
    ss << arg;
    while (ss >> myBuffer) {
        myVec.push_back(myBuffer);
    }

    return myVec;
}

std::string toLowerCase(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), std::tolower);
    return str;
}

std::string toUpperCase(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), std::toupper);
    return str;
}

int main()
{
    std::string myString = "print Hello everyone, how are you?";
    std::vector<std::string> myVec = split(myString);

    if (myVec[0] == "print") {
        for (int i = 1; i < myVec.size(); i++) {
            std::cout << myVec[i] << " ";
        }
        std::cout << std::endl;
    }

    std::string STR = "OmG it VErY good maN !";
    std::cout << STR << std::endl;
    STR = toLowerCase(STR);
    std::cout << STR << std::endl;
    STR = toUpperCase(STR);
    std::cout << STR << std::endl;

    return 0;
}