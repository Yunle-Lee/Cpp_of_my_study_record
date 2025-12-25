#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

void f(vector<int>& vec) {
	for (int i = 0; i < vec.size()-2; i++) {
		int min = i;
		for (int j = i + 1; j < vec.size() - 1; j++) {
			if (vec[j] < vec[min]) {
				min = j;
			}
			swap(vec[i], vec[min]);
		}
	}
}

int main() {
	vector<int>vec1(100);
	srand(123);
	for (int i = 0; i < vec1.size(); i++) {
		vec1[i] = rand();
	}
	cout << "Unsort vector:" << endl;
	for (int p = 0; p < vec1.size(); p++) {
		cout << vec1[p] << " ";
	}
	cout << endl;
	cout << "Sorted vector:" << endl;
	f(vec1);
	for (int k = 0; k < vec1.size(); k++) {
		cout << vec1[k] << " ";
	}cout << endl;
	return 0;
}