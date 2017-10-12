#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void main(){
	int n,m;
	cin >> n;
	vector<int> ivec(n);
	int num;
	for (int i = 0; i < n; i++){
		cin >> num;
		ivec[i] = num;
	}
	cin >> m;
	vector<string> exp(m);
	string str;
	int operation;
	for (int i = 0; i < m; i++){
		cin >> str;
		if (str == "add"){
			cin >> operation;
			for (int j = 0; j < n; j++)
				ivec[j] += operation;
		}
		else if (str == "sub"){
			cin >> operation;
			for (int j = 0; j < n; j++)
				ivec[j] -= operation;
		}
		else if (str == "mul"){
			cin >> operation;
			for (int j = 0; j < n; j++)
				ivec[j] *= operation;
		}
		else if (str == "pow"){
			cin >> operation;
			for (int j = 0; j < n; j++)
				ivec[j] = (int)pow(ivec[j], operation);
		}
		else if (str == "sqa"){
			int sum = 0;
			for (int j = 0; j < n; j++){
				int temp = ivec[j] * ivec[j];
				sum += temp;
			}
			cout << sum << endl;
		}
		else if (str == "print"){
			for (int i = 0; i < n; i++)
				if (i != n - 1)
					cout << ivec[i] << " ";
				else
					cout << ivec[i]<<"	";
				
		}
	}

	
}