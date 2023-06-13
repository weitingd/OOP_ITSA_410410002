// [C_MM11-易] 購票計算
#include <iostream>

using namespace std;

int main(){
    int total;//票價
    cin >> total;
    int total10, total5, total1;//10,5,1元個數
    total10 = total / 10;
    total5 = (total%10) / 5;
    total1 = total % 5;
    cout << "NT10=" << total10 << endl;
    cout << "NT5=" << total5 << endl;
    cout << "NT1=" << total1 << endl;

    return 0;
}