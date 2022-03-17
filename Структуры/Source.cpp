#include<iostream>
#include<string>

using namespace std;

struct test
{
	int x;
	int y;
}pointA = { 5 ,10 }, pointB = pointA;


void showCor(test &x)
{
	cout << &x << endl;
	cout<<"X = " << x.x << endl;
	cout << "Y = " << x.y << endl;
}


test inputObj()
{
	test newObj;
	cout << "Введите Х: ";
	cin >> newObj.x;
	cout << "Введите Y: ";
	cin >> newObj.y;
	return newObj;
}

void feelObj(test &C)
{
	cout << "Введите Х = ";
	cin >> C.x;
	cout << "Введите Y = ";
	cin >> C.y;
}

int main() {
	setlocale(LC_ALL, "Ru");
	
	test pointE;
	feelObj(pointE);
	cout << "X = " << pointE.x<<endl;
	cout << "Y = " << pointE.y<<endl;
	
	cout << &pointA << endl;
	showCor(pointA);
	showCor(pointB);
	test pointC = inputObj();
	cout << &pointC<<endl;
	showCor(pointC);
	//cout << inputObj().x;//Можно выделить Х
	// 	
	//struct date
	//{
	//	int day;
	//	int month;
	//	int year;
	//	//string note = "zdarova";
	//	
	//};//birthday, date1;
	//struct person
	//{
	//	string name;
	//	date birthday;
	//	
	//}Tom;
	//Tom.name = "Tom Smith";
	//Tom.birthday.day = 15;
	//Tom.birthday.month = 11;
	//Tom.birthday.year = 2000;
	//cout << Tom.name<<endl;
	//cout << Tom.birthday.day<<".";
	//cout << Tom.birthday.month << ".";
	//cout << Tom.birthday.year<<endl;

	//person Bob = { "Bob",15,6,2000 };
	//cout << Bob.name << endl;
	//cout << Bob.birthday.day << ".";
	//cout << Bob.birthday.month << ".";
	//cout << Bob.birthday.year << endl;

	//person* pBob = &Bob;
	//cout<<pBob->birthday.year<<endl;
	//pBob->name = "Bob Thomson";
	//cout << pBob->name;
	

	//birthday.day = 10;
	//birthday.month = 5;
	//birthday.year = 1970;
	//birthday.note = "Ivans birthday";
	//birthday.arr[5] = { 1,2,3,4,5 };
	//date1 = { 5,7,1950,"Hi world" };//Альтернативный вид заполнения переменных
	//cout << date1.note + " " + birthday.note<<endl;

	
	
	return 0;
}