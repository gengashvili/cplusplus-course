#include <iostream>
#include <array>
using namespace std;

int main(){
    int arr[5][6]{
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30}
    };
    int arr2[30]{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    
    
    //or ganzomilebiani
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    //1 ganzomilebiani
    int j = 0;
    int d = 6;
    for(int i = 0; i < 5; i++){
        for(; j < d; j++){
            cout<<arr2[j]<<" ";
        }
        d+=6;
        cout<<endl;
    }
    return 0;
}
