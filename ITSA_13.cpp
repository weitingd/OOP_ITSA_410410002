// [C_MM13-易] 停車費計算
#include <iostream>

using namespace std;

int main(){
    int h1, m1, h2, m2, time, money;
    cin >> h1 >> m1;//開始停車時間hour,minute
    cin >> h2 >> m2;//結束停車時間hour,minute
    time = (h2 - h1) * 60 + (m2 - m1);
    if(time >= 30 && time <= 120 ){
        money = (time/30) * 30;
    }
    else if(time > 120 && time <= 240){
        money = ((time-120)/30) * 40 + 120;
    }
    else if(time > 240){
        money = ((time-240)/30) * 60 + 280;
    }
    cout << money << endl;
    return 0;
}