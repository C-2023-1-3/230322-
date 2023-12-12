#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int parseHex(const char* const hexString) {
    int result;
    stringstream ss;
    ss << hex << hexString;
    ss >> result;
    return result;
}

int main() {
    const char* hexString = "A5";
    int result = parseHex(hexString);
    cout << result << endl; 
    return 0;
}