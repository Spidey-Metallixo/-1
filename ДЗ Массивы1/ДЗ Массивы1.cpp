#include <iostream>
#include <Windows.h>

/* Задание 1 */

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int A = 10;
	int arr[A]{};

	std::cout << "Рандомный массив: ";
	for (int i = 0; i < A; i++)
	{
		arr[i] = rand() % 100 + 1;
		std::cout << arr[i] << " ";
	}
	int min = arr[0], max = arr[0];
	for (int i = 1; i < A; i++)
	{
		if (arr[i] < min)
			min = arr[i];

		if (arr[i] > max)
			max = arr[i];
	}
	std::cout << "\nМинимальный элемент: " << min << "\n";
	std::cout << "Максимальный элемент: " << max << "\n\n";




	/* Задание 2 */

	int minValue = 0, maxValue = 0, maxNum = 0, sum = 0;;
	std::cout << "Введите минимальное значение диапазона: ";
	std::cin >> minValue;
	std::cout << "Введите максимальное значение диапазона: ";
	std::cin >> maxValue;
	std::cout << "Массив: ";
	for (int i = 0; i < A; i++)
	{
		arr[i] = minValue + rand() % (maxValue - minValue + 1);
		std::cout << arr[i] << " ";
	}

	std::cout << "\nВведите число, элементы меньше которого нужно сложить: ";
	std::cin >> maxNum;
	for (int i = 0; i < A; i++)
	{
		if (arr[i] < maxNum)
		{
			sum = sum + arr[i];
		}
	}
	std::cout << "Сумма элементов массива, меньше " << maxNum << ", равна " << sum << "\n\n";




	/* Задание 3 */

	int profit[12]{};
	int first, last;
	for (int i = 0; i < 12; i++)
	{
		std::cout << "Введите прибыль за " << i + 1 << "-й месяц: ";
		std::cin >> profit[i];
	}

	std::cout << "\nПервый месяц: ";
	std::cin >> first;

	std::cout << "\nПоследний месяц: ";
	std::cin >> last;

	int min1 = profit[first - 1], max1 = profit[first - 1];
	int minMonth = first, maxMonth = first;

	for (int i = first; i <= last; i++)
	{
		if (profit[i - 1] < min1)
		{
			min1 = profit[i - 1];
			minMonth = i;
		}

		if (profit[i - 1] > max1)
		{
			max1 = profit[i - 1];
			maxMonth = i;
		}
	}

	std::cout << "\nМаксимальная прибыль в " << maxMonth << " месяце: " << max1
		<< "\nМинимальная прибыль в " << minMonth << " месяце: " << min1 << "\n\n";




	/* Задание 4 */

	const int three = 3;
	double sales[three]{}, salary[three]{};
	int best = 0;
	for (int i = 0; i < three; i++)
	{
		std::cout << "Введите продажи " << i + 1 << " менеджера: ";
		std::cin >> sales[i];
	}

	for (int i = 0; i < three; i++)
	{
		salary[i] = 200;

		if (sales[i] < 500)
		{
			salary[i] += sales[i] * 0.03;
		}
		else if (sales[i] <= 1000)
		{
			salary[i] += sales[i] * 0.05;
		}
		else
		{
			salary[i] += sales[i] * 0.08;
		}
	}

	std::cout << "\nЗарплаты менеджеров:\n";

	for (int i = 0; i < three; i++)
	{
		std::cout << i + 1 << " менеджер: "
			<< salary[i] << "$" << "\n";
	}

	for (int i = 1; i < three; i++)
	{
		if (sales[i] > sales[best])
		{
			best = i;
		}
	}
	salary[best] = salary[best] + 200;
	std::cout << "\nЛучший менеджер: " << best + 1 << "\n";
	std::cout << "Премия: 200$" << "\n";
	std::cout << "Итоговая зарплата: " << salary[best] << "$" << "\n";



	return 0;
}
