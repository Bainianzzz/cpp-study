#include<iostream>
// 引入库文件
#include<iomanip>
using namespace std;

int main(){
    int n=0,m=0;
    while(m>=1e+6||n>=1e+6||n>=m||n<=0||m<=0){
        cin>>n>>m;
    }
    
    float sn=0,an=0;
    for(int i=n;i<=m;i++){
        an=1.0/(i*i);
        sn+=an;
    }

    // setprecision()设置输出精度（整数+小数部分的位数），仅对浮点数有效
    // fixed固定输出小数点后输出位数
    cout<<fixed<<setprecision(5)<<sn<<endl;

	system("pause");
	return 0;
}