#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main() {
	int num;
	cin >> num;
	vector<vector<int>>vec1(num, vector<int>(num));
	int cnt = 1,i=0,j=(num-1);
	while (cnt < num * num) {
		while (i <(num - 1)&& vec1[i+1][j] == 0) vec1[i++][j] = cnt++;
		while (j > 0 && vec1[i][j-1] == 0) vec1[i][j--] = cnt++;
		while (i >0 && vec1[i-1][j]==0) vec1[i--][j] = cnt++;
		while (j <(num - 1) && vec1[i][j + 1] == 0) vec1[i][j++] = cnt++;
	}
	vec1[i][j] = num * num;
	for (int w = 0; w < num; w++) {
		for (int z = 0; z < num; z++) {
			cout <<setw(3)<< vec1[w][z] << " ";
		}cout << endl;
	}
	return 0;
}