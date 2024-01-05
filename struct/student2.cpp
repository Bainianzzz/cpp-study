#include<iostream>
using namespace std;

struct Students
{
	char name[20];
	double midScore;
	double endScore;
    double averScore;
};

void averageScore(Students sts[],int len);
void bubble1(Students *pst,int len);
void bubble2(Students sts[],int len);

int main(){
    Students sts[5]={
        {"zhs",88,77},
        {"lis",66,55},
        {"liu",44,33},
        {"bb",87,65},
        {"aa",34,98}
    };

    averageScore(sts,5);

    for(int i=0;i<5;i++){
        cout<<sts[i].name<<": "<<sts[i].averScore<<endl;
    }

    bubble1(sts,5);
    // bubble2(sts,5);

    for(int i=0;i<5;i++){
        cout<<sts[i].name<<": "<<sts[i].averScore<<endl;
    }

    system("pause");
    return 0;
}

void averageScore(Students sts[],int len){
    for(int i=0;i<len;i++){
        sts[i].averScore=(sts[i].midScore+sts[i].endScore)/2;
    }
}

// 冒泡排序（降序）
// 使用结构体指针
void bubble1(Students *pst,int len){
    Students *p,temp;
    for(int i=1;i<len;i++){
        for(p=pst;p<pst+len-i;p++){
            if (p->averScore<(p+1)->averScore){
                temp=*p;
                *p=*(p+1);
                *(p+1)=temp;
            }
        }
    }
}

// 使用结构体数组下标
void bubble2(Students sts[],int len){
    Students temp;
    for(int i=1;i<len;i++){
        for(int p=0;p<len-i;p++){
            if (sts[p].averScore<sts[p+1].averScore){
                temp=sts[p];
                sts[p]=sts[p+1];
                sts[p+1]=temp;
            }
        }
    }
}