//Пользователь вводит массив из целых чисел.Найти:
//Количество чисел у которых последняя цифра 7
//Факториал последнего нечетного элемента.
//Количество нечетных цифр в максимальном элементе массива.

#include <iostream>
using namespace std;
bool f1(int u) //Количество чисел у которых последняя цифра 7
{
	int s, r;
	while (u > 0) {
		s = u % 10;
		if (s == 7)
		//u = 10;
		//if ((s == 7)// && (u == 0)) 
			return true; break;
	}
	
	return false;
}
int f2(int r) //Факториал последнего нечетного элемента
{
	int c = 1;
	for (int i = 2; i <= r; i++)
	{
		c *= i;
	}
	return c;
}
int f3(int d) //Количество нечетных цифр в максимальном элементе массив
{
	int s, b = 0;
	while (d > 0) {
		s = d % 10;
		d /= 10;
		if ((s % 2) != 0)
			b++;
	}
	return b;
}
int main()
{
	setlocale(0, "");
	int arr[10];
	int n;
	cout << "Введите размерность массива" << endl;
	cin >> n;
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int c = 0;
	for (int i = 0; i <= n; i++)
	{
		if (f1(arr[i]))
			c++;
	}
	cout << "Количество чисел у которых последняя цифра 7 = " << c << endl;
	int l = 0,i;
	for (i = n; i > 0; i--)
	{
		if ((arr[i] % 2) != 0)
		{
			l = arr[i]; break;
		}
		
	}

	cout << "факториал = " << f2(l) << endl;
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Количество нечетных цифр в максимальном элементе массива = " << f3(max);
}

