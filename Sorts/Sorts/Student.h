#pragma once
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;
class Student {
	string fio;
	string profession;
	string faculty;
	int year;
public:
	friend void put_stud(Student *obj)
	{
		ifstream fin("students.txt");
		if (!fin)
		{
			cout << "File can not open!" << endl;
			exit(1);
		}
		for (int i = 0; i < 5; i++)
		{

			getline(fin, obj[i].fio, '\t');
			getline(fin, obj[i].faculty, '\t');
			getline(fin, obj[i].profession, '\t');
			fin >> obj[i].year;
			fin.ignore();
		}

	}
	friend void display(Student *obj)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << obj[i].fio << "\t";
			cout << obj[i].faculty << "\t";
			cout << obj[i].profession << "\t";
			cout << obj[i].year << endl;
		}

	}

	friend bool sort_fio(Student obj1, Student obj2)
	{
		return obj1.fio < obj2.fio;
	}

	friend bool sort_profession(Student obj1, Student obj2)
	{
		return obj1.profession < obj2.profession;
	}
	friend bool sort_faculty(Student obj1, Student obj2)
	{
		return obj1.faculty < obj2.faculty;
	}
	friend bool sort_year(Student obj1, Student obj2)
	{
		return obj1.year < obj2.year;
	}


	friend bool sort_fio_low(Student obj1, Student obj2)
	{
		return obj1.fio > obj2.fio;
	}

	friend bool sort_profession_low(Student obj1, Student obj2)
	{
		return obj1.profession > obj2.profession;
	}
	friend bool sort_faculty_low(Student obj1, Student obj2)
	{
		return obj1.faculty > obj2.faculty;
	}
	friend bool sort_year_low(Student obj1, Student obj2)
	{
		return obj1.year > obj2.year;
	}

};
