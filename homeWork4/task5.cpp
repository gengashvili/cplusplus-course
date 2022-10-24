#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i<=(n/2); i++){
        if (n%i==0) return 0;
    }
    return 1;
}

void myFunc(int n){
    if (isPrime(n)==1){
        cout<<"ricxvi martivia";
    } else{
        cout<<n <<"-is gamyofebia: ";
        for(int j = 1; j<=n; j++){
            if(n%j==0){
                cout<<j;
                if(j<n){
                    cout<<", ";
                }else{
                    cout<<".";
                }
            }
        }
    }
}

int main(){
    myFunc(1300);
    return 0;
}