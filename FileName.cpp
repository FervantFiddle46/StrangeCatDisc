#include <iostream>
#include <Windows.h>
#include <cmath>

void FinalD(int sum, int a, int b, int c);


int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c, discr, sum;

	std::cout << "Здравтсвуйте! Добро пожаловать в программу по нахождению корней полного квадратного уравнения!!";

	Sleep(120);

	std::cout << "\n\nДля начала, введите значения a, b и c";

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	discr = (b * b) - (4 * a * c);

	Sleep(120);

	std::cout << "\n\nОтлично! Вот такое у нас уравнение получилось: \n" << a << "x^2 + " << b << "x + " << c << " = 0";
	
	Sleep(1200);

	std::cout << "\n\nТеперь давайте решать по формуле дискриминанта!";
	Sleep(800);
	std::cout << "\nВспомним формулу: D = b^2 - 4ac";
	Sleep(800);
	std::cout << "\nТ.е. D = " << b << " * " << b << " - 4 * " << a << " * " << c;
	Sleep(800);
	std::cout << "\nТ.е. D = " << b*b << " - " << 4 * a * c;
	Sleep(800);
	std::cout << "\nТ.е. D = " << discr << "\n\n";

	FinalD(discr, a, b, c);


	std::cout << "\n\n\n\n\n";
	system("pause");
	return 0;
}

void FinalD(int sum, int a, int b, int c)
{
	if (sum == 0)
	{
		std::cout << "x = - b / (2 * a)";
		Sleep(800);
		std::cout << "x = " << -b / (2 * a);
	}
	else if (sum > 0)
	{
		std::cout << "x1 = - b + кореньD / (2 * a) \n";
		Sleep(800);
		std::cout << "x1 = " <<( - b + sqrt(sum)) / (2 * a) << "\n\n";
		
		std::cout << "x2 = - b - кореньD / (2 * a) \n";
		Sleep(800);
		std::cout << "x2 = " <<( - b - sqrt(sum)) / (2 * a) << "\n\n";
	}
	else
	{
		std::cout << "Корней нет!!";
	}
}
