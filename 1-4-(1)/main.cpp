// 1.4 - 1
#include <iostream>
using namespace std;

int DivZero(int a, int b, int c){
    if(a<0 && b<0 && c<0){
        throw 1;
    }
    else if(a==0 && b==0 && c==0){
        throw 2;
    }
    return a+b*c+b/c;
}


int main() {
    try{
        cout << DivZero(0,0,0) << endl;
    }catch(int n){
        if(n == 1){
            cout << "a, b, c are all less than 0" << endl;
        }
        else if(n == 2){
            cout << "a, b, c are 0" << endl;
            //return 1;
        }
    }
    return 0;
}
