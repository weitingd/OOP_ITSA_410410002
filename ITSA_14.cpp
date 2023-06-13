// [C_MM14-易] 計算時間的組合
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int time, days, hours, minutes, seconds;
    minutes = 60;
    hours = minutes * 60;
    days = hours * 24;

    cin >> time;
    cout << (time / days) << " days" << endl;
    cout << ((time % days) / hours) << " hours" << endl;
    cout << ((time % hours) / minutes) << " minutes" << endl;
    cout << (time % minutes) << " seconds" << endl;
    return 0;
}