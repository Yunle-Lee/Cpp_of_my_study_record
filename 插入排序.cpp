#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

void f(vector<int>& vec) {
	for (int i = 1; i < vec.size(); i++) {
		int key = vec[i];
		int j = i - 1;
		while (j >= 0 && vec[j] >key) {
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

int main() {
	int num;
	cout << "定义一下数组的大小，数组内的元素系统会自动地帮你添加" << endl;
	cin >> num;
	vector<int>vec(num);
	srand(789);
	for (int y = 0; y < vec.size(); y++) {
		vec[y] = rand();
	}
	cout << "Unsorted vector:";
	for (int y = 0; y < vec.size(); y++) {
		cout << vec[y] << " ";
	}
	cout << endl;
	f(vec);
	cout << "Sorted vector:" << endl;
	for (int k = 0; k < vec.size();k++) {
		cout << vec[k] << " ";
	}
	cout << endl;
	return 0;
}