#include<iostream>
using namespace std;

int main() {
	double k = 1,ans=0;
	for (k=1;k <= 10;k++) {
		ans += 1 / (k * (k + 1));
	}
	cout << ans<<endl;
	system("pause");
	return 0;
}