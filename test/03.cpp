#include<iostream>
using namespace std;

int fact(int x){
    int ans=0;
    if (x<=0){
        ans=1;
    }
    else if (x>0 && x<=10){
        ans=3*x*x;
    }
    else if (x>10){
        ans=120;
    }
    return ans;
}

int main(){
    int x=0;
    int y=0;
    cin >> x;
    y = fact(x);
    cout << y;
    return 0;
}