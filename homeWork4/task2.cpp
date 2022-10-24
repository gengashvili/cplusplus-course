#include <iostream>
#include <cmath>
using namespace std;

int ABS(int a){
    return abs(a);
}

int main(){
    int a;
    
    cin>>a;
    cout<<ABS(a);
    
    return 0;
}

/* აბსოლუტურ მნიშნველობის დააბრუნება abs keyword-ის გამოყენების გარეშე

#include <iostream>
#include <cmath>
using namespace std;

int ABS(int a){
    if(a<=0){
        a=a-a-a;
    }
    return a;
}
int main(){
    int a;
    
    cin>>a;
    cout<<ABS(a);
    
    return 0;
}
*/