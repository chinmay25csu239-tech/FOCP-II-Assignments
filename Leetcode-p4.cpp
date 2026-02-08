//plaindrome number 

#include <iostream> 
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int org = n;
    int np = 0; 
    while(n!=0){
        int digit=n%10; 
        np = (np*10)+digit;
        n= n/10;
    }
    if(org == np){cout << "Yes";}
    else{cout << "No";}
}
