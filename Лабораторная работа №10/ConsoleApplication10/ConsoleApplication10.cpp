// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int n;
	double rez, x, i;
	std::cin >> x >> n;
	rez = x;
	i = n;
	i = abs(n);
	while (n > 1) {
		rez = rez * x;
		n--;
	}
	if (i < 1) {
		std::cout << (1 / rez);
	}
	else std::cout << rez;
}
