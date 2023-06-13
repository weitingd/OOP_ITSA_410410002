// [C_MM27-易] 計算兩整數間所有整數的總和
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a, b, sum;
    cin >> a >> b;
    sum = ((a+b) * (abs(a-b)+1)) / 2;
    cout << sum << endl;

    return 0;
}