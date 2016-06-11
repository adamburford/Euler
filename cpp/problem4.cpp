#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(__int64 number)
{
	string s = to_string(number);
	int first = 0;
	int last = s.length() - 1;

	while (first < last)
	{
		if (s[first] != s[last])
			return false;
		first++;
		last--;
	}
}

int main()
{
	int b = 999;
	int a = 999;

	__int64 multiple = 0;
	__int64 answer = 0;

	for (a = 999; a > 0; a--)
	{
		for (b = 999; b > 0; b--)
		{
			multiple = a * b;
			if (isPalindrome(multiple) && (multiple > answer))
				answer = multiple;
		}
	}
	cout << answer << endl;
}