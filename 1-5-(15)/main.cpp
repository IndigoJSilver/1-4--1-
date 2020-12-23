#include <iostream>
using namespace std;

void hanoi(int n, char from, char tmp, char to){
    if(n == 1){
        cout << "Moves discs1 " << from << " to " << to << endl; // from에 있는 한 개의 원판을 to로 옮김
    }
    else{
        hanoi(n-1, from, to, tmp); // from의 맨 밑의 원판을 제외하고 모두 tmp로 옮김
        cout << "Moves discs" << n << " " << from << " to " << to << endl; // from에 있는 한 개의 원판을 to로 옮김
        hanoi(n-1, tmp, from, to); // tmp의 원판을 to로 옮김
    }
}

int main(){
    int n;
    cout << "How many discs are there?" << endl;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    
    return 0;
}
