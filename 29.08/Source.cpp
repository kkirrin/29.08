//#include <iostream>
////Инициализация массивов объектов
//using namespace std;
//
//class MyClass
//{
//	int x, y;
//
//public:
//	MyClass(int i, int j) { x = i; y = j; }
//	int get_x() { return x; }
//	int get_y() { return y; }
//};
//
//
//int main()
//{
//	MyClass obs[2][2] = {
//		MyClass(1,2),MyClass(3,4),
//		MyClass(5,6),MyClass(7,8),
//
//	};
//
//	int i;
//
//	for (i = 0; i < 2; i++)
//	{
//		cout << obs[i][0].get_x() << ' ';
//		cout << obs[i][0].get_y() << '\n';
//		cout << obs[i][1].get_x() << ' ';
//		cout << obs[i][1].get_y() << '\n';
//	}
//	return 0;
//}

//Указатели на объекты
//
//#include <iostream>
//
//using namespace std;
//
//class Point_Example
//{
//	int num;
//public:
//	void set_num(int val) { num = val; } //Будем передавать значение потом, которое сохранится в переменной, которую
//	//потом можно использовать, в нашем случае для вывода
//	void show_num() { cout << num << "\n";}
//
//};
//
//int main()
//{	
//	Point_Example object[2] = {}, * p; // Объявил объекта класса(экземпляр) и указатель на него
//	object[0].set_num(23); //Передали значение в переменную num через val(параметр)
//	object[1].set_num(24);
//
//	//object[0].show_num();
//	//object[1].show_num();
//
//	p = &object[0]; //тут я присвоим значение адреса переменной object(23) 
//	//p->set_num(44); //Теперь через указатель я обращаюсь к функции
//	p->show_num();
//
//	p++; // В этом примере я указатель сделал на первый элемент, теперь указатель нужно продвинуть 
//	p->show_num(); //тут выведется значение второго элемента
//
//	p--; 
//	p->show_num();
//
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//class Triange
//{
//	double length; //длина основания 
//	double heigth; //высота
//public:
//	Triange(double l, double h)
//	{
//		length = l;
//		heigth = h;
//	}
//
//	double hypot()
//	{
//		return sqrt(heigth * heigth + length * length);
//	}
//	double area()
//	{
//		return (length * heigth) / 2.0;
//	}
//
//};
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	Triange first(25.0, 9.0);
//	Triange second(16.0, 4.0);
//	cout << "Гипотенуза первого треугольника равна - " << first.hypot() << endl;
//	cout << "И его площадь - " << first.area() << endl;
//
//	cout << "_________________________________________" << endl;
//	cout << "Гипотенуза второго треугольника равна - " << second.hypot() << endl;
//	cout << "И его площадь - " << second.area() << endl;
//
//	return 0;
// }

//Перегрузка конструкторов
#include <iostream>

using namespace std;

class Sample {
public:
	int x;
	int y;

	//Конструтор по умолчанию
	Sample() { x = y = 0; }
	//Конструктор с одним параметром
	Sample(int i) { x = y = i; }
	//Конструктор с двумя параметрами
	Sample(int i, int j) { x = i; y = j; }
};

int main()
{
	Sample a;
	Sample b(5);
	Sample c (5,5);

	cout << "a.x = " << a.x << " a.y = " << a.y << "\n";
	cout << "b.x = " << b.x << " b.y = " << b.y << "\n";
	cout << "c.x = " << c.x << " c.y = " << c.y << "\n";


	return 0;
}