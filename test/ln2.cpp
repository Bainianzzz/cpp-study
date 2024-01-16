#include<iostream>
using namespace std;

// 递推版本在
// https://github.com/Bainianzzz/structured-programming-review/blob/main/practice/ln2.cpp

double fact(double n){
    if (n==1){
        return 0.5;
    }
    else{
        return (1/(2*n-1)-1/2*n)+fact(n-1);
    }
}

int main(){
    cout << fact(2);
    return 0;
}