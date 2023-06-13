// [C_MM33-易] 找1~N的完美數
// 即一個數恰好等於它的因數之和
#include <iostream>

using namespace std;

int main(){
    int N, sum;
    cin >> N;
    for(int i=6;i<=N;i++){//第一個完美數為6
        sum = 0;
        for(int j=1;j<i;j++){
            if(i%j == 0){
                sum += j;
            }
        }
        if(sum == i){
           if(i == 6)
                cout << i;
            else
                cout << " " << i;
        }
    }
    cout << endl;
    return 0;
}