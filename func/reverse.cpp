#include<iostream>
using namespace std;

void myReverse1(int num);
int myReverse2(int num);
void myReverse3(char num[10]);

int main(){
    // 在这个例子中，不能把15、16行代码放到cin.get前面，22、23行同样，解释在最后
    char num1[10]={};
    cin.get(num1,10);
    myReverse3(num1);

    int num=0;
    cin>>num;
    myReverse1(num);

    cin>>num;
    cout<<myReverse2(num)<<endl;

	system("pause");
	return 0;
}

// 解法1：直接从个位反着输出每一位上的数
void myReverse1(int num){
    while(num){
        cout<<num%10;
        num/=10;
    }
    cout<<endl;
}

// 解法2：从最高位取得每位的数字，储存到一个新的从个位开始的整形中
// 小注：这段代码不能解决有0的情况
int myReverse2(int num){
    int newNum=0;
    int a=1e+9,b=1;
    while(a){
        if(num%a!=num){
            // 拿到当前最高位上的数字
            int n=num/a;
            num%=a;
            // 存到新的整形里
            newNum+=b*n;
            b*=10;
        }else{
            if (num==0&&a!=1){
                cout<<0;
            }
            a/=10;
        }
    }
    return newNum;
}

// 解法3：逆向输出字符数组，或者交换数组顺序
// 这里实现前者，后者有很多种算法实现，希望你能找到最快的一种
void myReverse3(char num[10]){
    for(int i=9;i>=0;i--){
        if(num[i]){
            cout<<num[i];
        }
    }
    cout<<endl;
}

// 解法4：标准类<vector>、<string>中都封装了能够解决这个问题的函数，寒假可以自己试一试哦


// cin.get：从输入流中读取n-1个字符，并存储在字符数组中，
// 然后添加一个空字符('\0')以形成一个C风格的字符串。
// 读取停止的标志是：要么读到了n-1个字符，要么遇到了换行符('\n')。

// 如果在 cin.get() 前面已经有其他的输入操作，
// 而这些操作没有消耗掉输入流中的所有字符，那么 cin.get() 将会读取剩下的字符。
// 也就是说，输入“123\n”，cin.get会直接读取到“\n” (可以自己试试)
    