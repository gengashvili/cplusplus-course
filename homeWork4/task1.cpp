#include <iostream>
using namespace std;

int fartobi(int r){
    return r * r;
}
int perimetri(int r){
    return r + r;
}
int main(){
    cout<<perimetri(23)<<endl;
    cout<<fartobi(99);
    return 0;
}