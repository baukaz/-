#include <iostream>
#include <windows.h>
#include <locale>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
int main() {
	SetConsoleTextAttribute(handle, 15);
	setlocale(LC_ALL, "");
	cout << "Зачем вы хотите изучить программирование?" << endl;

	cout << "0-Поразвлечся" << endl;
	cout << "1-Интересно" << endl;
	cout << "2-Саморазвитие" << endl;
	cout << "3-Я не знаю, выберите за меня" << endl;
	cout << "4-Для детей" << endl;
	cout << "5-Заработать" << endl;

	int choice;
	cin >> choice;
	if (choice == 3) {
		SetConsoleTextAttribute(handle, 3);
		cout << "PYTHON" << endl;
		SetConsoleTextAttribute(handle, 15);
	}
	if (choice == 4) {
		cout << "Начните со Scratch,затем..." << endl;
		SetConsoleTextAttribute(handle, 3);
		cout << "PYTHON" << endl;
		SetConsoleTextAttribute(handle, 15);
	}
	//else if (choice == 0 || choice == 1 || choice == 2) {
	//	cout << "Уже есть идея на миллион?" << endl;
	//}
	if (choice == 0 || choice == 1 || choice == 2) {
		cout << "Уже есть идея на миллион?" << endl;
		cout << "1-Нет.Просто хочу начать" << endl;
		cout << "2-Да" << endl;
		cin >> choice;
	}
	if (choice == 1) {
		cout << "Мне нарвится учится" << endl;
		cout << "0-Простым способом" << endl;
		cout << "1-Лучшим способом" << endl;
		cout << "2-Труденьким способом" << endl;
		cout << "3-Очень сложный путь(но потом будет легче)" << endl;
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
			cout << "Какая коробка передач?" << endl;
			cout << "0-Автомат" << endl;
			cout << "1-Ручная" << endl;
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
		cout << "Какая платформа/сфера?" << endl;
		cout << "0-3D/игры" << endl;
		cout << "1-Мобильная" << endl;
		cout << "2-Корп.софт" << endl;
		cout << "3-Веб" << endl;
		cin >> choice;

		if (choice == 0) {
			SetConsoleTextAttribute(handle, 3);
			cout << "C++" << endl;
			SetConsoleTextAttribute(handle, 15);
		}
		if (choice == 1) {
			cout << "Какая OS?" << endl;
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
			cout << "Что скажете о Microsoft?" << endl;
			cout << "0-Люблю его:)" << endl;
			cout << "1-Неплохо:|" << endl;
			cout << "2-Фууу:(" << endl;
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
			cout << "Ваш сервис будет работать в реальном времени, как twitter?" << endl;
			cout << "0-Да" << endl;
			cout << "1-Нет" << endl;
			cin >> choice;
			if (choice == 0) {
				SetConsoleTextAttribute(handle, 6);
				cout << "JAVASCRIPT" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 1) {
				cout << "Хотите попрробовать что-то новое, но не очень трудоемкое?" << endl;
				cout << "0-Да" << endl;
				cout << "1-Не знаю" << endl;
				cout << "2-Нет" << endl;
				cin >> choice;
				if (choice == 0) {
					SetConsoleTextAttribute(handle, 6);
					cout << "JAVASCRIPT" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
				if (choice == 1 || choice == 2) {
					cout << "Какая у вас любимая игрушка?" << endl;
					cout << "0-Lego" << endl;
					cout << "1-Пластилин" << endl;
					cout << "2-Старенький, но любимый мишка" << endl;
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
		cout << "1-Найти работу" << endl;
		cout << "2-У меня есть идея для стартапа!" << endl;
		cin >> choice;
		if (choice == 2) {
			if (choice == 2) {
				cout << "Какая платформа/сфера?" << endl;
				cout << "0-3D/игры" << endl;
				cout << "1-Мобильная" << endl;
				cout << "2-Корп.софт" << endl;
				cout << "3-Веб" << endl;
				cin >> choice;

				if (choice == 0) {
					SetConsoleTextAttribute(handle, 3);
					cout << "C++" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
				if (choice == 1) {
					cout << "Какая OS?" << endl;
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
					cout << "Что скажете о Microsoft?" << endl;
					cout << "0-Люблю его:)" << endl;
					cout << "1-Неплохо:|" << endl;
					cout << "2-Фууу:(" << endl;
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
					cout << "Ваш сервис будет работать в реальном времени, как twitter?" << endl;
					cout << "0-Да" << endl;
					cout << "1-Нет" << endl;
					cin >> choice;
					if (choice == 0) {
						SetConsoleTextAttribute(handle, 6);
						cout << "JAVASCRIPT" << endl;
						SetConsoleTextAttribute(handle, 15);
					}
					if (choice == 1) {
						cout << "Хотите попрробовать что-то новое, но не очень трудоемкое?" << endl;
						cout << "0-Да" << endl;
						cout << "1-Не знаю" << endl;
						cout << "2-Нет" << endl;
						cin >> choice;
						if (choice == 0) {
							SetConsoleTextAttribute(handle, 6);
							cout << "JAVASCRIPT" << endl;
							SetConsoleTextAttribute(handle, 15);
						}
						if (choice == 1 || choice == 2) {
							cout << "Какая у вас любимая игрушка?" << endl;
							cout << "0-Lego" << endl;
							cout << "1-Пластилин" << endl;
							cout << "2-Старенький, но любимый мишка" << endl;
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
			cout << "Какая платформа/сфера?" << endl;
			cout << "0-3D/игры" << endl;
			cout << "1-Мобилная" << endl;
			cout << "2-Корп.софт" << endl;
			cout << "3-Веб" << endl;
			cout << "4-Я просто хочу $$$" << endl;
			cout << "5-Я хочу работать в крупной IT-компании" << endl;
			cin >> choice;
			if (choice == 0) {
				SetConsoleTextAttribute(handle, 3);
				cout << "C++" << endl;
				SetConsoleTextAttribute(handle, 15);
			}
			if (choice == 1) {
				cout << "Какая OS?" << endl;
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
				cout << "Что скажете о Microsoft?" << endl;
				cout << "0-Люблю его:)" << endl;
				cout << "1-Неплохо:|" << endl;
				cout << "2-Фууу:(" << endl;
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
				cout << "0-Фронтенд(веб-интерфейс)" << endl;
				cout << "1-Бэкенд(то, что за вебсайтом)" << endl;
				cin >> choice;
				if (choice == 0) {
					SetConsoleTextAttribute(handle, 6);
					cout << "JAVASCRIPT" << endl;
					SetConsoleTextAttribute(handle, 15);
				}
				if (choice == 1) {
					cout << "Хочу работать на..." << endl;
					cout << "0-Корпорацию" << endl;
					cout << "1-Стартап" << endl;
					cin >> choice;
					if (choice == 0) {
						cout << "Что скажете о Microsoft?" << endl;
						cout << "0-Люблю его:)" << endl;
						cout << "1-Неплохо:|" << endl;
						cout << "2-Фууу:(" << endl;
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
						cout << "Хотите попрробовать что-то новое, но не очень трудоемкое?" << endl;
						cout << "0-Да" << endl;
						cout << "1-Не знаю" << endl;
						cout << "2-Нет" << endl;
						cin >> choice;
						if (choice == 0) {
							SetConsoleTextAttribute(handle, 6);
							cout << "JAVASCRIPT" << endl;
							SetConsoleTextAttribute(handle, 15);
						}
						if (choice == 1 || choice == 2) {
							cout << "Какая у вас любимая игрушка?" << endl;
							cout << "0-Lego" << endl;
							cout << "1-Пластилин" << endl;
							cout << "2-Старенький, но любимый мишка" << endl;
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