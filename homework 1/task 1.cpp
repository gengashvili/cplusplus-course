#include <iostream>
using namespace std;

int main(){
    
    string saxeli;
    string feri;
    int sigrdze;
    int sigane;

    
    cout << "sheiyvanet tkveni saxeli: ";
    cin >>saxeli;
    cout << "sheiyvanet kvadratis feri: ";
    cin >>feri;
    cout << "sheiyvanet kvadratis sigrdze: ";
    cin >>sigrdze;
    cout << "sheiyvanet kvadratis sigane: ";
    cin >>sigane;
    
    if((sigrdze < 0) || (sigane < 0)){
        cout<< "gtxovt shemoiyvanot dadebiti ricxvi";
    }else{
        cout<< "gamarjoba " << saxeli <<", "<< feri << " kvadratis fartobia " << sigrdze*sigane;
    }
    
    
    return 0;
}