#include <iostream>
using namespace std;

class Money
{
public:
	double first;
	int second;
	void Print()
	{
		cout << "first = " << first << "\nsecond = " << second << endl << endl;
	}

	void Summa()
	{
		double sum;
		sum = first / 30 * second;
		cout << "Summa = " << sum << endl;
	}
};

int main () {

	setlocale(LC_ALL, "ru");

	Money a;

	cout << "Введите размер оклада: ";
	cin >> a.first;

	cout << "Введите кол-во отработанных дней: ";
	cin >> a.second;

	a.Summa();

	return 0;
}
