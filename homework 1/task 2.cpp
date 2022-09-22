#include <iostream>
using namespace std;

int main(){
    
    int sigrdze;
    int simagle;
    int sigane;
    
    cout << "chaweret kubis sigrdze: ";
    cin >> sigrdze; 
    cout << "chaweret kubis simagle: ";
    cin >> simagle;
    cout << "chaweret kubis sigane: ";
    cin >> sigane;
    
    if((sigrdze<0)||(simagle<0)||(sigane<0)){
        cout<<"chaweret dadebiti ricxvebi...";
    }else{
        cout<<"kubis moculobaa "<< sigrdze*sigane*simagle <<", xolo zedapiris partobia: "<<sigrdze*sigane;
    }
    
    
    return 0;
}