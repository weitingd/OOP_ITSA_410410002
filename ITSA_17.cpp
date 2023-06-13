// [C_MM17-易] 求最大公因數
#include <iostream>

using namespace std;

int gcd(int a, int b){
    if((a % b) == 0){
        return b;
    }
    return gcd(b,a%b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;

    return 0;
}