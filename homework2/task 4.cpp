#include <iostream>
using namespace std;

int main(){
    
    double kg;
    double m;
    
    cout<<"sheikvanet simagle metrebshi: ";
    cin>>m;
    cout<<"sheikvanet tqveni wona kilogramebShi: ";
    cin>>kg;
    
    double bmi = kg/(m*2);
    
    if(m<=0 || kg<=0){
        cout<<"sheikvanet swori monacemebi..";
    }else if(bmi<18){
        cout<<"tkveni masis indexia: "<<bmi<<"\ntkven xart zedmetad gamxdari";
    }else if(bmi<27){
        cout<<"tkveni masis indexia: "<<bmi<<"\ntkven gakvt sashualo wona";
    }else if(bmi>=27){
        cout<<"tkveni masis indexia: "<<bmi<<"\ntkven gakvt charbi wona";
    }
    
    return 0;
}