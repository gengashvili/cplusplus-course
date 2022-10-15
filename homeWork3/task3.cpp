#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"chaweret ricxvi: ";
    cin>>n;
    
    while(n>1){
        if(n%2==0){
            n = n/2;
            cout<<n;
            if(n>1)cout<<" -> ";
        }else{
            n = (n * 3) +1;
            cout<<n;
            if(n>1)cout<<" -> ";
        }
    }

    return 0;
}