#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        string aux;
         unordered_map<char, char> pairs = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                aux.push_back(c);
            } else {
                if (aux.empty() || pairs[aux.back()] != c) {
                    return false;
                }
                aux.pop_back();
            }
        }
        return aux.empty();
    }
};