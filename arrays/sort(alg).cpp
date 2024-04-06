#include<iostream>
#include<vector>
#include<algorithm>

//sorting 0 1 using sort function
//complexity nlogn
using namespace std;

int main () {
    int arr[] = {0,1,0,1,0,1,1,1,0,1,0,0};
    int size = sizeof(arr)/sizeof(int);
    
    vector<int> ans;
    
    int count=0;

    sort(arr,arr+ size);
    
    for(int i=0; i<size ; i++){
        cout << arr[i] << " " ;
    }
    
}