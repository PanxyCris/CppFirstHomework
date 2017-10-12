#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

void main(){
	string in;
	cin >> in;
	string out = "";
	for (decltype(in.length()) i = 0; i < in.length(); i++)
		out += in[in.length() - i - 1];
	cout << out;
}