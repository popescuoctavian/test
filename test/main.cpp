#include<iostream>

// convert a string to a number
int toNumber(const std::string& str) {
    int result = 0;
    for (int i = 0; i < str.length(); i++) {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}

int main() {
    std::string str = "123";

    std::cout << toNumber(str) << std::endl;
    return 0;
}