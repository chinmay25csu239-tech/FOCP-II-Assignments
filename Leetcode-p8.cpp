// Two sum 

#include <iostream>
#include <vector> 
using namespace std; 
int main(){
    int list1[] = {2,7,11,15};
    int target1= 9;
    int size1 = 4; 
    int list2[] = {3,2,4};
    int target2 = 6;
    int size2 = 3; 
    int list3[] = {3,3};
    int target3 = 6; 
    int size3 = 2; 

    // Check index numbers for list1 
    for(int i =0; i<size1;i++){
        for(int j = i+1; j<size1;j++){
            if(list1[i] + list1[j] == target1){
                cout << "List1--> " << i << "," << j << endl; 
            }
        }
    }
     // Check index numbers for list2 
    for(int i =0; i<size2;i++){
        for(int j = i+1; j<size2;j++){
            if(list2[i] + list2[j] == target2){
                cout << "List2--> " << i << "," << j << endl; 
            }
        }
    } 
     // Check index numbers for list3 
    for(int i =0; i<size3;i++){
        for(int j = i+1; j<size3;j++){
            if(list3[i] + list3[j] == target3){
                cout << "List3--> " << i << "," << j << endl; 
            }
        }
    }  
    return 0; 
}