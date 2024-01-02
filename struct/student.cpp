#include<iostream>
using namespace std;

struct Student
{
	char name[20];
	double midScore;
	double endScore;
};

int main(){
	Student stu1= {};

    // 输入信息为结构体赋值
	cout << "name: " << "\t" << "mid score: " << "\t" << "end score: " << endl;
	cin >> stu1.name >> stu1.midScore >> stu1.endScore;

	// 结构体指针
    // 自定义函数中如果要对主函数中结构体的值进行修改，需要传递地址
    Student *s=&stu1;
    cout << s->name << "\t"<< s->midScore << "\t"<< s->endScore<< endl;

    cout << stu1.name << "\t" << "average score: " << (stu1.endScore + stu1.midScore) / 2<<endl;

	system("pause");
	return 0;
}