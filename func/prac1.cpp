#include<iostream>
using namespace std;

double f(double k);

int main() {
	double k = 1,ans=0;
	for (k=1;k <= 10;k++) {
		ans += 1 / (k * (k + 1));
	}
	cout << ans<<endl;
	cout << f(10) << endl;
	system("pause");
	return 0;
}

double f(double k) {
	if (k == 1)
		return 0.5;
	else
		return f(k - 1) + 1 / (k * (k + 1));
}