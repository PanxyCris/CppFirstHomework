#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;

void main(){

	string in;
	cin >> in;
	int k = 0, m = in.length();
	while (1 + m + k >= (int)pow(2, k))
		k++;
	vector<int> ivec(k+m);
	int temp = 1,count = 0;
	for (int i = 0; i < k + m; i++){
		while (temp < i + 1)
			temp <<= 1;
		if (temp != i + 1){
			if (in[count] == '0')
				ivec[i] = 0;
			else
				ivec[i] = 1;
			count++;
		}
		else
			ivec[i] = 0;
	}

	int init = k + m;
	while (k != 1){
		for (int i = init-1; i >= (int)pow(2, k - 1); i--){
			for (int j = (int)pow(2, k - 1); j >= 1; j >>= 1)
				if ((i+1)&j)
					ivec[j - 1] ^= ivec[i];
		}
		init = (int)pow(2, k - 1) - 1;
		k--;
	}
	 string out = "";
	for (decltype(ivec.size())i = 0; i < ivec.size(); i++)
		if (ivec[i])
			out += "1";
		else
			out += "0";
	cout << out;

}