#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    
    string prefix = strs[0];
    
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {  // check if current string starts with prefix
            prefix = prefix.substr(0, prefix.size() - 1);  // shrink prefix
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

