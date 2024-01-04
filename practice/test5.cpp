#include <iostream>
#include<cmath>
using namespace std;

int main(){
	double sn = 0,an=1,i=1;

	while(an >= 1e-6){
		an =  (1.0 / (3.0 * i - 2.0));
		sn += pow(-1, i - 1) *an;
		i++;
	}

	cout <<sn<<endl;

	system("pause");
	return 0;
}