#include <iostream>
#include <math.h>
using namespace std;
int a, b;
int main() {
    cin >> a >> b;
    int sum = a;
    for(int i = 1;i<b;i++){
        sum *= a;
    }
    cout << sum;
    return 0;
}