#include <iostream>
using namespace std;

int ReturnBool(int n){
    int sum = 1;
    for(int i=0; i<n; i++){
        sum *= 2;
    }
    return sum;
}

int main(){
    int n;
    cout << "input n" << endl;
    cin >> n;
    cout << "n has " << ReturnBool(n) << " times" << endl;
    
    return 0;
}
