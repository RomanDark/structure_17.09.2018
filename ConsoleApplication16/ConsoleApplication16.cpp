// ConsoleApplication16.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Структуры
struct student {
	string  name,group;
	int grades[3];
};
void otl(student* ss, int n)
{
	bool f;
	for (int i = 0; i < n; i++)
	{
		f = true;
		for (int j = 0; j < 3; j++)
		{
			if (ss[i].grades[j] < 90) {
				f = false;
				break;
			} 
		}
		if (f) cout << "otli4nik = " << ss[i].name << endl;
	}
}
void dvo(student*ss, int n) {
	
	double sr;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		
		for (int j = 0; j < 3; j++)
		{
			sum += ss[i].grades[j];
		}
		sr = sum / 3;
		if (sr < 50) {
			cout << "dvoewnik = " << ss[i].name << endl;
		}
		//if (f) cout << ss[i].name << endl;
	}
}

//4.
struct ozu {
	string firm;
	int mgh;
	int v;

	void print()
	{
		cout << firm << " " << mgh << " " << v << endl;
	}

	void enter()
	{
		cin >> firm >> mgh >> v;
	}

	void filter_mgh(int z) {
		
		if (mgh > z) cout << firm << " " << mgh << " " << v << endl;
	}

	void filter_volume(int z) {
		
		if (v > z) cout << firm << " " << mgh << " " << v << endl;
	}
};

//2
/*struct ticket {
	string name, time, date;
	int price;

} ;

void fill(ticket *t, int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> t[i].name >> t[i].time >> t[i].date >> t[i].price;
	}
}
void print(ticket*t, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << t[i].name << " " << t[i].time << " " << t[i].date << " " << t[i].price << endl;
	}
}
void out_date(ticket*t, int n) {
	string date;
	cin >> date;
	for (int i = 0; i < n; i++)
	{
		if (t[i].date == date) 	cout << t[i].name << " " << t[i].time << " " << t[i].date << " " << t[i].price << endl;
	}
}
void out_price(ticket*t, int n) {
	int price;
	cin >> price;
	for (int i = 0; i < n; i++)
	{
		if (t[i].price<= price) cout << t[i].name << " " << t[i].time << " " << t[i].date << " " << t[i].price << endl;
	}
}*/

//Внутренние функции структуры
//2.1
/*struct ticket
{
	string name;
	string time;
	string date;
	double price;
	void enter_ticket()
	{
		cin >> name >> time >>date >> price;
	}
	void print()
	{
		cout << name << " " << time << " " << date << " " << price << endl;
	}

	void print_by_date(string cmp_date)
	{
		if (cmp_date == date)
			print();
	}


	bool cmp_by_price(double cmp_price)
	{
		
			return (price < cmp_price);		
	}
};*/

int main()
{
	//4.

	ozu *a;

	int n;
	cin >> n;
	a = new ozu[n];
	for (int i = 0; i < n; i++)
	{
		a[i].enter();
	}
	int choice;
	int frequency, volume;

	bool f = true;
	while (true)
	{
		cout << "Enter 1 - to print by frequency" << endl;
		cout << "Enter 2 - to print by volume" << endl;
		cout << "Enter 3 - to print all" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cin >> frequency;
			for (int i = 0; i < n; i++)
			{
				a[i].filter_mgh(frequency);
			}
			break;
		case 2: cin >> volume;
			for (int i = 0; i < n; i++)
			{
				a[i].filter_volume(volume);
			}
			break;
		case 3:
			for (int i = 0; i < n; i++)
			{
				a[i].print();
			}
			break;
		default:
			f = false;
			break;
		}
		if (!f) break;
	}


	delete[] a;

	//2.1
	/*int n, choice;
	string c_date;
	double c_price;
	bool f = true;
	ticket* t;
	cin >> n;
	t = new ticket[n];
	for (int i = 0; i < n; i++)
	{
		t[i].enter_ticket();
	}
	while (true)
	{
		cout << "Enter 1 - to print date" << endl;
		cout << "Enter 2 - to print by price" << endl;
		cout << "Enter 3 - to print all" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cin >> c_date;
			for (int i = 0; i < n; i++)
			{
				t[i].print_by_date(c_date);
			}
			break;
		case 2: cin >> c_price;
			for (int i = 0; i < n; i++)
			{
				if (t[i].cmp_by_price(c_price) == true)
					t[i].print();
			}
			break;
		case 3:
			for (int i = 0; i < n; i++)
			{
				t[i].print();
			}
			break;
		default:
			f = false;
			break;
		}
		if (!f) break;
	}
	delete[] t;*/

	//2
	/*ticket *t;

	ticket x[4] = { {"a", "12:00", "17/09/2018", 1900},{ "b", "11:00", "17/09/2018", 500 }, { "c", "15:00", "17/09/2018", 200}, {"d", "20:00", "18/09/2018", 2000} };

	int n = 4;
	//cin >> n;

	//t = new ticket[n];

	t = x;
	
	int z=0;
	
	
	while (z < 4)
	{
		
		cout << "0.zapolnit'; \n1.Vyvesti za opredelennyu daty;\n2.pokazat' vse bilety ne vywe stoimosti\n3.raspe4atat' vse bilety\n4.exit\n";
		cin >> z;
		switch (z)
		{
		case 0: fill(t, n);
			break;
		case 1: out_date(t, n);
			break;
		case 2: out_price(t, n);
			break;
		case 3: print(t, n);
		}
		system("cls");
	}
	//delete[] t;*/

	/*student *ss;
	int n;
	cin >> n;

	ss = new student[n];

	for (int i = 0; i < n; i++)
	{
		cin >> ss[i].name >> ss[i].group;
		for (int j = 0; j < 3; j++)
		{
			cin >> ss[i].grades[j];
		}
	}
	otl(ss, n);
	dvo(ss, n);
	delete[] ss;*/

	/*student s1 = { "", "", 0, {0, 0} };

	s1.name = "Name";
	s1.fname = "fname";
	s1.age = 21;
	s1.grades[0] = 100;
	s1.grades[1] = 98;*/

	

    return 0;
}

