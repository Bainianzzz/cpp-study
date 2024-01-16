#include<iostream>
using namespace std;

int main(){
    double ans=0;
    double k=1;
    for (k=1;k<=10;k++){
        ans += 1/(k*(k+1));
    }
    cout << ans;
    return 0;
}