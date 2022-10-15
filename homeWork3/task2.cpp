#include <iostream>
using namespace std;

int main(){
   int n;
   
    for(int i = 0; i < 1000; i++){
        if((i%3==0)||(i%5==0)){
            n+=i;
        }
    }
    cout<<n;
    
    return 0;
}
