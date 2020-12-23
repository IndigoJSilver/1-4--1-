#include <iostream>
using namespace std;

int search(int* arr, int n, int size){
    for(int i=0; i<size; i++){
        if(arr[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << "what number do you want?" << endl;
    cin >> n;
    if(search(arr, n, size) == -1){
        cout << search(arr, n, size) << endl;
    }else{
        cout << n << "은 " << search(arr, n, size) << "번째 인덱스에 존재한다" << endl;
    }
    
    return 0;
}
