#include <iostream>
using namespace std;

struct Node{
	int code;
	Node *next;
};

void printList(Node *f, int length);
Node* firstNode();
Node* makeList(Node *f, int length);
Node* pop(Node *cur, int length, int interval);

int main(){
	//链表长度
	int length;
	cout << "length: ";
	cin >> length;

	//间隔
	int interval;
	cout << "interval: ";
	cin >> interval;

	//创建第一个节点
	Node *Cur=firstNode();
	
	//延长链表
	Cur=makeList(Cur, length);

	//输出链表
	printList(Cur,length);

	//淘汰小孩
	Cur=pop(Cur, length, interval);
	
	cout << "the winner is : No." << Cur->code << endl;
	delete Cur;

	system("pause");
	return 0;
}

Node* firstNode(){
	//创建第一个节点
	Node* cur = new Node{1,NULL};
	return cur;
}

Node* makeList(Node *cur, int length){
	//延长链表，最后一节点链接到第一个
	Node *Prev = nullptr, *first = cur;
	for (int i = 2; i <= length; i++){
		Prev = cur;
		cur = new Node{i,NULL};
		Prev->next = cur;
	}
	cur->next = first;
	return cur;
}

Node* pop(Node *cur, int length, int interval){
	while (length > 1){
		int i = interval;
		//数小孩
		while (i > 1){
			cur = cur->next;
			i--;
		}

		//淘汰当前指针指到小孩的下一个小孩（包括了往后数一个的操作）
		Node *After = cur->next->next;
		delete cur->next;
		cur->next = After;
		length--;

		printList(cur, length);
	}
	return cur;
}

void printList(Node *f, int length){
	//输出链表
	Node *first = f;
	while (length>0){
		cout << first->code << "\t";
		first = first->next;
		length--;
	}
	cout << endl;
}