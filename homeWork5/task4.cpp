#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    vector<vector<int>> matrix = {
        {5,3},
        {-1,4}
    };
    
    double determinanti = (matrix[0][0]*matrix[1][1])-((matrix[0][1]*matrix[1][0]));
    cout<<determinanti;

    return 0;
}
