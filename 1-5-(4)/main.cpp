#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x, y, z;
    cout << "input x, y and z" << endl;
    cin >> x >> y >> z;
    if(x > y){
        swap(x, y);
    }
    if(y > z){
        swap(y, z);
    }
    if(x > y){
        swap(x, y);
    }
    cout << x << " " << y << " " << z << endl;
    
    return 0;
}
