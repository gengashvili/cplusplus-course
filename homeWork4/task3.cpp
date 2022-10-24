#include <iostream>
#include <cmath>
using namespace std;

int POW(int a, int b){
    return pow(a, b);
}

int main (){
    cout<<POW(5,4);
    return 0;
}

/* ხარისხსში აყვანა pow keyword-ის გამოყენების გარეშე

#include <iostream>
using namespace std;

int axarisxeba(int a, int b){
    int result=1;
    for(int i =0; i<b; i++){
        result*=a;
    }
    return result;
}
int main(){
    cout<<axarisxeba(2,10);
    return 0;
}
*/