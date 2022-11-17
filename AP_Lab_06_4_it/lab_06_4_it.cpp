#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(double*& a, const int size, const double min, const double max)
{
	for (int i = 0; i < size; i++)
		a[i] = min + rand() * (max - min) / RAND_MAX;
}

void vuvid(double*& a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(10) << a[i];
	cout << endl;
}

int maximum(int* a, int size)
{
	int max = a[0];
	for (int i = 0; i < size; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

int summa(int* a, int size)
{
	int sum = 0, k;
	for (int i = 0; i < size; i++)
	{
		if (0 < a[i])
		{
			k = i;
		}
	}
	for (int i = 0; i < k; i++)
	{
		sum += a[i];
	}
	return sum;
}

int compression(int* a, const int size, int b, int c)
{
	int i = 0;
	while (i < size)
	{
		if (a[i] >= b && a[i] <= c)
			for (int j = i; j < size - 1; j++)
			{
				a[j] = a[j + 1];
				a[j + 1] = 0;
			}
		else
			i++;
	}
	return i;
}
int main()
{
	srand(time(NULL));
	setlocale(LC_CTYPE, "ukr");
	int a, b, n;
	cout << "Введiть кiлькiсть чисел:";
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 30 - i * i;
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Введiть iнтервал стиснення масиву від ";
	cin >> a;
	cout << " до ";
	cin >> b;
	cout << " Максимальний елемент масиву:" << maximum(arr, n) << endl;
	cout << "Сума значень масиву до отаннього додатнього елемента:" << summa(arr, n) << endl;
	cout << "Масив пiсля стиснення: ";
	int x = compression(arr, n, a, b);
	for (int i = 0; i < x; i++)
	{
		cout << arr[i] << "\t";
	}
	delete[]arr;
}