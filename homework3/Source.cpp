#include <iostream>
#include <Windows.h>
int main()
{
	setlocale(LC_ALL, "ru");

	double rub{};
	int choose{};
	double dollar = 101.68, euro = 106.1, yuan = 13.43, farit = 37, yena = 0.64;
	double commision = 0.05, commissionbank = 0;
	while (true)
	{
		system("cls");
		std::cout << "Конвертер валют\nВведите кол-во рублей для обмена: ";
		std::cin >> rub;

		commissionbank = rub * commision;
		rub = rub - rub * commision;

		std::cout << "Выберите валюту для обмена\n";
		std::cout << "1 - доллар, 2 - евро, 3 - юань, 4 - фарит, 5 - йена\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			std::cout << "Всего куплено: " << rub / dollar << "\n";
			std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
		}
		else if (choose == 2)
		{
			std::cout << "Всего куплено: " << rub / euro << "\n";
			std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
		}
		else if (choose == 3)
		{
			std::cout << "Всего куплено: " << rub / yuan << "\n";
			std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
		}
		else if (choose == 4)
		{
			std::cout << "Всего куплено: " << rub / farit << "\n";
			std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
		}
		else if (choose == 5)
		{
			std::cout << "Всего куплено: " << rub / yena << "\n";
			std::cout << "Ваша комиссия: " << commissionbank << " рублей\n";
		}
		else
		{
			std::cout << "Error\n";
		}

		std::cout << "Повторить услугу? 1 - Да, 2 - Нет\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			continue;
		}
		else if (choose == 2)
		{
			std::cout << "До свидания!";
			break;
		}
		else
		{
			std::cerr << "Error\n";
			break;
		}
	}
}