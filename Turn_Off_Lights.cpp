#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    string bulb;
    cin >> bulb; 
    int low = 1;
    int high = n;
    int result = n;
    while (low <= high){
        int mid = (low+high)/2;
        int count =0;
        for(int i =0; i<n;){
            if(bulb[i] == '1'){count++;i = i + mid;}
            else{i++;}
        }
        if(count<=k){result=mid;high=mid-1;}
        else{low= mid +1;}
    }
    cout << result << endl;
    return 0;
}