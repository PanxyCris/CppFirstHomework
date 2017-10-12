#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
int change(string);

void main(){
	string cal, num1, num2;
	cin >> cal;
	cin >> num1;
	cin >> num2;
	int fact1 = change(num1), fact2 = change(num2);
	int operation;
	if (cal == "add")
		operation = fact1 + fact2;
	else if (cal == "sub")
		operation = fact1 - fact2;
	else
		operation = fact1*fact2;
	bool isMinus = false;
	if (operation == 0)
		cout << operation;
	else{
	if (operation < 0){
		isMinus = true;
		operation = -operation;
      }
	string result = "";
	if (isMinus)
		result = "-";
	int count = 0;
	while (true){
		int temp = (int)pow(13, count);
		if (operation >=temp && operation <13*temp)
			break;
		count++;
	  }
	while (count != -1){
		int character = operation / (int)pow(13, count);
		string temp = "";
		switch (character){
		case 0:temp = "0"; break;
		case 1:temp = "1"; break;
		case 2:temp = "2"; break;
		case 3:temp = "3"; break;
		case 4:temp = "4"; break;
		case 5:temp = "5"; break;
		case 6:temp = "6"; break;
		case 7:temp = "7"; break;
		case 8:temp = "8"; break;
		case 9:temp = "9"; break;
		case 10:temp = "A"; break;
		case 11:temp = "B"; break;
		case 12:temp = "C"; break;
		}
		result += temp;
		operation %= (int)pow(13, count);
		count--;
	}
	cout << result;
	}

}

int change(string num){
	int result = 0;
	bool isMinus = false;
	if (num[0] == '-'){
		isMinus = true;
		num = num.substr(1);
	}

		for (decltype(num.length()) i = 0; i < num.length(); i++){
			int temp = 0;
			if (num[i] >= 48 && num[i] <= 57)
				temp = num[i] - 48;
			else
				temp = num[i] - 55;
			result += temp*(int)pow(13, num.length() - i - 1);
	}		
		
		if (isMinus)
			result *= -1;
		return result;
}