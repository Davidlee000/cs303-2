using namespace std;
#include "employee.h"
#include "linked_list.h"
#include <iostream>
#include<vector>
#include<string>

void linkedlist(LL l) {
	int c;
    int x;
	cout << "Test the functionality of single linked list";
	cout << "1. push_front";
	cout << "2. push_back";
	cout << "3. pop_front";
	cout << "4. pop_back";
	cout << "5. front";
	cout << "6. back";
	cout << "7. empty";
	cout << "8. insert at index";
	cout << "9. remove at index";
	cout << "10. find item";
	cin >> c;
	switch (c) {
        case 1:
            cout << "enter integer";
            cin >> x;
            l.push_front(x);
            break;
        case 2:
            std::cout << "You entered 2.\n";
            break;
        case 3:
            std::cout << "You entered 3.\n";
            break;
        case 4:
            std::cout << "You entered 4.\n";
            break;
        case 5:
            std::cout << "You entered 5.\n";
            break;
        case 6:
            std::cout << "You entered 6.\n";
            break;
        case 7:
            std::cout << "You entered 7.\n";
            break;
        case 8:
            std::cout << "You entered 8.\n";
            break;
        case 9:
            std::cout << "You entered 9.\n";
            break;
        case 10:
            std::cout << "You entered 10.\n";
            break;
        default:
            std::cout << "invalid input.\n";

        }
    cout << "printing linked list";
   
};
		
	void Employees(vector<Employee>&a){
		
	};