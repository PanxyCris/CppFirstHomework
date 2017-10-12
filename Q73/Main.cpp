#include"Header.h"

void main(){
	string num;
	cin >> num;
	int n = num.length()-1;
    vector<char> ivec;
	string number[8] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	printout(n,0,num,number, ivec);
}

void printout(int n,int m,string num,string number[],vector<char> ivec){
	for (int i = 0; i < 4; i++){
	    ivec.push_back(number[num[m]-'2'][i]);
		if (n == m)
			for (auto j = 0; j < ivec.size(); j++){
			      cout << ivec[j];
				  if (j == ivec.size() - 1)
					  cout << endl;
			}	
	    else
		      printout(n,m+1, num,number, ivec);
     	  ivec.pop_back();
	    if (i == 2 && number[num[m]-'2'].length() == 3)
		      break;
	}
}