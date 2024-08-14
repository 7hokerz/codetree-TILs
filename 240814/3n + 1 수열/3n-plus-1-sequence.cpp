#include <iostream>
using namespace std;

int main() {
    int N, ret = 0;
    cin >>N;

    while(1){
        if(N == 1) break;
        if(N % 2){
            N *= 3; N++;
        }
        else{
            N /= 2;
        }
        ret++;
    }
    cout << ret;
    return 0;
}