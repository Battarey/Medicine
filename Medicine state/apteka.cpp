#include<iostream>
#include<windows.h>
using namespace std;

void list(); // ������ ������
void description(); // �������� ������� 
void products(); //������ 
void buy(); // �������, ��� �������� 
void purchase_first(); // ������� 
void purchase_two(); // �������� 
void purchase_three(); // ����� 
void purchase_four(); // �� 2 
void purchase_five(); // ���������� 
void purchase_six(); // ������� 
void purchase_seven(); // ������ 
void operating_mode(); // ����� ������/����� 
void services_choise(); //����� ����� !!!
void analyzes(); // �������
void adult_department(); // �������� ��������� 
int injections(); // �������� 
void massage(); // ������ 
int consultation_references(); // ������������ �������/���������� ������ 
void error(); // ��� ������������ ����� 
void exit(); // ����� 

int choise_nule, choise_desc_1, choise_products, choise_list, quantity, price_common, confirmation = 0, choise_operating, aclmsg_ch, aclmsg_ch_2, aclmsg_ch_3, common_ch, common_ch_1, choise_analyzises, choise_analyzises_2, ch_diagnost_1, adult_department_1, adult_department_2, ch_day;
int choise_intections_2, choise_intections_3;
int price_1 = 300, price_2 = 1000, price_3 = 650, price_4 = 2000, price_5 = 30, price_6 = 350, price_7 = 500;
string name, surname;
char choise_intections, choise_massage, choise_desc, description_0, serv_choise, ch_diagnost, adult_department_0, ch_main;

int main()
{
	setlocale(LC_ALL, ".1251");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	do
	{
		cout << "\n" << "\t\t\t\t" << "������ ����! �� ���������� � ���������� ����������� ����������� ��� ��������� �����MED. � ��� ���� ��������� ����� �����, ������� � �.�., ������� � ���� �����������..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t" << "1 - ������, ������� ����������� ������� ������ ���������." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "      2 - ������� �������, ������� ��������� ����. (��� ��������)" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t" << "  3 - �������� �������, ������� ��������� ����." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "      4 - ������ �����������, ���������� � ����� �����������." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << " 5 - ����� ������/��� �����." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t" << " ��� ���� ����� ����� �� ��������� ������� 0." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t" << "������� ����� �������, ������� ��� ����������: "; cin >> ch_main;
		switch (ch_main)
		{
		case '1':
		{
			services_choise();
			break;
		}

		case '2':
		{
			buy();
			break;
		}

		case '3':
		{
			description();
			break;
		}

		case '4':
		{
			list();
			break;
		}

		case '5':
		{
			operating_mode();
			break;
		}

		case '0':
		{
			exit();
			break;
		}


		default:
		{
			error();
			break;
		}

		}

	} while (false);
	return 0;
}

void services_choise()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "��� ����� ���� ������? ������, �������� ����� ������ ��� �����: " << endl;
	cout << "\t\t\t\t\t\t" << "1 - �������� ���������; 2 - ����� ��������; 3 - ��������; 4 - ������; 5 - ������������ �������/���������� ������; 0 - ������� ����: ";cin >> serv_choise;
	switch (serv_choise)
	{
	case '1':
	{
		adult_department();
		break;
	}

	case '2':
	{
		analyzes();
		break;
	}

	case '3':
	{
		injections();
		break;
	}

	case '4':
	{
		massage();
		break;
	}

	case '5':
	{
		consultation_references();
		break;
	}

	case '0':
	{
		main();
		break;
	}

	default:
	{
		error();
		break;
	}
	}
}

