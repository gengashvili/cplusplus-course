#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i<=(n/2); i++){
        if (n%i==0) return 0;
    }
    return 1;
}
void prime(int n){
    int counter =1;
    while(counter<=3){
        if(isPrime(n)==1){
            cout<<counter<<": "<<n<<"\n";
            counter++;}
        n++;
    }
}
int main(){
    prime(10);
    return 0;
}