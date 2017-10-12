#include "Header.h"

void main(){
	int n;
	cin >> n;
	vector<excel> inf(n);
	for (int i = 0; i < n; i++){
		string name, ID, subject;
		int grade;
		cin >> name;
		cin >> ID;
		cin >> subject;
		cin >> grade;
		if (!i){
		  inf[i].name = name;
		  inf[i].ID = ID;
		  inf[i].subject = subject;
		  inf[i].grade = grade;
		}
		else{
			for (int j = 0; j < i; j++){
				if (name == inf[j].name&&ID == inf[j].ID&&subject == inf[j].subject){
					inf[j].grade = grade;
					break;
				}
				else if (j == i - 1){
					inf[i].name = name;
					inf[i].ID = ID;
					inf[i].subject = subject;
					inf[i].grade = grade;
				}
			}
		}
	}
	int m;
	cin >> m;
	string operation,ob;
	
	for (int i = 0; i < m; i++){
		cin >> operation;
		cin >> ob;
		double sum = 0, count = 0;
		if (operation == "course"){
			for (int j = 0; j < n; j++)
				if (inf[j].subject == ob){
					sum += inf[j].grade;
					count++;
				}
			
		}
		else{
			for (int j = 0; j < n; j++)
				if (inf[j].name == ob){
					sum += inf[j].grade;
					count++;
				}
		}
		double average = sum / count;
		cout << ob<<" ";
		printf("%.2f", average);
		cout << endl;
	}
}