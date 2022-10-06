#include <iostream>
using namespace std;

int main(){
    double px;
    double em = 0.0625;
    
    cout<< "miutitet pixelebis raodenoba: \n";
    cin>>px;
    
    if(px <= 0){
        cout<< "miutitet mteli dadebiti ricxvi...";
    }else{
        cout<<px<<"px udris "<<px*em<< "em-s";
    }
}
