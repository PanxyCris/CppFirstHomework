#include<iostream>
using std::cin;
using std::cout;

void main(){
	int n;
	cin >> n;
	if (n <= 1)
		cout << n;
	else{
		long long result = 0;
		long long small = 0, large = 1;
		while (n != 1){
			result = small + large;
			long long temp = small;
			small = large;
			large += temp;
			n--;
		}
		cout << result;
	}
}