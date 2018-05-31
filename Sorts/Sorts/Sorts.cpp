// Sorts.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "Student.h"


int main()
{
	Student obj[5];
	Student *ptr_beg = obj;
	Student *ptr_end = ptr_beg + 5;
	int k, n;
	put_stud(obj);
	display(obj);
	cout << endl;
	cout << endl;
	do {
		cout << "1 - sorting by last name \n2 - sorting by faculty\n3 - sorting by profession \n4 - sort by year of birth \nSelect the criterion for the upward sorting:  " << endl;
		cin >> k;
		switch (k)
		{
		case 1:
			sort(ptr_beg, ptr_end, sort_fio);
			display(obj);
			cout << endl;
			break;
		case 2:
			sort(ptr_beg, ptr_end, sort_faculty);
			display(obj);
			cout << endl;
			break;
		case 3:
			sort(ptr_beg, ptr_end, sort_profession);
			display(obj);
			cout << endl;
			break;
		case 4:
			sort(ptr_beg, ptr_end, sort_year);
			display(obj);
			cout << endl;
			break;
		}

		cout << "0 - exit \n1 - sorting by last name \n2 - sorting by faculty\n3 - sorting by profession \n4 - sort by year of birth \nSelect the descending sort criteria:  " << endl;
		cin >> k;
		switch (k)
		{
		case 1:
			stable_sort(ptr_beg, ptr_end, sort_fio_low);
			display(obj);
			cout << endl;
			break;
		case 2:
			stable_sort(ptr_beg, ptr_end, sort_faculty_low);
			display(obj);
			cout << endl;
			break;
		case 3:
			stable_sort(ptr_beg, ptr_end, sort_profession_low);
			display(obj);
			cout << endl;
			break;
		case 4:
			stable_sort(ptr_beg, ptr_end, sort_year_low);
			display(obj);
			cout << endl;
			break;
		}

	} while (k != 0);


	system("pause");
	return 0;
}