#include<iostream>
#include<iomanip>
using namespace std;

struct CpuData{
    short bits;
};

struct MemData{
    char LowByte;
    char HighByte;
};

union Data{
    CpuData cpuData;
    MemData menData;
};

// 课本324页
int main(){
    Data d;
    d.cpuData.bits=0;

    d.menData.LowByte=1;
    cout<<d.cpuData.bits<<endl;/*0000 0000 0000 0001*/
    d.menData.HighByte=2;
    cout<<d.cpuData.bits<<endl;/*0000 0010 0000 0001*/

	system("pause");
	return 0;
}