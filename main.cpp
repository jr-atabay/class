#include<iostream>
#include<string>
using namespace std;

//��� ����� �����

class Human  //����� ������ ������ 
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
	olderbrother.name = "�������";
	olderbrother.surname = "��������";
	olderbrother.age = 26;
	olderbrother.weight = 68;
	olderbrother.height = 178;

	cout << "���: " << olderbrother.name << endl;
	cout << "�������: " << olderbrother.surname << endl;
	cout << "�������: " << olderbrother.age <<"���"<< endl;
	cout << "����: " << olderbrother.weight << "��" << endl;
	cout << "������: " << olderbrother.height << "��" << endl;

	cout << "///////////////////////////////" << endl;

	Human brother;
	brother.name = "������";
	brother.surname = "��������";
	brother.age = 22;
	brother.weight = 69;
	brother.height = 180;

	cout << "���: " << brother.name << endl;
	cout << "�������: " << brother.surname << endl;
	cout << "�������: " << brother.age << "����" << endl;
	cout << "����: " << brother.weight << "��" << endl;
	cout << "������: " << brother.height << "��" << endl;
}