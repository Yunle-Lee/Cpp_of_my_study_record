#include<iostream>
using namespace std;

int main() {
	char ch;
	int num;
	cout << "输入单个字符串，本程序将对你输入的字符串实现自定义的凯撒加密" << endl;
	cout << "本程序仅限单个大小写字母与数字字符"<<endl;
	cin >> ch;
	cin >> num;
	if (ch >= 'A' && ch <= 'Z')  ch = 'A' + (ch - 'A' + num) % 26;
	else if (ch >= 'a' && ch <= 'z')  ch = 'a' + (ch - 'a' + num) % 26;
	else if (ch >= '0' && ch <= '9')  ch = '0' + (ch - '0' + num) % 10;
	cout << "加密结果：" << endl;
	cout << ch << endl;
	return 0;
}