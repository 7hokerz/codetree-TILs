#include <iostream>
using namespace std;

int main() {
    int N, ret = 0;
    cin >> N;
    int arr[N+1][N+1];
    for(int i = 1;i<N+1;i++){
        for(int j = 1;j<N+1;j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1;i<N-1;i++){
        for(int j = 1;j<N-1;j++){
            int tmp = 0;
            for(int k = i;k<i+3;k++){
                for(int h = j;h<j+3;h++){
                    if(arr[k][h]) tmp++;
                }
            }
            ret = max(ret, tmp);
        }
    }
    cout << ret;

    return 0;
}