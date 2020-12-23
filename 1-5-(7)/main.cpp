#include <iostream>
using namespace std;

int fiboRecursive(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fiboRecursive(n-2) + fiboRecursive(n-1);
}

int fiboIteration(int n){
    int n0 = 0, n1 = 1, n2 = 0;
    if(n == 0 || n == 1){
        return n;
    }
    for(int i=2; i<=n; i++){
        n2 = n0 + n1;
        n0 = n1;
        n1 = n2;
    }
    return n2;
}

int main(){
    int n;
    cout << "Which num's value do you want to know?" << endl;
    cin >> n;
    
    cout << "recursive: " << fiboRecursive(n) << endl;
    cout << "iteration: " << fiboIteration(n) << endl;
    
    return 0;
}
