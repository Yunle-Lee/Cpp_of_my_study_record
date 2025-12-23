#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

void quicksort(int* ps, int* pe) {
	int ref = *ps;
	int* left = ps;
	int* right = pe;
	if (left >= right) return;
	while (left < right) {
		while (left < right && *right >= ref) right--;
		while (left<right && *left<= ref) left++;
		if (left < right) swap(*left, *right);
	}
	if (left <= right) swap(*left,*ps);
	quicksort(ps,left-1);
	quicksort(left+1,pe);
}

int main() {
	vector<int>vec1(10);
	srand(123);
	for (int i = 0; i < vec1.size(); i++) {
		vec1[i]=rand();
	}
	cout << "Unsorted vector:";
	for (int k = 0; k < vec1.size(); k++) {
		cout << vec1[k] << " ";
	}
	cout << endl;
	quicksort(vec1.data(), vec1.data()+vec1.size()-1);
	
	cout << "Sorted vector:";
	for (int j = 0; j < vec1.size(); j++) {
		cout << vec1[j] << " ";
	}
	cout << endl;
	return 0;
}