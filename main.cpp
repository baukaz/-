#include "list_.h"

int main() {
	list_<int> n;

	n.push_front(15);
	n.push_front(14);
	n.push_front(16);
	n.insert(1, 25);
	cout << n;

	cout << endl;
	
	n.pop_back();
	cout << n;

	system("pause");
	return 0;
}