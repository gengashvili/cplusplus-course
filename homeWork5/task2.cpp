#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

double sashualo(vector<double> numbers){
    double sum = 0;
    for (int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    double sum1 = sum / numbers.size();
    return sum1;
}
vector<double> variation(vector<double> numbers, double avg){
    for (int i = 0; i < numbers.size(); i++){
        double a = numbers[i] - avg;
        numbers[i] = a * a;
    }
    return numbers;
}

int main(){
    
    vector<double> numbers;
    int a;
    double b;
    
    cout<<"miutitet ricxvebis raodenoda: ";
    cin >> a;
    cout << endl;
    cout << "miutitet " << a << " ricxvi : \n";
    
    for (int i = 0; i < a; i++){
        cin >> b;
        numbers.push_back(b);
    }
    
    cout << endl;
    double avg = sashualo(numbers);
    cout << "sashualo ricxvia: " << avg << endl;
    cout << endl;

    numbers = variation(numbers, avg);
    cout << "Variacia udris: ";
    
    for (int i = 0; i < numbers.size(); i++){
        cout << setprecision(4) << fixed << numbers[i] << " ";
    }
    
    cout << endl;
    cout << endl;

    for(int i = 0; i < numbers.size(); i++){
        numbers[i] = sqrt(numbers[i]);
    }
    
    cout << "standartuli gadaxdra udris: ";
    
    for (int i = 0; i < numbers.size(); i++){
        cout << setprecision(4) << fixed << numbers[i] << " ";
    }
    
    cout << endl;
    return 0;
}