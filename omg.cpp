#include <iostream>
#include <windows.h>
#include <locale>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
int main() {
	SetConsoleTextAttribute(handle, 15);
	setlocale(LC_ALL, "");
	cout << "����� �� ������ ������� ����������������?" << endl;

	cout << "0-�����������" << endl;
	cout << "1-���������" << endl;
	cout << "2-������������" << endl;
	cout << "3-� �� ����, �������� �� ����" << endl;
	cout << "4-��� �����" << endl;
	cout << "5-����������" << endl;

	int choice;
	cin >> choice;
	if (choice == 3) {
		SetConsoleTextAttribute(handle, 3);
		cout << "PYTHON" << endl;
		SetConsoleTextAttribute(handle, 15);
	}
	if (choice == 4) {
		cout << "������� �� Scratch,�����..." << endl;
		SetConsoleTextAttribute(handle, 3);
		cout << "PYTHON" << endl;
		SetConsoleTextAttribute(handle, 15);
	}
	//else if (choice == 0 || choice == 1 || choice == 2) {
	//	cout << "��� ���� ���� �� �������?" << endl;
	//}
	if (choice == 0 || choice == 1 || choice == 2) {
		cout << "��� ���� ���� �� �������?" << endl;
		cout << "1-���.������ ���� ������" << endl;
		cout << "2-��" << endl;
		cin >> choice;
	}
	if (choice == 1) {
		cout << "��� �������� ������" << endl;
		cout << "0-������� ��������" << endl;
		cout << "1-������ ��������" << endl;
		cout << "2-���������� ��������" << endl;
		cout << "3-����� ������� ����(�� ����� ����� �����)" << endl;
		cin >> choice;

		if (choice == 0) {
			SetConsoleTextAttribute(handle, 3);
			cout << "PYTHON" << endl;
			SetConsoleTextAttribute(handle, 15);
		}
		if (choice == 1) {
			SetConsoleTextAttribute(handle, 3);
			cout << "PYTHON" << endl;
			SetConsoleTextAttribute(handle, 15);
		}
		if (choice == 3) {
			SetConsoleTextAttribute(handle, 3);
			cout << "C++" << endl;
			SetConsoleTextAttribute(handle, 15);
		}
		if (choice == 2) {
			cout << "����� ������� �������?" << endl;
			cout << "0-�������" << endl;
			cout << "1-������" << endl;
			cin >> choice;
			if (choice == 0) {
				SetConsoleTextAttribute(handle, 12);
				cout << "JAVA" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 1) {
				SetConsoleTextAttribute(handle, 1);
				cout << "C" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
		}
	}
	else if (choice == 2) {
		cout << "����� ���������/�����?" << endl;
		cout << "0-3D/����" << endl;
		cout << "1-���������" << endl;
		cout << "2-����.����" << endl;
		cout << "3-���" << endl;
		cin >> choice;

		if (choice == 0) {
			SetConsoleTextAttribute(handle, 3);
			cout << "C++" << endl;
			SetConsoleTextAttribute(handle, 15);
		}
		if (choice == 1) {
			cout << "����� OS?" << endl;
			cout << "0-IOS" << endl;
			cout << "1-Android" << endl;
			cin >> choice;
			if (choice == 0) {
				SetConsoleTextAttribute(handle, 5);
				cout << "OBJECTIVE-C" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 1) {
				SetConsoleTextAttribute(handle, 12);
				cout << "JAVA" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
		}
		if (choice == 2) {
			cout << "��� ������� � Microsoft?" << endl;
			cout << "0-����� ���:)" << endl;
			cout << "1-�������:|" << endl;
			cout << "2-����:(" << endl;
			cin >> choice;
			if (choice == 0) {
				SetConsoleTextAttribute(handle, 2);
				cout << "C#" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 1) {
				SetConsoleTextAttribute(handle, 12);
				cout << "JAVA" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 2) {
				SetConsoleTextAttribute(handle, 12);
				cout << "JAVA" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
		}
		if (choice == 3) {
			cout << "��� ������ ����� �������� � �������� �������, ��� twitter?" << endl;
			cout << "0-��" << endl;
			cout << "1-���" << endl;
			cin >> choice;
			if (choice == 0) {
				SetConsoleTextAttribute(handle, 6);
				cout << "JAVASCRIPT" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 1) {
				cout << "������ ������������ ���-�� �����, �� �� ����� ����������?" << endl;
				cout << "0-��" << endl;
				cout << "1-�� ����" << endl;
				cout << "2-���" << endl;
				cin >> choice;
				if (choice == 0) {
					SetConsoleTextAttribute(handle, 6);
					cout << "JAVASCRIPT" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
				if (choice == 1 || choice == 2) {
					cout << "����� � ��� ������� �������?" << endl;
					cout << "0-Lego" << endl;
					cout << "1-���������" << endl;
					cout << "2-����������, �� ������� �����" << endl;
					cin >> choice;
					if (choice == 0) {
						SetConsoleTextAttribute(handle, 3);
						cout << "PYTHON" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
					if (choice == 1) {
						SetConsoleTextAttribute(handle, 12);
						cout << "RUBY" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
					if (choice == 2) {
						SetConsoleTextAttribute(handle, 1);
						cout << "PHP" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
				}
			}
		}
	}
	if (choice == 5) {
		cout << "1-����� ������" << endl;
		cout << "2-� ���� ���� ���� ��� ��������!" << endl;
		cin >> choice;
		if (choice == 2) {
			if (choice == 2) {
				cout << "����� ���������/�����?" << endl;
				cout << "0-3D/����" << endl;
				cout << "1-���������" << endl;
				cout << "2-����.����" << endl;
				cout << "3-���" << endl;
				cin >> choice;

				if (choice == 0) {
					SetConsoleTextAttribute(handle, 3);
					cout << "C++" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
				if (choice == 1) {
					cout << "����� OS?" << endl;
					cout << "0-IOS" << endl;
					cout << "1-Android" << endl;
					cin >> choice;
					if (choice == 0) {
						SetConsoleTextAttribute(handle, 5);
						cout << "OBJECTIVE-C" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
					if (choice == 1) {
						SetConsoleTextAttribute(handle, 12);
						cout << "JAVA" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
				}
				if (choice == 2) {
					cout << "��� ������� � Microsoft?" << endl;
					cout << "0-����� ���:)" << endl;
					cout << "1-�������:|" << endl;
					cout << "2-����:(" << endl;
					cin >> choice;
					if (choice == 0) {
						SetConsoleTextAttribute(handle, 2);
						cout << "C#" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
					if (choice == 1) {
						SetConsoleTextAttribute(handle, 12);
						cout << "JAVA" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
					if (choice == 2) {
						SetConsoleTextAttribute(handle, 12);
						cout << "JAVA" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
				}
				if (choice == 3) {
					cout << "��� ������ ����� �������� � �������� �������, ��� twitter?" << endl;
					cout << "0-��" << endl;
					cout << "1-���" << endl;
					cin >> choice;
					if (choice == 0) {
						SetConsoleTextAttribute(handle, 6);
						cout << "JAVASCRIPT" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
					if (choice == 1) {
						cout << "������ ������������ ���-�� �����, �� �� ����� ����������?" << endl;
						cout << "0-��" << endl;
						cout << "1-�� ����" << endl;
						cout << "2-���" << endl;
						cin >> choice;
						if (choice == 0) {
							SetConsoleTextAttribute(handle, 6);
							cout << "JAVASCRIPT" << endl;
							SetConsoleTextAttribute(handle, 15);
						}
						if (choice == 1 || choice == 2) {
							cout << "����� � ��� ������� �������?" << endl;
							cout << "0-Lego" << endl;
							cout << "1-���������" << endl;
							cout << "2-����������, �� ������� �����" << endl;
							cin >> choice;
							if (choice == 0) {
								SetConsoleTextAttribute(handle, 3);
								cout << "PYTHON" << endl;
								SetConsoleTextAttribute(handle, 15);
							}
							if (choice == 1) {
								SetConsoleTextAttribute(handle, 12);
								cout << "RUBY" << endl;
								SetConsoleTextAttribute(handle, 15);
							}
							if (choice == 2) {
								SetConsoleTextAttribute(handle, 1);
								cout << "PHP" << endl;
								SetConsoleTextAttribute(handle, 15);
							}
						}
					}
				}
			}
		}
		if (choice == 1) {
			cout << "����� ���������/�����?" << endl;
			cout << "0-3D/����" << endl;
			cout << "1-��������" << endl;
			cout << "2-����.����" << endl;
			cout << "3-���" << endl;
			cout << "4-� ������ ���� $$$" << endl;
			cout << "5-� ���� �������� � ������� IT-��������" << endl;
			cin >> choice;
			if (choice == 0) {
				SetConsoleTextAttribute(handle, 3);
				cout << "C++" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 1) {
				cout << "����� OS?" << endl;
				cout << "0-IOS" << endl;
				cout << "1-Android" << endl;
				cin >> choice;
				if (choice == 0) {
					SetConsoleTextAttribute(handle, 5);
					cout << "OBJECTIVE-C" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
				if (choice == 1) {
					SetConsoleTextAttribute(handle, 12);
					cout << "JAVA" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
			}
			if (choice == 2) {
				cout << "��� ������� � Microsoft?" << endl;
				cout << "0-����� ���:)" << endl;
				cout << "1-�������:|" << endl;
				cout << "2-����:(" << endl;
				cin >> choice;
				if (choice == 0) {
					SetConsoleTextAttribute(handle, 2);
					cout << "C#" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
				if (choice == 1) {
					SetConsoleTextAttribute(handle, 12);
					cout << "JAVA" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
				if (choice == 2) {
					SetConsoleTextAttribute(handle, 12);
					cout << "JAVA" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
			}
			if (choice == 3) {
				cout << "0-��������(���-���������)" << endl;
				cout << "1-������(��, ��� �� ���������)" << endl;
				cin >> choice;
				if (choice == 0) {
					SetConsoleTextAttribute(handle, 6);
					cout << "JAVASCRIPT" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
				if (choice == 1) {
					cout << "���� �������� ��..." << endl;
					cout << "0-����������" << endl;
					cout << "1-�������" << endl;
					cin >> choice;
					if (choice == 0) {
						cout << "��� ������� � Microsoft?" << endl;
						cout << "0-����� ���:)" << endl;
						cout << "1-�������:|" << endl;
						cout << "2-����:(" << endl;
						cin >> choice;
						if (choice == 0) {
							SetConsoleTextAttribute(handle, 2);
							cout << "C#" << endl;
							SetConsoleTextAttribute(handle, 15);
						}
						if (choice == 1) {
							SetConsoleTextAttribute(handle, 12);
							cout << "JAVA" << endl;
							SetConsoleTextAttribute(handle, 15);
						}
						if (choice == 2) {
							SetConsoleTextAttribute(handle, 12);
							cout << "JAVA" << endl;
							SetConsoleTextAttribute(handle, 15);
						}
					}
					if (choice == 1) {
						cout << "������ ������������ ���-�� �����, �� �� ����� ����������?" << endl;
						cout << "0-��" << endl;
						cout << "1-�� ����" << endl;
						cout << "2-���" << endl;
						cin >> choice;
						if (choice == 0) {
							SetConsoleTextAttribute(handle, 6);
							cout << "JAVASCRIPT" << endl;
							SetConsoleTextAttribute(handle, 15);
						}
						if (choice == 1 || choice == 2) {
							cout << "����� � ��� ������� �������?" << endl;
							cout << "0-Lego" << endl;
							cout << "1-���������" << endl;
							cout << "2-����������, �� ������� �����" << endl;
							cin >> choice;
							if (choice == 0) {
								SetConsoleTextAttribute(handle, 3);
								cout << "PYTHON" << endl;
								SetConsoleTextAttribute(handle, 15);
							}
							if (choice == 1) {
								SetConsoleTextAttribute(handle, 12);
								cout << "RUBY" << endl;
								SetConsoleTextAttribute(handle, 15);
							}
							if (choice == 2) {
								SetConsoleTextAttribute(handle, 1);
								cout << "PHP" << endl;
								SetConsoleTextAttribute(handle, 15);
							}
						}
					}
				}
			}
		}
		if (choice == 4) {
			SetConsoleTextAttribute(handle, 12);
			cout << "JAVA" << endl;
			SetConsoleTextAttribute(handle, 15);
		}
		if (choice == 5) {
			cout << "0-facebook" << endl;
			cout << "1-windows" << endl;
			cout << "2-google" << endl;
			cout << "3-apple" << endl;
			cin >> choice;
			if (choice == 0) {
				SetConsoleTextAttribute(handle, 3);
				cout << "PYTHON" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 1) {
				SetConsoleTextAttribute(handle, 2);
				cout << "C#" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 2) {
				SetConsoleTextAttribute(handle, 3);
				cout << "PYTHON" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 3) {
				SetConsoleTextAttribute(handle, 5);
				cout << "OBJECTIVE-C" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
		}
	}



	system("pause");
	return 0;
}