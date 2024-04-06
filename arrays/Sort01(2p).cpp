//sort 0 1 using two pointers in single traversal 
// most optimized O(n)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main () {
    int arr[] = {0,1,0,1,0,1,1,1,0,1,0,0};
    int size = sizeof(arr)/sizeof(int);
    
    int i = 0;
    int j = size - 1;
    
    while(i < j ) {
        if(arr[i] == 0 ){
            i++;
        } else if (arr[j] == 1){
            j--;
        } else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    
    for(int k = 0; k < size; k++) { 
        cout << arr[k] << " ";
    }
    cout << endl;
    
    return 0;
}

