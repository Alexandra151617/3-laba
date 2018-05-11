// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <locale>;
#include "windows.h";
using namespace std;


void main(void)
{
	//etlocale(LC_ALL, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "1)Ім'я: Воробей Олександра Олександрівна\n";
	cout << "2) Дата народження: 1 листопада 1998 року\n";
	cout << "3) Місце народження: м.Вінниця\n";
	cout << "4) Місце навчання: Донецький Національний Університет\n";
	cout << "Закінчення школи: Вінницький технічний ліцей\n";
	cout << "рік закінчення : 2015\n";
	cout << "Ким хотіла стати у дитинстві: ветеренаром\n";
	cout << "Куди хотіла піти вчитись в 11 класі: Львівська Полетехніка \n";
	cout << "Спеціальність: економіка управління\n";