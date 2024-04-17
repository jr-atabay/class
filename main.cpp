#include<iostream>
#include<string>
using namespace std;

//что такое класс

class Human  //хуман объект класса 
{
public:     
	int age;
	int weight,height;
	string name, surname;
};

int main()
{
	setlocale(LC_ALL, "ru");
	Human olderbrother;
	olderbrother.name = "Атаджан";
	olderbrother.surname = "Атабегов";
	olderbrother.age = 26;
	olderbrother.weight = 68;
	olderbrother.height = 178;

	cout << "Имя: " << olderbrother.name << endl;
	cout << "Фамилия: " << olderbrother.surname << endl;
	cout << "Возраст: " << olderbrother.age <<"лет"<< endl;
	cout << "Весь: " << olderbrother.weight << "кг" << endl;
	cout << "Высота: " << olderbrother.height << "см" << endl;

	cout << "///////////////////////////////" << endl;

	Human brother;
	brother.name = "Атабай";
	brother.surname = "Атабегов";
	brother.age = 22;
	brother.weight = 69;
	brother.height = 180;

	cout << "Имя: " << brother.name << endl;
	cout << "Фамилия: " << brother.surname << endl;
	cout << "Возраст: " << brother.age << "года" << endl;
	cout << "Весь: " << brother.weight << "кг" << endl;
	cout << "Высота: " << brother.height << "см" << endl;
}