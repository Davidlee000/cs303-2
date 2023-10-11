using namespace std;

//function to navitgate code
void menu() {
	char c;
	while (true) {
		cout << "Choice 1 Linked list";
		cout << "Choice 2 Employee";
		cout << "Input 1 or 2 or q to quit";

		cin >> c;
		switch (c) {
		case 1:
			linkedlist();
			break;
		case 2:
			Employees();
			break;
		case 'q':
			break;
		}
	}
}

void linkedlist() {
	cout << "";
}
void Employees() {

}