// [C_MM06-易] 英哩轉公里
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int mile;
    cin >> mile;
    double km;
    km = mile * 1.6;
    cout << fixed << setprecision(1) << km << endl;
    return 0;
}