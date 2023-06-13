// [C_MM18-易] 十進制轉二進制
#include <iostream> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
int main(){ 
    int a; 
    int result[8]; 
    cin >> a; 
 
    if(a < 0){//將負數轉成正數
        a += 256; //取一的補數
    }     
 
    for(int i=7;i>=0;i--){ 
        result[i] = (a % 2); 
        a /= 2; 
    } 
 
    if(a < 0){//再轉回去
        for(int i=0;i<8;i++){
            if(result[i] == 0)
                result[i] == 1;
            else
                result[i] == 0;
        }
    } 
    for(int i=0;i<8;i++){ 
        cout << result[i]; 
    } 
    cout << endl;

    return 0; 
}  