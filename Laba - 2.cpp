#include <iostream>
#include <string>
using namespace std;

class Car
{
	string mark;
	string  model;
	int price;

public:
	Car(string P_mark, string P_model, int P_price) {
		mark = P_mark;
		model = P_model;
		price = P_price;
	}

	void Print() {
		cout << mark << " " << model << "\nСтоимость: " << price << endl;
	}
};

Car EnterCarInfo()
{
	string mark_car;
	string model_car;
	int price_car;

	cout << "Введите марку автомобиля: ";
	cin >> mark_car;
	cout << "Введите модель автомобиля: ";
	cin >> model_car;
	cout << "Введите стоимость автомобиля: ";
	cin >> price_car;

	Car Vedro(mark_car, model_car, price_car);


	return Vedro;
}


int main() {
	setlocale(LC_ALL, "ru");

	Car Vedro = EnterCarInfo();

	Vedro.Print();

	return 0;
}
