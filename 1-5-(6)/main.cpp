#include <iostream>
using namespace std;

int recursive(int n){
    if(n == 1){
        return 1;
    }
    return n * recursive(n-1);
}

int iteration(int n){
    int sum = 1;
    for(int i=n; i>=1; i--){
        sum *= i;
    }
    return sum;
}

int main(){
    int n;
    cout << "input n" << endl;
    cin >> n;
    
    cout << "recursive: " << recursive(n) << endl;
    cout << "iteration: " << iteration(n) << endl;
    
    return 0;
}
