#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int max = -1243;
	int k = 0;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] != ' ') {
			++k;
		}
		else {
			if (k > 0 && max < k)
				max = k;
			k = 0;

		}
	}
	if (k > 0 && max < k)
		max = k;
	cout << max << endl;

	string res = "";
	string RAM = "";
	int len = 0;

	for (int i = 0; i < str.length(); ++i) {
		if (str[i] != ' ') {
			res += str[i];

		}
		else {
			len = res.length();
			if (len == max) {
				res += " ";
				RAM = RAM + res;
			}
			res = "";
		}
	}
	len = res.length();
	if (len == max) {
		res += " ";
		RAM = RAM + res;
	}

	cout << RAM << endl;

}