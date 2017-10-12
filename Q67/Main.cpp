#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;

void main(){
	string str;
	vector<string> ivec;
	while (cin >> str)
		ivec.push_back(str);
	int count = 0;
	for (decltype(ivec.size()) i = 0; i < ivec.size(); i++)
		count++;
	string last = ivec[count - 1];
	cout << last.length();
}