void adult_department()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "� ����� �������� ��������� ���� ��������� ������, �������� ������ ������ ����� ��� �����: " << endl;
	cout << "\t\t\t\t\t\t" << "1 - ������, 2 - ��������, 3 - ���������, 4 - �����������-�������, 5 - ��������, 6 - �����������, 7 - ������, 0 - ����� � ������� ����: ";cin >> adult_department_0;
	switch (adult_department_0)
	{
	case '1':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ������ ���������� ��������� ������: " << endl;
		cout << "\t\t\t\t\t" << "1 - �������� �������� ������ ������, 2 - �������� �������� ���������, 3 - ��������� �����������������, 4 - ��������� ������� � ��������� �����������, 0 - ������� ����: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� �������� �������� ������ ������, ���� ���� � ������� �� 13:00, ��������� - 1500 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ��� � ������� � 13:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/����������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� �������� �������� ���������, ���� ���� � ����� �� 18:00, ��������� - 1250 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ��� � ����� � 18:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/����������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 3)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� ��������� �����������������, ���� ���� � ����������� �� 16:00, ��������� - 200 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ��� � ����������� � 16:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/����������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 4)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� ��������� ������� � ��������� �����������, ���� ���� �� ������ � 11:00, ��������� - 350 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ��� � ������� � 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/����������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "������� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}

		break;
	}

	case '2':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� �������� ���������� ��������� ������: " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "1 - ������ � ����������� ������������, 2 - ������ � ����������� ������������, 0 - ������� ����: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t" << "������, �� ������� �����e � ����������� ������������. � ��� ������ ������ - ��� ����� ����, ������� ����� 5000 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t" << "�������! ����� �������� ���� ���� ������� ������, �� ����� �������:" << endl;
				cout << "\t\t\t\t\t\t\t" << "1 - ����������� � 13:00; 2 - ����� � 14:00; 3 - ������� � 17:00; 4 - ����������� � 11:00; 0 - ��� ������ �� ��������: ";cin >> ch_day;
				if (ch_day == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������! ��� ��� � ����������� � 13:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (ch_day == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������! ��� ��� � ����� � 14:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (ch_day == 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������! ��� ��� � ������� � 17:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (ch_day == 4)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������! ��� ��� � ����������� � 11:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� ������� / �������� ������ ? 1 - ��, 2 - ��� : ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (ch_day == 0)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}

		else if (adult_department_1 == 2)
		{
			cout << "\t\t\t\t\t" << "������, �� ������� �����e � ����������� ������������. � ��� ������ ������ - ��� ����� ����, ������� ����� 10000 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t" << "�������! ����� �������� ���� ���� ������� ������, �� ����� �������:" << endl;
				cout << "\t\t\t\t\t\t\t" << "1 - ����������� � 15:00; 2 - ����� � 16:00; 3 - ������� � 19:00; 4 - ����������� � 13:00; 0 - ��� ������ �� ��������: ";cin >> ch_day;
				if (ch_day == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������! ��� ��� � ����������� � 15:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (ch_day == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������! ��� ��� � ����� � 16:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (ch_day == 3)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������! ��� ��� � ������� � 19:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (ch_day == 4)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������! ��� ��� � ����������� � 13:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (ch_day == 0)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}

		else if (adult_department_1 == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "������� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}

		else
		{
			error();
		}

		break;
	}

	case '3':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ��������� ���������� ��������� ������: " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "1 - ���� � �����-���������� ���������, 2 - ���� � �����-���������� ���������, 0 - ������� ����: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t" << "������, �� ������� ���� � �����-���������� ���������, ���� ���� � ����� �� 14:00, ��������� - 1300 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ����� � 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}

		else if (adult_department_1 == 2)
		{
			cout << "\t\t\t\t\t\t" << "������, �� ������� ���� � �����-���������� ���������, ���� ���� � ������� �� 14:00, ��������� - 1100 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ������� � 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}

		else if (adult_department_1 == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "������� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}

		else
		{
			error();
		}

		break;
	}

	case '4':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ��������� ���������� ��������� ������: " << endl;
		cout << "\t\t" << "1 - ��������� ������������� ���������, 2 - �������� � ������������ �������, 3 - �������� �����������������, 4 - ������ �������� �������, 5 - ���������� ������� ������� ��������, 0 - ������� ����: "; cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t" << "������, �� ������� ��������� ������������� ���������, ���� ���� � ����������� �� 14:00, ��������� - 800 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ����������� � 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� �������� � ������������ �������, ���� ���� � ������� �� 17:00, ��������� - 3000 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ������� � 17:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 3)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� �������� �����������������, ���� ���� � ������� �� 11:00, ��������� - 12000 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ������� � 11:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 4)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� ������ �������� �������, ���� ���� � ������� �� 13:00, ��������� - 500 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ������� � 13:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 5)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� ������ ���������� ������� ������� ��������, ���� ���� � ����������� �� 10:00, ��������� - 700 ������, �� ��������? 1 - ��, 2 - ���: "; cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ����������� � 10:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "������� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}

		break;
	}

	case '5':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ��������� ���������� ��������� ������: " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "1 - ���� �����-��������� ���������, 2 - ���� �����-��������� ���������, 0 - ������� ����: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t" << "������, �� ������� ���� �����-��������� ���������, ���� ���� ������ �� 11:00, ��������� - 950 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� ������ � 11:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 2)
		{
			cout << "\t\t\t\t\t\t" << "������, �� ������� ���� �����-��������� ���������, ���� ���� ������ �� 12:00, ��������� - 1150 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� ������ � 12:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "������� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}

		break;
	}

	case '6':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ����������� ���������� ��������� ������: " << endl;
		cout << "\t\t\t\t\t\t" << "1 - ������ ��������� �������� ������, 2 - �������� ������, 3 - ������ ���� � ���� ���, 4 - �������� ���������� ���� �� �����, 0 - ������� ����: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t" << "������, �� ������� ������ ��������� �������� ������, ���� ���� ������ �� 12:00, ��������� - 350 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� ������ � 12:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� �������� ������, ���� ���� ������� �� 13:00, ��������� - 400 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ������� � 13:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 3)
		{
			cout << "\t\t\t\t\t\t\t" << "������, �� ������� ������ ���� � ���� ���, ���� ���� ����� �� 18:00, ��������� - 450 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ����� � 18:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 4)
		{
			cout << "\t\t\t\t\t\t" << "������, �� ������� �������� ���������� ���� �� �����, ���� ���� ������ �� 10:00, ��������� - 500 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� ������ � 10:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "������� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}

		break;
	}

	case '7':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ��� ������ ���������� ��������� ������: " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "1 - �������������, 2 - ���� �����-������� ���������, 3 - ���� �����-������� ���������, 0 - ������� ����: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t\t\t" << "������, �� ������� �������������, ���� ���� ������ �� 12:00, ��������� - 350 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� ������ � 12:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 2)
		{
			cout << "\t\t\t\t\t\t" << "������, �� ������� ���� �����-������� ���������, ���� ���� � ����������� �� 14:00, ��������� - 1300 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ����������� � 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 3)
		{
			cout << "\t\t\t\t\t\t" << "������, �� ������� ���� �����-������� ���������, ���� ���� � ����� �� 09:00, ��������� - 1100 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��� ��� � ����� � 09:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, �������������� ��� � ������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (adult_department_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (adult_department_1 == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "������� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '0':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "������� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}

	default:
	{
		error();
		break;
	}
	}
}

