#include<iostream>
using namespace std;

int main(){
	int i = 3;/*i可以被修改*/
	const int ic = 2;/*i不可以被修改*/
	const int* icPtr;/*icPtr指向的值不可以被修改，即*icPtr不可被修改*/
	int* const iPtrc = &i;/*icPtr本身不可以被修改，*icPtr可被修改*/
	const int* const icPtrc = &ic;/*icPtr指向的值和其本身都不可以被修改*/

	const int &icr = ic;/*引用一个常量必须加const*/
	/*int &ir1 = ic;
	这样会出错*/

	int &ir = i;
	const int &icr1 = i;
	

	system("pause");
	return 0;
}