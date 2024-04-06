#include<iostream>
using namespace std;

bool isUnique(int arr[], int size,int index){
    for(int i = 0; i<size ; i++){
        if(i != index && arr[i] == arr[index]){
            return false;
        }
    }return true;
        
}

void printUnique(int arr[], int size){
    cout << "unique elements are "<< endl;

    for(int i=0; i<size;i++){
        if(isUnique( arr, size, i)){
            cout << arr[i] << " ";
        }
    }
    
}

int main() {
    int arr[] = {1,2,2,4,5,1};
    int size= sizeof(arr)/sizeof(arr[0]);
    
    printUnique(arr, size);
}