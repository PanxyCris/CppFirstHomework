#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::vector;

void main(){
	int n;
	cin >> n;
	vector<long long> ivec(n);
	for (int i = 0; i < n; i++)
		cin >> ivec[i];
		
	for (decltype(ivec.size()) i = 0; i < ivec.size(); i++)
		while (ivec[i] >= 8)
			ivec[i] >>= 1;
	long long sum = 0;
	for (decltype(ivec.size()) i = 0; i < ivec.size(); i++)
		sum += ivec[i];
	cout << sum;
		
}