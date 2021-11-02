#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1)Вычислить количество слов в строке
	string str;
	getline(cin, str);
	int slov = 0;
	int k = 0;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] != ' ') {
			++k;
		}
		else {
			if(k > 0) 
				++slov;
			k = 0;
		}
	}
	if (k > 0)
		++slov;
	cout << slov << endl;
}