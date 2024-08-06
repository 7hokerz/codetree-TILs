#include <iostream>
#include <functional>
#include <queue>
using namespace std;
typedef long long ll;

int N;
ll inp, ret = 0;
priority_queue <ll, vector<ll>, greater<ll>> pq;

int main(){ cin.tie(0)->sync_with_stdio(0); cout.tie(0);
    cin >> N;
    for(int i = 0;i<N;i++){
        cin >> inp;
        pq.push(inp);
    }
    
    while(pq.size() > 1){
        ll one, two;
        one = pq.top(); pq.pop();
        two = pq.top(); pq.pop();

        ret += one + two;

        pq.push(one + two);
    }
    cout << ret;
}