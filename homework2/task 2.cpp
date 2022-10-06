#include <iostream>
using namespace std;

int main(){
    int a,b;
    char x;
    
    cout<<"chaweret aritmetikuli operacia: \n";
    cin>> a>>x>>b;
    
    if((a,b) && x== '+'){
        cout<<a<<"+"<<b<<"="<<a+b;
    }else if(x== '-'){
        cout<<a<<"-"<<b<<"="<<a-b;
    }else if(x== '*'){
        cout<<a<<"*"<<b<<"="<<a*b;
    }else if(x== '/'){
        cout<<a<<"/"<<b<<"="<<a/b;
    }else if(x== '%'){
        cout<<a<<"%"<<b<<"="<<a % b;
    }else if(x== '-'){
        cout<<a<<"-"<<b<<"="<<a-b;
    }else if(x=='!' && b==2){  // კვადრატის გამოთვლა
        cout<<a<<"is kvadratia= "<<a*a;
    }else if(x=='!' && b==3){  //კუბის გამოთვლა
        cout<<a<<"is kubia= "<<a*a*a;
    }else{
        cout<<"miutitet swori matematikuri operacia";
    }
    return 0;
}