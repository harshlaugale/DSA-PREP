#include<iostream>
#include<vector>
using namespace std;

//sorting 0 1 using 2 traversal
//not optimized

int main () {
    int arr[] = {0,1,0,1,0,1,1,1,0,1,0,0};
    int size = sizeof(arr)/sizeof(int);
    
    vector<int> ans;
    
    int count=0;
    
    for(int i=0; i<size ; i++){
        if(arr[i] == 0){
            count ++;
        }
    }
    
    for(int i =0; i < count ; i++){
        ans.push_back(0);
    }
    
    for(int i =count; i < size ; i++){
        ans.push_back(1);
    }
    
    cout << "Sorted 0 1 : ";
    for(int num : ans){
        cout << num << " ";
    }cout << endl;
    
    
}