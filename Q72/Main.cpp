#include"Header.h"

void main(){
	string str;
	cin >> str;
	vector<int> num(str.length());
	for (decltype(num.size())i = 0; i < num.size(); i++){
		switch (str[i]){
		case 'I':num[i] = 1; break;
		case 'X':num[i] = 10; break;
		case 'C':num[i] = 100; break;
		case 'M':num[i] = 1000; break;
		case 'V':num[i] = 5; break;
		case 'L':num[i] = 50; break;
		case 'D':num[i] = 500; break;
		}
	}

	int sum = 0;
	for (decltype(num.size())i = 0; i < num.size(); i++){
		if ((num[i]==1||num[i]==10||num[i]==100)&&i < num.size() - 1 && num[i + 1] > num[i]) 
			sum -= num[i]; 
		else 
			sum += num[i];
	}
	cout << sum;
}