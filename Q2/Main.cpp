#include<iostream>
using std::cin;
using std::cout;

void main(){
	int x, y;
	cin >> x >> y;
	long long result = 1;
	for (int i = 0; i < y; i++)
		result *= x;
	cout << result;
	
}