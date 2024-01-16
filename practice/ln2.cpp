#include<iostream>
using namespace std;

// 当前项      1                   2                   ...         n
// 数列值      1/(1*2-1)-1/(1*2)   1/(2*2-1)-1/(2*2)   ...         1/(n*2-1)-1/(n*2)
// 数列和      1-1/2               1-1/2+1/3-1/4       ...         1-1/2+...+1/(n*2-1)-1/(n*2)

int main(){
    double ans=0,n=1,an=1;
    while(an>=1e-6){
        an=1/(2*n-1)-1/(2*n);
        ans+=an;
        n++;
    }
    cout<<ans;
    
	system("pause");
	return 0;
}