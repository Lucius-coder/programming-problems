#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanConversion = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        int result = 0;
        int prev = 0;

        for (char ch : s) {
            ch = toupper(ch);  // Convert to uppercase
            int curr = romanConversion[ch];

            // Check for subtractive notation
            if (prev < curr) {
                result += curr - 2 * prev;  // Subtract prev twice (once added before)
            } else {
                result += curr;
            }
            prev = curr;
        }

        return result;
    }
};

int main() {
    Solution roman;
    cout << roman.romanToInt("ix") << endl;  // Should output 4
    return 0;
}
