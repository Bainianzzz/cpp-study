#include<iostream>
using namespace std;

int main(){
	char *language[] = { "C", "C++", "Python", "Go", "Java" };

    // 两种遍历输出的方法
	for (int i = 0; i < 5; i++)
	{
		cout << language[i] << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		int j = 0;
		while (language[i][j]){/*检测字符串结束标志*/
			cout << language[i][j++];
		}
		cout << endl;
	}

	system("pause");
	return 0;
}