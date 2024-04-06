#include<iostream>
using namespace std;


void reversedArray(int arr[], int n){
    int start, end;
    start = 0;
    end = n-1;
    while(start<= end)
    {
        swap(arr[start], arr[end] );
        start ++;
        end --;
    }
}

void printArray(int arr[], int n){
    for (int i=0; i<n ;i++){
        cout << arr[i];
    }cout << endl;
}

int main () {
    int array [100] = {1,2,3,4,5};
    int n= 5;
        printArray( array, n);

    
    reversedArray(array, n);
    printArray( array, n);
    
    
    
}