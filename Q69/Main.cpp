#include "Header.h"

void main(){
	int length;
	string num;
	cin >> length;
	cin >> num;

	if (length == 0)
		cout << 0;
	else{
	int count = 0,max = 1;
	for (int i = 0; i < length-1; i++){
		int temp = i;
		for (int j = length - 1; j >= temp; j--)
			if (j == temp + 1&&num[temp]==num[j]){
				count+=2;
				if (max < count)
					max = count;
				count = 0;
			}
			else if (j == temp){
				count++;
				if (max < count)
					max = count;
				count = 0;
			}
			else if (num[temp] == num[j]){
				count += 2;
				temp++;
			}
			else
				count = 0;
		
	}
	cout << max;
	}
}