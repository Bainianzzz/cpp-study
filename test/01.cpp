#include<iostream>
using namespace std;

// int k = 1, s = 0, t = 1, n;
// cin >> n;
// cout << "k" << "\t" << "t" << "\t" << "s" << endl;
// while (k <= n){
//     t *= k;//阶乘
//     s += t;//累加
//     cout << k << "\t" << t << "\t" << s << endl;
//     k++;
// }
// cout << s;

int main(){
    int k = 1, s = 0, t = 1, n;
    cin >> n;
    cout << "k" << "\t" << "t" << "\t" << "s" << endl;
    for (k=1;k<=n;k++){
        t *= k;//阶乘
        s += t;//累加
        cout << k << "\t" << t << "\t" << s << endl;
    }
    cout << s;
    return 0;
}