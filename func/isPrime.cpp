#include<iostream>
using namespace std;

int isPrime(int n);
void checkOutPrime(int min, int max);

int main(){
	int min = 1, max = 0;
	while(min>max){
		cout << "min=";
		cin >> min;
		cout << "max=";
		cin >> max;
	}
	
	checkOutPrime(min, max);

	system("pause");
	return 0;
}

int isPrime(int n){
	int i = 0, sta = 1;
	if (n == 1){
		sta = 0;
	}
	else{
		for (i = 2; i <= pow(n, 0.5); i++){
			if (n%i == 0){
				sta = 0;
				break;
			}
		}
	}
	return sta;
}

void checkOutPrime(int min, int max){
	int i = 0;
	for (i = min; i <= max; i++){
		if (isPrime(i)){
			cout << i<<endl;
		}
	}
}