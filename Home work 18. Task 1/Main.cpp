
#include <iostream>
using namespace std;

inline double func(int num1, int num2, int num3, const int counter) {
	double sum = 0;
	for (int i = 0; i < counter; i++) {
		sum += num1 + num2 + num3;
		return sum / counter;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, k;
	const int S = 3;
	cout << "Встраиваемая функция ср. арифметического\n";
	cout << "Введите три числа: \n";
	cin >> n >> m >> k;
	cout << func(n, m, k, S);

	return 0;
}