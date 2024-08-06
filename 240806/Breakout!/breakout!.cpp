#include <iostream>
using namespace std;

int N, M, ret = 0, arr[101], mx = 0, mn = 0;

int main(){ cin.tie(0)->sync_with_stdio(0); cout.tie(0);
    cin >> N;
    for(int i = 1;i<N+1;i++){
        cin >> arr[i];
        if(arr[i] != -1 && arr[i] && arr[i-1] == -1){
            int j = i - 1;
            while(arr[j] == -1 && j >= 1){
                arr[j] = arr[j + 1] - 1;
                if(!arr[j]) break;
                j--;
            }
        }
    }

    for(int i = 1;i<N+1;i++){
        if(arr[i] == -1 || !arr[i]) mx++;

        if(i == 1 && arr[i] == -1) arr[i] = 0;
        else if(arr[i] == -1 && arr[i-1] != -1){
            arr[i] = arr[i-1] + 1;
        }
        //cout << arr[i] << ' ';
    }//cout << '\n';

    bool chk = true;

    if(arr[1]) {cout << -1; return 0;}

    for(int i = 1;i<N;i++) {
        if(!(!arr[i+1] || arr[i+1] == arr[i] + 1)) {cout << -1; return 0;}
        
        if(!arr[i]) mn++;
    }
    if(!arr[N]) mn++;
    cout << mn << ' ' << mx;
}