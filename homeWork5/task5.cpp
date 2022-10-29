#include <iostream>
using namespace std;

int main(){
    
    long long n = 1000000;
    int a = 0;
    long long result;
    int counter = 0;
    long long num;

    for(int i = 2; i <= n; i++){
        num = i;
        while(true){
            if(num == 1){
                break;
            }else if(num % 2 == 0){
                num = num/2;
                counter++;
            }else{
                num = 3*num+1;
                counter++;
            }
        }

        if(counter >= a){
            a = counter;
            result = i;
        }
        counter = 0;
    }
    cout << result;

    return 0;
}