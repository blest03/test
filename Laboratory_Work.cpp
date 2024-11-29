#include <iostream>
using namespace std;

// 1 задание
/*int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите a, b: "; cin >> a >> b;
	int *pa=&a, *pb=&b;
	if (a > b)
		*pa *= 2;
	else
		*pb *= 2;
	cout << "До замены значений: " << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;
	*pa ^= *pb;
	*pb ^= *pa;
	*pa ^= *pb;
	cout << "После замены значений: " << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb;
}*/
// 2 номер
/*int main(){
	setlocale(LC_ALL, "Russian");
	int n, k = 0;
	cout << "Введите размерность массива Z: "; cin >> n;
	int* Z = new int[n];
	int* Q = new int[n];
	// ввод элементов массива Z
	cout << "Введите элементы массива Z: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> Z[i];
	}
	// получение массива Q
	for (k; k < n; k++)
	{
		if (Z[k] >= -3 and Z[k] <= 7) // если число принадлежит отрезку [-3;7]
		{
			if (Z[k] < 0) // если число отрицательное то меняем его местами с последним числом массива Z
			{
				Z[(n - 1)] ^= Z[k];
				Z[k] ^= Z[(n - 1)];
				Z[(n - 1)] ^= Z[k];
			}
			break; // останавливаем цикл, чтобы массив Q больше не заполнялся
		}
		Q[k] = Z[k];
	}
	// вывод массивов
	cout << "Массив Z: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Z[" << i << "] = " << Z[i] << " | ";
	}
	cout << endl << "Массив Q: " << endl;
	for (int i = 0; i < k; i++)
	{
		cout << "Q[" << i << "] = " << Q[i] << " | ";
	}
}*/
// 3 номер
/*int main() {
	setlocale(LC_ALL,"Russian");
	int n, k;
	cout << "Введите размерность массива n = "; cin >> n;
	cout << "Введите элементы массива: ";
	// ввод элементов массива
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
		cin >> mas[i];
	// вывод исходного массива
	cout << "Исходный массив: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " | ";
	}

	cout << endl << "Введите число k: "; cin >> k;
	k = k % n; // на случай если k>n
	// вывод первых чисел (крайние числа сдвинутые на k влево)
	for (int i = 0; i < (n - k); i++)
	{
		cout << *(mas + k + i) << " | ";
	}
	// вывод последних чисел (первые к числа)
	for (int i = 0; i < k; i++)
	{
		cout << *(mas + i) << " | ";
	}
}*/
// 4 номер
int main() {
	int N = 2;
	while (N < 3)
		cin >> N;
	int* Z = new int[N];
	for (int i = 0; i < N; i++)
		cin >> Z[i];
	for (int i = 0; i < N; i++)
		cout << Z[i] << " | ";
	cout << endl;
	int h = 0;
	// создание массива, в которые будем вносить члены прогрессии
	int* A = new int[h];
	for (int i = 0; (i+2) < N; i++)
	{
		if ((*(Z + i + 1) - *(Z + i)) == (*(Z + i + 2) - *(Z + i + 1)))
		{
			h+=3;
			A[(h-3)] = *(Z + i);
			A[(h-2)] = *(Z + i + 1);
			A[(h-1)] = *(Z + i + 2);
		}
	}
	for (int i = 0; i < h; i++)
		cout << A[i] << " | ";
}