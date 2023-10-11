using namespace std;
#include "employee.h"
#include "linked_list.h"
#include <iostream>
#include<vector>
#include<string>

void linkedlist(LL l) {
    while (true) {
        int c;
        int x;
        size_t index;
        cout << "Test the functionality of single linked list\n";
        cout << "1. push_front\n";
        cout << "2. push_back\n";
        cout << "3. pop_front\n";
        cout << "4. pop_back\n";
        cout << "5. front\n";
        cout << "6. back\n";
        cout << "7. empty\n";
        cout << "8. insert at index\n";
        cout << "9. remove at index\n";
        cout << "10. find item\n";
        cin >> c;
        switch (c) {
        case 1:
            cout << "enter an integer\n";
            cin >> x;
            l.push_front(x);
            break;
        case 2:
            cout << "enter an integer\n";
            cin >> x;
            l.push_back(x);
            break;
        case 3:
            l.pop_front();
            break;
        case 4:
            l.pop_back();
            break;
        case 5:
            cout<<l.front()<<" is at the front of the list\n";
            break;
        case 6:
            cout << l.back() << " is at the back of the list\n";
            break;
        case 7:
            if (true) {
                cout << "list is empty";
            }
            else{
                cout << "list is not empty";
            }
            break;
        case 8:
            cout << "enter index";
            cin >> index;
            cout << "enter value";
            cin >> x;
            l.insert(index, x);
            break;
        case 9:
            cout << "enter index";
            cin >> index;
            l.remove(index);
            break;
        case 10:
            cout << "enter item to find";
            cin >> x;
            cout <<"your number is found at " << l.find(x);
            break;
        default:
            std::cout << "invalid input.\n";

        }
        cout << "printing linked list\n";
        l.display();
    };
};
		
int Employees(vector<professional> a,vector<nonprofessional> b) {
    int i,pay,vacation,hours;
    string name;

    cout << "Test Employee Class\n";
    while (true) {
        cout << "1. Add a professional Employee\n";
        cout << "2. Add a nonprofessional Employee\n";
        cout << "3. quit\n";
        cin >> i;
        switch (i) {
        case 1:
            cout << "Enter Employee Name";
            cin >> name;
            cout << "Enter Employee hourly pay";
            cin >> pay;
            cout << "Enter Employee vacation days";
            cin >> vacation;
            a.push_back( professional(name, pay, vacation));
            break;
        case 2:
            cout << "Enter Employee Name";
            cin >> name;
            cout << "Enter Employee hourly pay";
            cin >> pay;
            cout << "Enter Employee hours worked";
            cin >> hours;
            b.push_back(nonprofessional(name, pay, hours));
            break;
        case 3:
            return 0;
        }
        cout << "\n";
        cout << "Displaying Employee information\n";
        for (int i = 0; i < a.size(); i++) {
            cout << "Employee Name: "<<a.at(i).getname()<<"\n";
            cout << "Employee Weekly pay $"<<a.at(i).weekly_salary()<<"\n";
            cout << "Employee Weekly healthcare contributions $"<<a.at(i).healtcare_contributions()<<"\n";
            cout << "Emplyee vacation days: " << a.at(i).vacation_days()<<"\n";
            cout << "\n";
        }
        for (int i = 0; i < b.size(); i++) {
            cout << "Employee Name: " << b.at(i).getname() << "\n";
            cout << "Employee Weekly pay: $" << b.at(i).weekly_salary() << "\n";
            cout << "Employee Weekly healthcare contributions $" << b.at(i).healtcare_contributions() << "\n";
            cout << "Employee earned " << b.at(i).vacation_days() << "vacation days\n";
            cout << "\n";
        }
        
    }
};