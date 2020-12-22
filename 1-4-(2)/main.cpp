#include <iostream>
using namespace std;

int Sum(int* a, int n){
    int sum = 0;
    if(n<0){
        throw n;
    }
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int* a;
    int len;
    int n;
    cout << "array length?" << endl;
    cin >> len;
    a = new int[len];
    for(int i=0; i<len; i++){
        a[i] = i+1;
    }
    cout << "n's number?" << endl;
    cin >> n;
    try{
        cout << Sum(a, n) << "입니다." << endl;
    }
    catch(int s){
        cout << s << "는 0 미만입니다." << endl;
    }
    return 0;
}
