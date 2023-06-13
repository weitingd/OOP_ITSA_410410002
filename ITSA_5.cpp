// [C_MM05-易] 計算正方形面積
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double length, ans;//邊長
    cin >> length;
    ans  = (length*length);
    //四捨五入取到小數點後一位
    cout << fixed << setprecision(1) << round(ans*10)/10.0 << endl;
    return 0;
}