// valid palindrome 

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int n = s.length();
    int left = 0;
    int right = n - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    if(s == s){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}