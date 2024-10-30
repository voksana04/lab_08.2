#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

size_t MaxConsecutiveSpaces(const string s) {
    size_t maxSpaces = 0, currentSpaces = 0;
    for (char ch : s) {
        if (ch == ' ') {
            currentSpaces++;
            if (currentSpaces > maxSpaces) {
                maxSpaces = currentSpaces;
            }
        }
        else {
            currentSpaces = 0;
        }
    }
    return maxSpaces;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Max consecutive spaces: " << MaxConsecutiveSpaces(str) << endl;
    return 0;
}
