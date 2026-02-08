// LEETCODE - Best time to buy and sell stocks 


#include <iostream>
using namespace std; 

int main(){
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    }
    int minPrice = arr[0]; 
    int maxProfit = 0; 
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < minPrice) {
            minPrice = arr[i]; 
        } 
        else if (arr[i] - minPrice > maxProfit) {
            maxProfit = arr[i] - minPrice; 
        }
    } 
    cout << maxProfit << endl;
    return 0; 
}