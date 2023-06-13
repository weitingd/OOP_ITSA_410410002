// [C_MM01-易] 計算梯型面積
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int up, down, height; //上底，下底，高
    cin >> up >> down >> height;
    double area = ((up + down) * height) / 2.0;
    //四捨五入取到小數點後一位
    cout << fixed << setprecision(1) << "Trapezoid area:" << area << endl;
    return 0;
}
