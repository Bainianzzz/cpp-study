#include<iostream>
using namespace std;

void copyStr(char *dest, char *source);
void AddStr(char *dest, char *source);
int strCmp(char *s1, char *s2);

int main(){
	char a[20] = "hello";
	char b[20] = "";

	copyStr(b, a);
	AddStr(b, ",world");

	cout << "a: " << a << endl
		<< "b: " << b << endl
		<<strCmp(a,b)<<endl;

	system("pause");
	return 0;
}

//字符串的赋值运算
void copyStr(char *dest, char *source){
	while (*dest = *source){
		dest++;
		source++;
	}
}

//字符串的加法运算
void AddStr(char *dest, char *source){
	while (*dest){
		dest++;/*移到结束标志*/
	}
	copyStr(dest, source);
}

//字符串的比较运算
int strCmp(char *s1, char *s2){
	while (*s1&&*s2 && (*s1 == *s2)){
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return 0;
	else if (*s1>*s2)
		return 1;
	else
		return -1;
}