// anagram 


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;

    cin >> s >> t;
    if (s.length() != t.length()) {
        cout << "false" << endl;
        return 0; 
    }

    int counts[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        counts[s[i] - 'a']++; 
        counts[t[i] - 'a']--; 
    }
    int isAnagram = 1; 
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            isAnagram = 0; 
            break;       
        }
    }

    if (isAnagram == 1) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
} 