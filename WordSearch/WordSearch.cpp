#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;

int main() {
	system("chcp 1251");
	string text;
	getline(cin, text);
	istringstream stream(text);
	map<string, int> map;
	for (string word; stream >> word; ++map[word]);
	pair<string,int> pair;
	for (auto element : map) {
		if (pair.second < element.second) pair = element;
	}
	cout << "Наиболее встречаемое слово (" << pair.first << ") встретилось " << pair.second << " раз(а)" << endl;

}