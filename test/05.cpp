#include<iostream>
using namespace std;

// void strCopy(char* dest, char* source) {
//     while (*dest = *source){
//         dest++;
//         source++;
//     }
// }

void strCopy(char dest[], char source[]) {
    int i=0;
    while (dest[i] = source[i]){
        i++;
    }
}

int main(){
    char a[20]="aaa";
    char b[20]="";
    strCopy(b,a);
    cout << b; 
    return 0;
}