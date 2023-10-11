#include "employee.h"
#include "linked_list.h"
#include "functions.h"
#include <iostream>
#include<vector>
#include<string>
using namespace std;



int main(){
	LL list;
	vector<Employee> v;

	void menu(); {
		int c;
		while (true) {
			cout << "Choice 1 Linked list \n";
			cout << "Choice 2 Employee \n";
			cout << "Input 1 or 2 or q to quit\n";
			cin >> c;
		switch (c) {
				case 1:
					linkedlist(list);
				break;
				case 2:
					Employees(v);
				break;
				case 'q':
				break;
			}
		}
	};
	
	
};