void analyzes() 
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "�� ������� ����� �������?" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t    " << "1 - ��, 2 - ���: ";cin >> choise_analyzises;
	if (choise_analyzises == 1)
	{
		cout << "\t\t\t\t\t" << "������, ��������� � ����� ���� � 7:00 �� 13:00, ���� �������. ����������� �������� � ����� ������ � ����� ���� ������." << endl;
		cout << "\t\t\t\t\t  " << "���� �������� 1500 ������. ����� ������������ - ��������� � ����, ����� ������� ����� ����������� ������" << endl;
		cout << "\t\t\t\t\t\t  " << "������� ��������� � ������� ���� - ������� 1, ��������� ��������� - ������� 0: ";cin >> choise_analyzises_2;
		if (choise_analyzises_2 == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main(); 
		}
		else if (choise_analyzises_2 == 0)
		{
			exit();
		}
		else
		{
			error();
		}
	}
	else if (choise_analyzises == 2)
	{
		cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "����� ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else
	{
		error();
	}
}

int injections()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "� ��� ���� 2 ��������, ������� �� ����� ��� ������, ������� �����, ������� ��� �����. " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t  " << "1 - ��������-13; 2 - �������� ������; 0 - ����� � ����: ";cin >> choise_intections;
	switch (choise_intections)
	{
	case '1':
	{
		cout << "\n" << "\t\t\t\t\t\t\t\t" << "����������� � ����������� ��� ����������:" << endl;
		cout << "\t\t\t\t\t\t\t" << "- � ��� ����� ����������� ����� �������� �������������� ��������;" << endl;
		cout << "\t\t\t\t\t\t\t" << "- ����������������� �����������, � �.�. ���-���������, ��������������� �������������, ���������� ������������������ �������; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- � �������������/�������������� ���������; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- � ������������� ���������� ��������� ��� ������������� �� ��� ��������; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- ��������� � ����������� �������������� ��������; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- ������������ �����; �����, ����������� � �������������� �����������(������� ����, ���������, ��������� ����������); " << endl;
		cout << "\t\t\t\t\t\t\t" << "- ���������������� ������� �������� �����, ���������, ���������; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- ��������� � ����� �������� �����; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- ���������, �������������� ������������� �����������; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- �����������������. " << endl;
		cout << "\t\t\t\t\t\t\t" << "- ���� ����� ������ 50 ���; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "����������� � ������������������ ��� ����������: " << endl;
		cout << "\t\t\t\t\t\t\t" << "- ���������� ���������������� � ������������ ���������� �/��� ��������������� ���������; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- ���������� ���������������� �� �������������� �������� �������� 13 ��� �������� (� ��� �����, ���������������� ���, ������� ���������������� ������������� �������); " << endl;
		cout << "\t\t\t\t\t\t\t" << "- ������ ������������ ��� �������������� �����������, ���������� ����������� �����������. ���������� �������� ����� ������������� ��� � ������ ��������. " << endl;
		cout << "\t\t\t\t\t\t\t" << "���� �� ������������ � ����������� � �������� �� ����������, ������� 1. ���������� - 2. ����� � ���� - 0: ";cin >> choise_intections_2;
		if (choise_intections_2 == 1)
		{
			cout << "\t\t\t\t\t\t\t" << "������, ����� ������� ��� �� ���� �� ������ � 12:00. ��������� ����� 2000 ������. �� ��������? 1 - ��, 2 - ���: ";cin >> choise_intections_3;
			if (choise_intections_3 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ������� ���� ���: ";cin >> name;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������ �������: ";cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t\t" << "������, " << name << ", ��� ��� ������ � 12:00, ������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ����� �������������� ��� � ������� ����...";
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (choise_intections_3 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��������� ��� � ������� ����...";
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (choise_intections_2 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��������� ��� � ������� ����...";
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '2':
	{
		cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "����������� � ����������� ��� ����������:" << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- ����� � ������� ������ ����������� � ������������� ���������� � ������ ����������� �������; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- �����, ����� �������� ������� �������������� ��������� ����������; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- �����, �� ���� ������� ��� ���������������� ������������ ������� ������� ���� ����������� ������� ��� ��������� �� ������ ���: " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- ���������� ����������� � ��������������� ����������, ����������, ������������ � ���������� ����, �������, �������������� � �.�. " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "����������� � ������������������ ��� ����������: " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- ������������� ������� �� �������������� �������� ����������� ���������; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- ������������� ������� �� ������� ����� � ������ ���������� �������; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "-  ������ ������������, ������ ������������ � �������������� �����������, ��������� ��� ���������� ������������ �����������; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- ������� �� 18 ���. " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "���� �� ������������ � ����������� � �������� �� ����������, ������� 1. ���������� - 2. ����� � ���� - 0: ";cin >> choise_intections_2;
		if (choise_intections_2 == 1)
		{
			cout << "\t\t\t\t\t\t\t" << "������, ����� ������� ��� �� ���� �� ������ � 11:00. ��������� ����� 1500 ������. �� ��������? 1 - ��, 2 - ���: ";cin >> choise_intections_3;
			if (choise_intections_3 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������, ����� ������� ���� ���: ";cin >> name;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������ �������: ";cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t\t" << "������, " << name << " ��� ��� ������ � 11:00, ������� ������������ � ����� �������/�������� ������? 1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ����� �������������� ��� � ������� ����...";
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (choise_intections_3 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t" << "������, ����� ��������� ��� � ������� ����...";
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (choise_intections_2 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��������� ��� � ������� ����...";
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '0':
	{
		cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t   " << "������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
		break;
	}

	default:
	{
		error();
		break;
	}
	}
	return 0;
}

void massage() 
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "��� ����� ������? ������, �� �������� ��������� ���� ��������, �������� ����� ����� ���:" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << "1 - ��������������� ������,  2 - ����� ������, 0 - ����� � ������� ����: ";cin >> choise_massage;
	switch (choise_massage)
	{
	case '1':
	{
		cout << "\t\t\t\t\t\t\t\t\t" << "������, ��� ����� ��������������� ������. �������� ����� ������ ��� �����: " << endl;
		cout << "\t\t\t\t" << "1 - ��������������� ������ ����� (600 ������); 2 - ��������������� ������ �����, ������, ������ (1500 ������); 3 - ��������������� ������ ����� ���� (1800 ������); 0 - ����� � ������� ����: ";cin >> aclmsg_ch;
		if (aclmsg_ch == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t" << "�� ������� ��������������� ������ �����, ����, � ��� �������� ����� �� ������ � 12:00, ��� ������� ��� �����?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> aclmsg_ch_2;
			if (aclmsg_ch_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������, ����� ������� ��� ���: ";cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "� ���� �������: ";cin >> surname;
				cout << "\t\t\t\t\t\t\t" << "������, " << name << " ����� ��� ����� ������ � 12:00! ������ �� �����. ������� ������������ � ����� ����������� ������ ��� ������� ������������?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				} 
			}
			else if (aclmsg_ch_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t" << "������, ����� ���� ������ ����� 3 ��� � 11:00, ��� ������� ������ �����?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> aclmsg_ch_3;
				if (aclmsg_ch_3 == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������, ����� ������� ��� ���: ";cin >> name;
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "� ���� �������: ";cin >> surname;
					cout << "\t\t\t\t\t\t\t" << "������, " << name << " ����� ��� ����� ����� 3 ��� � 11:00! ������ �� �����. ������� ������������ � ����� ����������� ������ ��� ������� ������������?" << endl;
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (aclmsg_ch_3 == 2)
				{
					cout << "\t\t\t\t\t\t\t\t " << "����, ����� ����� �� ����� ��� ������, ��������. �������������� ��� � ������� ����." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else
			{
				error();
			}
		}
		else if (aclmsg_ch == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�� ������� ��������������� ������ �����, ������, ������, ����, � ��� �������� ����� �� ������ � 11:00, ��� ������� ��� �����?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> aclmsg_ch_2;
			if (aclmsg_ch_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������, ����� ������� ��� ���: "; cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "� ���� �������: "; cin >> surname;
				cout << "\t\t\t\t\t\t\t" << "������, " << name << " ����� ��� ����� ������ � 11:00! ������ �� �����. ������� ������������ � ����� ����������� ������ ��� ������� ������������?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (aclmsg_ch_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t" << "������, ����� ���� ������ ����� 2 ��� ����� � 10:00, ��� ������� ������ �����?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> aclmsg_ch_3;
				if (aclmsg_ch_3 == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������, ����� ������� ��� ���: ";cin >> name;
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "� ���� �������: ";cin >> surname;
					cout << "\t\t\t\t\t\t\t" << "������, " << name << " ����� ��� ����� ����� 2 ��� � 10:00! ������ �� �����. ������� ������������ � ����� ����������� ������ ��� ������� ������������?" << endl;
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���:";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (aclmsg_ch_3 == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else
			{
				error();
			}
		}



		else if (aclmsg_ch == 3)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�� ������� ��������������� ������ ����� ����, ����, � ��� �������� ����� ����� 2 ��� 9:00, ��� ������� ������ �����?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> aclmsg_ch_2;
			if (aclmsg_ch_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������, ����� ������� ��� ���: ";cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "� ���� �������: ";cin >> surname;
				cout << "\t\t\t\t\t\t\t" << "������, " << name << " ����� ��� ����� ����� 2 ��� � 9:00! ������ �� �����. ������� ������������ � ����� ����������� ������ ��� ������� ������������?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (aclmsg_ch_2 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t" << "������, ����� ���� ������ ����� 3 ��� ����� � 12:00, ��� ������� ������ �����?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���: ";cin >> aclmsg_ch_3;
				if (aclmsg_ch_3 == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������, ����� ������� ��� ���: "; cin >> name;
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "� ���� �������: "; cin >> surname;
					cout << "\t\t\t\t\t\t\t" << "������, " << name << " ����� ��� ����� ����� 3 ��� � 12:00! ������ �� �����. ������� ������������ � ����� ����������� ������ ��� ������� ������������?" << endl;
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" "1 - ��, 2 - ���: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
						Sleep(500);
						system("cls");
						main();
					}
					else
					{
						error();
					}
				}
				else if (aclmsg_ch_3 == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t " << "����, ����� ����� �� ����� ��� ������, ��������. �������������� ��� � ������� ����." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else
			{
				error();
			}
		}
		else if (aclmsg_ch == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '2':
	{
		cout << "\t\t\t\t\t\t\t\t" << "�������, �� ������� ��������� ������ �������! ��� �������� ��� � 5500 ������ �� 10 �������, �� ��������?" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - ��, 2 - ���." << endl;
		cin >> common_ch;
		if (common_ch == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "������, ����� ������� �������� ���� � ����� ������� ������:" << endl;
			cout << "\t\t\t\t\t\t" << "1 - �����������, 17:00; 2 - �����, 19:00; 3 - �������, 15:00; 4 - �������, 9:00; 5 - �������, 14:00; 6 - �����������, 13:00; 0 - ���������� ������� �����." << endl;
			cin >> common_ch_1;
			if (common_ch_1 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ��� ����� ����� � ����������� � 17:00, ������� ��� ���: ";cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������ ������� �������: ";cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "�������, " << name << " ����� ��� ����� � ����������� � 17:00. ������ �� �����. ������� ������������ � ����� �������/�������� ������?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - ��, 2 - ���: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					Sleep(500);
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (common_ch_1 == 2)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ��� ����� ����� � ����� � 19:00, ������� ��� ���: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������ ������� �������: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "�������, " << name << " ����� ��� ����� � ����� � 19:00. ������ �� �����. ������� ������������ � ����� �������/�������� ������?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " "1 - ��, 2 - ���." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (common_ch_1 == 3)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ��� ����� ����� � ������� � 15:00, ������� ��� ���: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������ ������� �������: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "�������, " << name << " ����� ��� ����� � ������� � 15:00. ������ �� �����. ������� ������������ � ����� �������/�������� ������?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - ��, 2 - ���." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (common_ch_1 == 4)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ��� ����� ����� � ������� � 14:00, ������� ��� ���: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������ ������� �������: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "�������, " << name << " ����� ��� ����� � ������� � 14:00. ������ �� �����. ������� ������������ � ����� �������/�������� ������?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - ��, 2 - ���." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (common_ch_1 == 5)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ��� ����� ����� � ������� � 14:00, ������� ��� ���: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������ ������� �������: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "�������, " << name << " ����� ��� ����� � ������� � 14:00. ������ �� �����. ������� ������������ � ����� �������/�������� ������?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - ��, 2 - ���." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (common_ch_1 == 6)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ��� ����� ����� � ����������� � 13:00, ������� ��� ���: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������ ������� �������: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "�������, " << name << " ����� ��� ����� � ����������� � 13:00. ������ �� �����. ������� ������������ � ����� �������/�������� ������?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - ��, 2 - ���." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
					system("cls");
					main();
				}
				else
				{
					error();
				}
			}
			else if (common_ch_1 == 0)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (common_ch == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '0':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t " << "������, ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
		break;
	}

	default:
	{
		error();
		break;
	}
	}
}

int consultation_references()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "�������� ����� ������ ������������ ��� �����: " << endl;
	cout << "\t\t\t\t\t\t\t" << "1 - �������� ���������, 2 - �����-�������, 3 - �����-�������, 4 - ������������-��������, 5 - ���������, 0 - ����� �� ���������: "; cin >> ch_diagnost;
	if (ch_diagnost == '1')
	{
		cout << "\n" << "\t\t\t\t\t\t\t " << "������, �� ������� �������� ���������, ���� ���� �� ������ � 13:00, ��������� - 500 ������, �� ��������? 1 - ��, 2 - ���: "; cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t   " << "������, ��� ��� ������ � 13:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "������� ������������ � ����� �������/����������� ������? 1 - ��, 2 - ��: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (ch_diagnost_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (ch_diagnost == '2')
	{
		cout << "\n" << "\t\t\t\t\t\t\t " << "������, �� ������� �����-�������, ���� ���� �� ������ � 9:00, ��������� - 500 ������, �� ��������? 1 - ��, 2 - ���: ";cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t   " "������, ��� ��� ������ � 9:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "������� ������������ � ����� �������/����������� ������? 1 - ��, 2 - ���: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (ch_diagnost_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (ch_diagnost == '3')
	{
		cout << "\n" << "\t\t\t\t\t\t\t " << "������, �� ������� �����-�������, ���� ���� �� ������ � 10:00, ��������� - 750 ������, �� ��������? 1 - ��, 2 - ���: "; cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t " << "������, ��� ��� ������ � 10:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "������� ������������ � ����� �������/����������� ������? 1 - ��, 2 - ���: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (ch_diagnost_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
			main();
		}
		else
		{
			error();
		}
	}
	else if (ch_diagnost == '4')
	{
		cout << "\n" << "\t\t\t\t\t\t\t " << "������, �� ������� ������������-��������, ���� ���� ����� 2 ��� � 11:00, ��������� - 400 ������, �� ��������? 1 - ��, 2 - ���: "; cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t " << "������, ��� ��� ����� 2 ��� � 11:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "������� ������������ � ����� �������/����������� ������? 1 - ��, 2 - ���: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (ch_diagnost_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (ch_diagnost == '5')
	{
		cout << "\n" << "\t\t\t\t\t\t\t " << "������, �� ������� ���������, ���� ���� �� ������ � 12:00, ��������� - 600 ������, �� ��������? 1 - ��, 2 - ���: "; cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t " << "������, ��� ��� ������ � 12:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "������� ������������ � ����� �������/����������� ������? 1 - ��, 2 - ���: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (ch_diagnost_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "����, �� ����� �� ����� ��� �� ����� ������, �������������� ��� � ������� ����" << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (ch_diagnost == '0')
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t " << "������, ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else
	{
		error();
	}

	return 0;
}

void products()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "����� � ����� ��������� �� ������ ���������� ����������� ��� ������, ������ �������: " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "���� �������, 1 �� = 300�" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t       " << "�������� CAT, 1 �� = 1000�" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "���� �����, 1 �� = 650�" << endl;
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ��-2, 1 �� = 2000�" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "������������ ������� ����� �200, 1 �� = 30�" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "�������, 1 �� = 350�" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t " << "����������� ������ (Bandage), 1 �� = 500�" << endl;
	cout << "\t\t\t\t\t\t\t\t\t" << "���� ������ ������� ����� ��������� �������� ������� ������, ������� 1, ���� ���, �� 2: "; cin >> description_0;
	switch (description_0)
	{
	case '1':
	{
		description();
		break;
	}

	case '2':
	{
		cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "������� ������ �����-�� �����? 1 - ��, 2 - ���: "; cin >> choise_products;
		if (choise_products == 1)
		{
			buy();
		}
		else if (choise_products == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t" << "������, ����� ��������� ��� � ������� ����...";
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}
	
	default:
	{
		error();
		break;
	}
	}
}

void list()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "  ������ ������ ������ ���������: " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "�������� - ���������� ������ ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "��������� - ������ ��������� ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "�������� - ����� ������ ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "�������� - ��������� ������ ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "�������� - ������ ����� ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "��������� - ��������� ����� ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "����������� - ����� ����� �������������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "����-�������������� ����������� - �������� ��������� ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "������� - �������� ����� ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "�������� - ���������� ���� ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "������ - ������ �������� ���������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "������� - ������������ ����� ����������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "������������� - ������ ��� ������. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "����������� - ��������� ������ �����������. " << "\n";
	cout << "\n" << "\t\t\t\t\t\t\t\t\t   " << "  ������� ��������� � ������� ����? 1 - ��, 2 - ���: ";cin >> choise_list;
	if (choise_list == 1)
	{
		main();
	}
	else if (choise_list == 2)
	{
		exit();
	}
	else
	{
		error();
	}

}

void description()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "�������� ������ ������ �� �� ������ �������? " << endl;
	cout << "\t\t\t\t\t" << "1 - ���� �������, 2 - �������� CAT, 3 - ���� �����, 4 - ������� ��-2, 5 - ������������ ������� ����� �200, 6 - �������, 7 - ����������� ������ (Bandage)." << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "  ������� ����� ��������� ��������: "; cin >> choise_desc;
	switch (choise_desc)
	{
	case '1':
	{
		cout << "\t\t\t\t\t\t" << "����� ������� ������������� � ������������ �������� � ����. �������: ����� - 1400 ��, ������� - 25 ��. " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "�� ������� ���������� ������ �����? 1 - ��, 2 - ���: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_first();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}

		break;
	}

	case '2':
	{
		cout << "\t\t\t\t\t" << "�������� ��� � ��� ���� �� ������ ������� ��� ��������� ��������������� ������������ �����������. �������� ������ ����� �����. ����� ����� 95��. " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "�� ������� ���������� ������ �����? 1 - ��, 2 - ���: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_two();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '3':
	{
		cout << "\t\t\t" << "���� �������������������� ��������� ������� � �������� � ���� ����� �����. ������������ ��� ��������� ��������� ������������, ������� ������������. ������ 750�27�5��, ��� 80 ��." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "�� ������� ���������� ������ �����? 1 - ��, 2 - ���: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_three();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '4':
	{
		cout << "\t\t\t\t\t" << "�� - 2 �������� ����������� �������� ������ � ������������� ��� �������� ���������� � ������������ ��� �������� � ������." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "�� ������� ���������� ������ �����? 1 - ��, 2 - ���: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_four();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '5':
	{
		cout << "\t\t" << "������������ �������, ������������ �������� ������������, ������������ � ����� �����. � �������� ��������� 200 ���� �����, ������ 0,25 � ������.�� �������, ����, ��������, ����������� ������� � ������� �������." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "�� ������� ���������� ������ �����? 1 - ��, 2 - ���: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_five();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '6':
	{
		cout << "\t\t\t\t\t" << "������� - ��������������� �������� ��� ���������� ��������� �������� (���, ����), �������� �������� ����������� ��������� � ��� ������ ������������." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "�� ������� ���������� ������ �����? 1 - ��, 2 - ���: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_six();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	case '7':
	{
		cout << "\t\t\t\t\t\t\t" << "���������� �������������� ������� � ����������� ��������, �������� � ������ �� �� ������." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "�� ������� ���������� ������ �����? 1 - ��, 2 - ���: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_seven();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
		break;
	}

	default:
	{
		error();
		break;
	}
	}
}

void purchase_first()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "�� ������ ���������� '���� �������', �������!" << endl;
	cout << "\t\t\t\t\t\t" << "  1 ����� �������� ��� � 300 ������, ����� ���������� �� ������ ��������? ������, ��� � ��� �� ������ ���� ����� 100 ���� ��� �����: "; cin >> quantity;
	if (quantity <= 100 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "������, �� ������ �������� " << quantity << " '���� �������', ��� ��� �������� � " << price_1 * quantity << " ������, �� ������������� �����? 1 - ��, 2 - ���: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� ���: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� �������: "; cin >> surname;
			cout << "\t\t\t\t\t" << "�������! ��� ����� ����� ����� ������ ����� � ������� ������ �������� ���. ������ �� �����. ������� ������������ � ����� ����������� ������/����� �������? 1 - ��, 2 - ���: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (confirmation == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (quantity == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t" << "��� �� �� ������� �������� �����, ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 100)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "� ��� ��� ������ ���������� ������..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����...";
		Sleep(500);
		system("cls");
		main();
	}
	else
	{
		error();
	}
}

void purchase_two()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "�� ������ ���������� '�������� Cat', �������!" << endl;
	cout << "\t\t\t\t\t\t" << "1 ����� �������� ��� � 1000 ������, ����� ���������� �� ������ ��������? ������, ��� � ��� �� ������ ���� ����� 50 ���� ��� �����: ";cin >> quantity;
	if (quantity <= 50 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "������, �� ������ �������� " << quantity << " '�������� CAT', ��� ��� �������� � " << price_2 * quantity << " ������, �� ������������� �����? 1 - ��, 2 - ���: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� ���: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� �������: "; cin >> surname;
			cout << "\t\t\t\t\t" << "�������! ��� ����� ����� ����� ������ ����� � ������� ������ �������� ���. ������ �� �����. ������� ������������ � ����� ����������� ������/����� �������? 1 - ��, 2 - ���: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (confirmation == 2)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (quantity == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t" << "��� �� �� ������� �������� �����, ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 50)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "� ��� ��� ������ ���������� ������..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����...";
		Sleep(500);
		system("cls");
		main();
	}
	else
	{
		error();
	}
}

void purchase_three()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "�� ������ ���������� '���� �����', �������!" << endl;
	cout << "\t\t\t\t\t\t" << "1 ����� �������� ��� � 650 ������, ����� ���������� �� ������ ��������? ������, ��� � ��� �� ������ ���� ����� 100 ���� ��� �����: ";cin >> quantity;
	if (quantity <= 100 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "������, �� ������ �������� " << quantity << " '������ �����', ��� ��� �������� � " << price_3 * quantity << " ������, �� ������������� �����? 1 - ��, 2 - ���: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� ���: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� �������: "; cin >> surname;
			cout << "\t\t\t\t\t" << "�������! ��� ����� ����� ����� ������ ����� � ������� ������ �������� ���. ������ �� �����. ������� ������������ � ����� ����������� ������/����� �������? 1 - ��, 2 - ���: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (confirmation == 2)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (quantity == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t" << "��� �� �� ������� �������� �����, ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 100)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "� ��� ��� ������ ���������� ������..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����...";
		Sleep(500);
		system("cls");
		main();
	}
	else
	{
		error();
	}
}

void purchase_four()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "�� ������ ���������� '������� ��-2', �������!" << endl;
	cout << "\t\t\t\t\t\t" << "1 ����� �������� ��� � 2000 ������, ����� ���������� �� ������ ��������? ������, ��� � ��� �� ������ ���� ����� 30 ���� ��� �����: ";cin >> quantity;
	if (quantity <= 30 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "������, �� ������ �������� " << quantity << " '������� ��-2', ��� ��� �������� � " << price_4 * quantity << " ������, �� ������������� �����? 1 - ��, 2 - ���: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� ���: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� �������: "; cin >> surname;
			cout << "\t\t\t\t\t" << "�������! ��� ����� ����� ����� ������ ����� � ������� ������ �������� ���. ������ �� �����. ������� ������������ � ����� ����������� ������/����� �������? 1 - ��, 2 - ���: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (confirmation == 2)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (quantity == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t" << "��� �� �� ������� �������� �����, ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 30)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "� ��� ��� ������ ���������� ������..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����...";
		Sleep(500);
		system("cls");
		main();
	}
	else
	{
		error();
	}
}

void purchase_five()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "�� ������ ���������� '������������ ������� ����� �200', �������!" << endl;
	cout << "\t\t\t\t\t\t" << "1 ����� �������� ��� � 30 ������, ����� ���������� �� ������ ��������? ������, ��� � ��� �� ������ ���� ����� 200 ���� ��� �����: ";cin >> quantity;
	if (quantity <= 200 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "������, �� ������ �������� " << quantity << " '������������ �������', ��� ��� �������� � " << price_5 * quantity << " ������, �� ������������� �����? 1 - ��, 2 - ���: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� ���: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� �������: "; cin >> surname;
			cout << "\t\t\t\t\t" << "�������! ��� ����� ����� ����� ������ ����� � ������� ������ �������� ���. ������ �� �����. ������� ������������ � ����� ����������� ������/����� �������? 1 - ��, 2 - ���: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (confirmation == 2)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (quantity == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t" << "��� �� �� ������� �������� �����, ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 200)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "� ��� ��� ������ ���������� ������..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����...";
		Sleep(500);
		system("cls");
		main();
	}
	else
	{
		error();
	}
}

void purchase_six()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "�� ������ ���������� '�������', �������!" << endl;
	cout << "\t\t\t\t\t\t" << "1 ����� �������� ��� � 350 ������, ����� ���������� �� ������ ��������? ������, ��� � ��� �� ������ ���� ����� 20 ���� ��� �����: ";cin >> quantity;
	if (quantity <= 20 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "������, �� ������ �������� " << quantity << " '�������', ��� ��� �������� � " << price_6 * quantity << " ������, �� ������������� �����? 1 - ��, 2 - ���: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� ���: ";cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� �������: ";cin >> surname;
			cout << "\t\t\t\t\t" << "�������! ��� ����� ����� ����� ������ ����� � ������� ������ �������� ���. ������ �� �����. ������� ������������ � ����� ����������� ������/����� �������? 1 - ��, 2 - ���: ";cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (confirmation == 2)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (quantity == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t" << "��� �� �� ������� �������� �����, ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 20)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "� ��� ��� ������ ���������� ������..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����...";
		Sleep(500);
		system("cls");
		main();
	}
	else
	{
		error();
	}
}

void purchase_seven()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "�� ������ ���������� '����������� ������', �������!" << endl;
	cout << "\t\t\t\t\t\t" << "1 ����� �������� ��� � 500 ������, ����� ���������� �� ������ ��������? ������, ��� � ��� �� ������ ���� ����� 60 ���� ��� �����: ";cin >> quantity;
	if (quantity <= 60 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "������, �� ������ �������� " << quantity << " '����������� ������', ��� ��� �������� � " << price_7 * quantity << " ������, �� ������������� �����? 1 - ��, 2 - ���: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� ���: ";cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "������� ���� �������: ";cin >> surname;
			cout << "\t\t\t\t\t" << "�������! ��� ����� ����� ����� ������ ����� � ������� ������ �������� ���. ������ �� �����. ������� ������������ � ����� ����������� ������/����� �������? 1 - ��, 2 - ���: ";cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
				Sleep(500);
				system("cls");
				main();
			}
			else
			{
				error();
			}
		}
		else if (confirmation == 2)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "������, ����� ��������� ��� � �������� ����..." << endl;
			Sleep(500);
			system("cls");
			main();
		}
		else
		{
			error();
		}
	}
	else if (quantity == 0)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t" << "��� �� �� ������� �������� �����, ���������� ��� � ������� ����..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 60)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "� ��� ��� ������ ���������� ������..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "�������������� ��� � ������� ����...";
		Sleep(500);
		system("cls");
		main();
	}
	else
	{
		error();
	}
}

void operating_mode()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "   ����� - ��.���������, �. 1�." << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  " << "     ��� ����� ������: " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "����������� - �������, � 7:30 �� 20:00" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t      " <<   "�������, � 8:00 �� 15:00" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t     " <<   "�����������, � 9:00 �� 14:00" << endl;
	cout << "\t\t\t\t\t\t\t\t\t" << "  �� ������������ � ����� ������� ������, � ����� ���� ������ �������?" << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "  1 - ������� ����, 0 - ����� �� ���������: "; cin >> choise_operating;
	if (choise_operating == 1)
	{
		Sleep(500);
		system("cls");
		main();
	}
	else if (choise_operating == 0)
	{
		exit();
	}
	else
	{
		error();
	}
}

void buy()
{
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t  " << "�� ����� ���� 7 �������:" << endl;
	cout << "\t\t\t\t" << "1 - ���� �������, 2 - �������� CAT, 3 - ���� �����, 4 - ������� ��-2, 5 - ������������ ������� ����� �200, 6 - �������, 7 - ����������� ������ (Bandage)." << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << "������� ����� ��������� ��������: "; cin >> choise_desc;
	switch (choise_desc)
	{
	case '1':
	{
		purchase_first();
		break;
	}

	case '2':
	{
		purchase_two();
		break;
	}

	case '3':
	{
		purchase_three();
		break;
	}

	case '4':
	{
		purchase_four();
		break;
	}

	case '5':
	{
		purchase_five();
		break;
	}

	case '6':
	{
		purchase_six();
		break;
	}

	case '7':
	{
		purchase_seven();
		break;
	}
	default:
	{
		error();
		break;
	}
	}
}

void error()
{
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << " ������! ������������ ����!" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << " ��������� ��������� ������!";
	Sleep(1000);
}

void exit()
{
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "��������� ��������� ������...";
	Sleep(1000);
}



