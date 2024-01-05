#include<iostream>
#include<iomanip>
using namespace std;

unsigned add(unsigned a,unsigned b);

// 课本307-322页
// 这里演示基本的位运算符和位运算实现加法
int main(){
    int a=1,b=-1;
    cout<<"a="<<a<<", "<<"b="<<b<<endl;
    a=a<<1;
    b=b<<2;
    cout<<"a="<<a<<", "<<"b="<<b<<endl;

    /*
    !（非）：1即是0，0即是1
    &（与）：同1得1
    |（或）：有1得1
    ^（异或）：不同得1
    */

    cout<<add(3,4)<<endl;

	system("pause");
	return 0;
}

unsigned add(unsigned a,unsigned b){
    if(b==0) return a;
    int sum,carry;
    sum=a^b;
    carry=(a&b)<<1;
    return add(sum,carry);
}