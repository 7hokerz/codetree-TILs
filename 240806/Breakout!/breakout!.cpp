#include <iostream>
using namespace std;

int N, M, ret = 0, arr[101], mx = 0, mn = 0;

int main(){ cin.tie(0)->sync_with_stdio(0); cout.tie(0);
    cin >> N;
    for(int i = 1;i<N+1;i++){
        cin >> arr[i];
        if(arr[i] != -1){
            int j = i - 1;
            while(1){
                if(arr[j] != -1 || j < 1){ cout << -1; return 0;}
                arr[j] = arr[j + 1] - 1;
                if(!arr[j]) break;
                j--;
            }
        }
    }

    bool chk = false;

    for(int i = 1;i<N+1;i++){
        if(arr[i] == -1 || !arr[i]) mx++;

        if(arr[i] == -1 && !chk){
            mn++; chk = true;
        }
        else if(!arr[i]){
            chk = false;
            mn++;
        }
        //cout << arr[i] << ' ';
    }//cout << '\n';
    cout << mn << ' ' << mx;
}