#include <iostream>
using namespace std;

int divide(int n){
    int sum = 0;
    for(int i=1; i<n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n;
    cout << "Which num do you want to know?" << endl;
    cin >> n;
    
    cout << "제수들의 합: " << divide(n) << endl;
    return 0;
}
