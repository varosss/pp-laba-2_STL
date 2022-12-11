// 26 вариант
// Палиндромом называется строка (в общем случае - последовательность
// значений), которая читается одинаково в прямом и обратном порядке,
// например «казак», «боб», «дед». Напишите программу для проверки,
// является ли строка палиндромом. Используйте класс stack.

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool is_palindrome(string str) {
	stack <char> chars;
	int n = str.size();

	for (int i = 0; i < n; i++) {
		if (i < n / 2) {
			chars.push(str[i]);
		}
		else {
			if (n % 2 != 0 and i == n / 2) {
				continue;
			}

			if (str[i] == chars.top()) {
				chars.pop();
			}
			else {
				return false;
			}
		}
	}

	return true;
}

int main()
{
	setlocale(LC_ALL, "ru");

	string str;
	cout << "Введите строку: ";
	getline(cin, str);

	bool palindrome = is_palindrome(str);

	if (palindrome) {
		cout << "Строка является палиндромом" << endl;
	}
	else {
		cout << "Строка не является палиндромом" << endl;
	}
}