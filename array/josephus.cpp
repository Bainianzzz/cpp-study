#include<iostream>
using namespace std;

int main(){
	// 30个小孩，间隔为4，做约瑟夫游戏
	const int num = 30;
	int kids[num] = {};
	int interval = 4;

	//将所有还在场的小孩初始化为1
	for (int j = 0; j < num; j++)
		kids[j] = 1;
	int i = 0, n=num;
	//开始淘汰小孩
	while (n > 1){
		int m = interval;
		//每一轮数小孩
		while (m > 1){
			i = (i + 1) % num;
			while (kids[i]==0)	
				i = (i + 1) % num;
			m--;
		} 
		//数到指定间隔跳出循环，淘汰小孩
		cout << i + 1 << ", ";
		kids[i] = 0;
		//数到下一个小孩
		i = (i + 1) % num;
		while (kids[i] == 0)
			i = (i + 1) % num;
		//总数-1，总数小于1的时候跳出循环，
		//此时数组中值为1的那个元素就是留到最后的小孩
		n--;
	}

	cout << endl;
	//找出最后的小孩
	for (int j = 0; j < 7; j++){
		if (kids[j] == 1)
			cout << j+1 <<" win"<< endl;
	}

	system("pause");
	return 0;
}