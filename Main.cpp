#include <iostream>
#include <cctype>
#include <cstdlib>
#include <stdio.h>
using namespace std;


int Words(char* str)
{
	int count = 0;
	size_t sizestr = strlen(str);
	char* new_str = new char[sizestr + 2];
	memcpy(new_str, str, sizestr);
	new_str[sizestr] = ' ';
	new_str[sizestr + 1] = '\0';

	delete[] str;
	str = new_str;
    cout << str;
	char* begin_str(str), * n_str(str + 1);
	while (*begin_str)
	{
		if (isalpha(*begin_str) && (isspace(*n_str) || ispunct(*n_str))) ++count;
		++n_str;
		++begin_str;
	}
	return count;
}

int main(int argc, char* argv)
{
	char s[30] = 'My best friend is Natalia.';
	printf("%d", Words(s));
	system("pause");
	return 0;
}