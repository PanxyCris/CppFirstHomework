#include<iostream>
using std::cin;
using std::cout;

void main(){
	int n, m;
	cin >> n >> m;
	int sum = 0;
	for (int i = n; i <= m; i++){
		if (i == 2)
			sum += i;
		else
		for (int j = 2; j < i; j++)
			if (i%j == 0)
				break;
			else if (j == i-1)
				sum += i;
	}
	cout << sum;
}