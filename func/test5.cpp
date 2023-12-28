#include <iostream>
using namespace std;

int main(){
	double ans = 0,an=1,i=1;

	while(an >= 1e-6){
		an =  (1.0 / (3.0 * i - 2.0));
		ans += pow(-1, i - 1) *an;
		i++;
	}

	cout <<ans<<endl;

	system("pause");
	return 0;
}