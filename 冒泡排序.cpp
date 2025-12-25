#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

void f(vector<int>&vec) {
	for (int i = 0; i < vec.size()-1; i++) {
		for (int j = 0; j < vec.size() - 1 - i; j++) {
			if (vec[j] > vec[j + 1]) swap(vec[j+1], vec[j]);
		}
	}
}

int main() {
	int num;
	cout << "输入你要的数组长度，系统会自动地给你把数组内元素给填充了"<<endl;
	cin >> num;
	vector<int>vec1(num);
	srand(456);
	for (int i = 0; i < vec1.size(); i++) {
		vec1[i] = rand();
	}
	cout << "排序前的数组为：" << endl;
	for (int m = 0; m < vec1.size(); m++) {
		cout << vec1[m] << " ";
	}
	cout << endl;
	f(vec1);
	cout << "冒泡排序之后的数组为：" << endl;
	for (int k = 0; k < vec1.size(); k++) {
		cout << vec1[k] << " ";
	}
	cout << endl;
	return 0;
}