#include<iostream>
using namespace std ;

int main(){
    int array[5] = {1,2,3,4,5};
    int size;
    size= sizeof(array)/ sizeof(int );
    int sum = 0 ;

    
    for(int i = 0; i<size ; i++){
        sum = array[i] + sum;
    }
    cout << sum;
    
}