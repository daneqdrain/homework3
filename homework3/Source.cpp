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
		std::cout << "��������� �����\n������� ���-�� ������ ��� ������: ";
		std::cin >> rub;

		commissionbank = rub * commision;
		rub = rub - rub * commision;

		std::cout << "�������� ������ ��� ������\n";
		std::cout << "1 - ������, 2 - ����, 3 - ����, 4 - �����, 5 - ����\n";
		std::cout << "����: ";
		std::cin >> choose;

		if (choose == 1)
		{
			std::cout << "����� �������: " << rub / dollar << "\n";
			std::cout << "���� ��������: " << commissionbank << " ������\n";
		}
		else if (choose == 2)
		{
			std::cout << "����� �������: " << rub / euro << "\n";
			std::cout << "���� ��������: " << commissionbank << " ������\n";
		}
		else if (choose == 3)
		{
			std::cout << "����� �������: " << rub / yuan << "\n";
			std::cout << "���� ��������: " << commissionbank << " ������\n";
		}
		else if (choose == 4)
		{
			std::cout << "����� �������: " << rub / farit << "\n";
			std::cout << "���� ��������: " << commissionbank << " ������\n";
		}
		else if (choose == 5)
		{
			std::cout << "����� �������: " << rub / yena << "\n";
			std::cout << "���� ��������: " << commissionbank << " ������\n";
		}
		else
		{
			std::cout << "Error\n";
		}

		std::cout << "��������� ������? 1 - ��, 2 - ���\n";
		std::cout << "����: ";
		std::cin >> choose;

		if (choose == 1)
		{
			continue;
		}
		else if (choose == 2)
		{
			std::cout << "�� ��������!";
			break;
		}
		else
		{
			std::cerr << "Error\n";
			break;
		}
	}
}