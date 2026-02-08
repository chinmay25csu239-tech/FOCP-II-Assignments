// Divide two integers -- divide two integers without using multiplication, division, and mod operator. 

#include <iostream>
#include <climits> 

using namespace std;

int main() {
    long long dividend, divisor;
    cin >> dividend >> divisor;
    if (dividend == INT_MIN && divisor == -1) {
        cout << INT_MAX << endl;
        return 0;
    }
    bool isNegative = (dividend < 0) ^ (divisor < 0); // bool has 2 values -- 0 , 1 
    long long absDivd = abs(dividend);
    long long absDivs = abs(divisor);
    int quotient = 0;
    while (absDivd >= absDivs) {
        absDivd -= absDivs; // Subtract the divisor from dividend
        quotient++;         // Count how many times we subtracted
    }
    if (isNegative) cout << -quotient << endl;
    else cout << quotient << endl;

    return 0;
}