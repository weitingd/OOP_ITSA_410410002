// [C_MM29-易] 最大質數問題
#include <iostream>

using namespace std;

int main(){
    int num, prime;
    cin >> num;
    for(int i=num-1;i>1;i--){
        prime = 1;//用來判斷是否質數
        for(int j=2;j<i;j++){
            if(i%j == 0){
                prime = 0;
                break;
            }
        }
        
        if(prime == 1){
            cout << i << endl; 
            break;
        }
    }
    return 0;
}