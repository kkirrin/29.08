//#include <iostream>
////������������� �������� ��������
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

//��������� �� �������
//
//#include <iostream>
//
//using namespace std;
//
//class Point_Example
//{
//	int num;
//public:
//	void set_num(int val) { num = val; } //����� ���������� �������� �����, ������� ���������� � ����������, �������
//	//����� ����� ������������, � ����� ������ ��� ������
//	void show_num() { cout << num << "\n";}
//
//};
//
//int main()
//{	
//	Point_Example object[2] = {}, * p; // ������� ������� ������(���������) � ��������� �� ����
//	object[0].set_num(23); //�������� �������� � ���������� num ����� val(��������)
//	object[1].set_num(24);
//
//	//object[0].show_num();
//	//object[1].show_num();
//
//	p = &object[0]; //��� � �������� �������� ������ ���������� object(23) 
//	//p->set_num(44); //������ ����� ��������� � ��������� � �������
//	p->show_num();
//
//	p++; // � ���� ������� � ��������� ������ �� ������ �������, ������ ��������� ����� ���������� 
//	p->show_num(); //��� ��������� �������� ������� ��������
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
//	double length; //����� ��������� 
//	double heigth; //������
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
//	cout << "���������� ������� ������������ ����� - " << first.hypot() << endl;
//	cout << "� ��� ������� - " << first.area() << endl;
//
//	cout << "_________________________________________" << endl;
//	cout << "���������� ������� ������������ ����� - " << second.hypot() << endl;
//	cout << "� ��� ������� - " << second.area() << endl;
//
//	return 0;
// }

//���������� �������������
#include <iostream>

using namespace std;

class Sample {
public:
	int x;
	int y;

	//���������� �� ���������
	Sample() { x = y = 0; }
	//����������� � ����� ����������
	Sample(int i) { x = y = i; }
	//����������� � ����� �����������
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