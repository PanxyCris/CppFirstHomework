#include "Header.h"

void main(){
	int m;
	cin >> m;
	vector<string> ivec(m);
	string str = "";
	string op1, op2;
	for (int i = 0; i < m; i++){
		cin >> ivec[i];
		if (ivec[i] == "append"){
			cin >> op1;
			str += op1;
		}
		else if (ivec[i] == "replace"){
			cin >> op1;
			cin >> op2;
			str = str.replace(str.find(op1),op1.length(), op2);				
		}
		else if (ivec[i] == "reverse"){
			string newStr = "";
			for (decltype(str.length())i = 0; i < str.length(); i++)
				newStr += str[str.length() - i - 1];
			str = newStr;
		}
		else if (ivec[i] == "changecase"){
			cin >> op1;
			if (op1 == "up")
				for (decltype(str.size())i = 0; i < str.size(); i++)
					str[i] = toupper(str[i]);
			else
				for (decltype(str.size())i = 0; i < str.size(); i++)
					str[i] = tolower(str[i]);
		}
		else if (ivec[i] == "length")
			cout << str.length()<< endl;
		else
			cout << str ;
	}
}