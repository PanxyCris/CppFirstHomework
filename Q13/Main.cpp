#include<iostream>
using std::cin;
using std::cout;
 
void main(){
	int n;
	cin >> n;
	int t = 2;
	while (true){
		if ((t-2)*(t - 1) / 2 < n && n<=((t-1)*t / 2))
			break;
		else
			t++;
	}
	int r = n - (t-2)*(t - 1) / 2;
	if (t % 2)
		cout << r << "/" << t - r;
	else
		cout << t - r << "/" << r;
}