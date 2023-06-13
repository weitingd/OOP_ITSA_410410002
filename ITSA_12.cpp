// [C_MM12-易] 相遇時間計算
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double distance,time;//兩人距離，第幾秒超越
    cin >> distance;
    //換公分
    distance *= 100;
    time = distance / (100-30*2.54);//距離 / 每秒追幾公分
    //無條件進位
    cout << ceil(time) << endl;
    return 0;
}