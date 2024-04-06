#include<iostream>
#include<climits>
using namespace std ;

int main(){
    int array[5] = {1,2,3,7,8};
    int size;
    int maxi = INT_MIN;
    size= sizeof(array)/ sizeof(int );

    for(int i=0 ; i<size ; i++){
    maxi = max(maxi, array[i]);
} cout << maxi << endl;
    
    int maxi1 = INT_MIN;
    
    for(int i=0 ; i<size ; i++){
        if (array[i] != maxi){
            if(array[i] > maxi1){
                maxi1 = max(maxi1, array[i]);
            }
        }
    } cout << maxi1 << endl;
}