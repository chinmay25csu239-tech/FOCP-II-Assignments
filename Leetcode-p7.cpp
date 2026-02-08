// Happy Number 

#include <iostream> 
#include <math.h> 
using namespace std; 
int main(){
    int n;
    int sum = 0 ;
    cin >> n;
    while (n !=1){
        int sum =0;
        while (n>0){
            int digit = n % 10;
            sum += pow(digit,2);
            n/=10;
        }
        n = sum; 
    }
    if (n==1){
        cout << "true";
    }
    else{
        cout << "no";
    }
    return 0; 
}
