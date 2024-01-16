#include<iostream>
using namespace std;

//定义一个二维数组
// int a[3][4]; 
// //数组赋值
// for (int i = 0; i< 3; i++){ //对行循环
//     for (int j = 0; j < 4; j++) //对列循环
//         a[i][j] = i * 10 + j; //对 i 行 j 列元素赋值
// }
//输出数组的值
// for (int i = 0; i< 3; i++){
//     for (int j = 0; j < 4; j++)
//         cout << a[i][j];
//     cout << endl;
// }

int main(){
    int a[3][4]; 
    int i=0;
    int j=0;
    while(i<3){
        while(j<4){
            a[i][j] = i * 10 + j;
            j++;
        }
        j=0;
        i++;
    }
    i=0;
    j=0;
    while(i<3){
        while(j<4){
            cout << a[i][j];
            j++;
        }
        cout << endl;
        j=0;
        i++;
    }
    return 0;
}