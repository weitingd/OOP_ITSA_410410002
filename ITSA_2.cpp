// [C_MM02-易] 計算三角形面積
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int down, height;//底，高
    cin >> down >> height;
    double area = (down*height)/2.0;
    //四捨五入取到小數點後一位
    cout << fixed << setprecision(1) << area << endl;
    return 0;
}
