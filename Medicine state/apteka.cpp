#include<iostream>
#include<windows.h>
using namespace std;

void list(); // список врачей
void description(); // описание товаров 
void products(); //товары 
void buy(); // покупка, без описания 
void purchase_first(); // Эсмарка 
void purchase_two(); // турникет 
void purchase_three(); // альфа 
void purchase_four(); // аи 2 
void purchase_five(); // аскорбинка 
void purchase_six(); // терафлю 
void purchase_seven(); // бандаж 
void operating_mode(); // режим работы/адрес 
void services_choise(); //выбор услуг !!!
void analyzes(); // анализы
void adult_department(); // взрослое отделение 
int injections(); // инъекции 
void massage(); // массаж 
int consultation_references(); // консультация справок/больничных листов 
void error(); // при неккоректном вводе 
void exit(); // выход 

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
		cout << "\n" << "\t\t\t\t" << "Добрый день! Вы находитесь в приложении медицинской организации под названием СоколMED. У нас есть различный спект услуг, товаров и т.д., давайте с ними ознакомимся..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t" << "1 - услуги, которые оказываются врачами нашего заведения." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "      2 - покупка товаров, которые продаются нами. (без описания)" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t" << "  3 - описание товаров, которые продаются нами." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "      4 - список сотрудников, работающих в нашей организации." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << " 5 - режим работы/наш адрес." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t" << " Для того чтобы выйти из программы нажмите 0." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t" << "Введите цифру раздела, который вас интересует: "; cin >> ch_main;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "Вам нужны наши услуги? Хорошо, выберите какие именно вам нужны: " << endl;
	cout << "\t\t\t\t\t\t" << "1 - взрослое отделение; 2 - сдача анализов; 3 - инъекции; 4 - массаж; 5 - консультация справок/больничных листов; 0 - главное меню: ";cin >> serv_choise;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "В нашем взрослом отделении есть множество врачей, выберите услуги какого врача вам нужны: " << endl;
	cout << "\t\t\t\t\t\t" << "1 - хирург, 2 - нарколог, 3 - кардиолог, 4 - травмотолог-ортопед, 5 - Терапевт, 6 - офтальмолог, 7 - уролог, 0 - выход в главное меню: ";cin >> adult_department_0;
	switch (adult_department_0)
	{
	case '1':
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, наш хирург предлагает следующие услуги: " << endl;
		cout << "\t\t\t\t\t" << "1 - вскрытие гематомы мягких тканей, 2 - удаление ногтевых плостинок, 3 - перевязка послеоперационная, 4 - наложение повязки с раствором антисептика, 0 - главное меню: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали вскрытие гематомы мягких тканей, есть приём в пятницу на 13:00, стоимость - 1500 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ждём вас в пятницу в 13:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/расписанием работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали удаление ногтевых плостинок, есть приём в среду на 18:00, стоимость - 1250 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ждём вас в среду в 18:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/расписанием работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали перевязка послеоперационная, есть приём в понедельник на 16:00, стоимость - 200 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ждём вас в понедельник в 16:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/расписанием работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали наложение повязки с раствором антисептика, есть приём на завтра в 11:00, стоимость - 350 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ждём вас в субботу в 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/расписанием работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Выводим в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, наш нарколог предлагает следующие услуги: " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "1 - борьба с алкогольной зависимостью, 2 - борьба с никотиновой зависимостью, 0 - главное меню: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t" << "Хорошо, вы выбрали борьбe с алкогольной зависимостью. У нас данная услуга - это целый крус, который стоит 5000 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t" << "Отлично! Тогда выберите дату ваше первого сеанса, на выбор имеется:" << endl;
				cout << "\t\t\t\t\t\t\t" << "1 - Понедельник в 13:00; 2 - Среда в 14:00; 3 - Пятница в 17:00; 4 - Воскресенье в 11:00; 0 - вам ничего не подходит: ";cin >> ch_day;
				if (ch_day == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Отлично! Ждём вас в Понедельник в 13:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Отлично! Ждём вас в Среду в 14:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Отлично! Ждём вас в Пятницу в 17:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Отлично! Ждём вас в Воскресенье в 11:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом / временем работы ? 1 - да, 2 - нет : ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
					cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t" << "Хорошо, вы выбрали борьбe с никотиновой зависимостью. У нас данная услуга - это целый крус, который стоит 10000 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t" << "Отлично! Тогда выберите дату ваше первого сеанса, на выбор имеется:" << endl;
				cout << "\t\t\t\t\t\t\t" << "1 - Понедельник в 15:00; 2 - Среда в 16:00; 3 - Пятница в 19:00; 4 - Воскресенье в 13:00; 0 - вам ничего не подходит: ";cin >> ch_day;
				if (ch_day == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Отлично! Ждём вас в Понедельник в 15:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Отлично! Ждём вас в Среду в 16:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Отлично! Ждём вас в Пятницу в 19:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Отлично! Ждём вас в Воскресенье в 13:00" << endl;
					cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
					cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Выводим в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, наш кардиолог предлагает следующие услуги: " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "1 - приём у врача-кардиолога Первичный, 2 - приём у врача-кардиолога Повторный, 0 - главное меню: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t" << "Хорошо, вы выбрали приём у врача-кардиолога Первичный, есть приём в Среду на 14:00, стоимость - 1300 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Среду в 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t" << "Хорошо, вы выбрали приём у врача-кардиолога Повторный, есть приём в Пятницу на 14:00, стоимость - 1100 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Пятницу в 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Выводим в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, наш кардиолог предлагает следующие услуги: " << endl;
		cout << "\t\t" << "1 - первичная хирургическая обработка, 2 - вскрытие и дренирование полости, 3 - удаление металоконструкций, 4 - снятие гипсовой повязки, 5 - вправление вывихов крупных суставов, 0 - главное меню: "; cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t" << "Хорошо, вы выбрали первичную хирургическую обработку, есть приём в Понедельник на 14:00, стоимость - 800 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Понедельник в 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали вскрытие и дренирование полости, есть приём в Пятницу на 17:00, стоимость - 3000 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Пятницу в 17:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали удаление металоконструкций, есть приём в Пятницу на 11:00, стоимость - 12000 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Пятницу в 11:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали снятие гипсовой повязки, есть приём в Субботу на 13:00, стоимость - 500 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Субботу в 13:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали снятие вправление вывихов крупных суставов, есть приём в Понедельник на 10:00, стоимость - 700 рублей, вы согласны? 1 - да, 2 - нет: "; cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Понедельник в 10:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Выводим в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, наш кардиолог предлагает следующие услуги: " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "1 - приём врача-терапевта повторный, 2 - приём врача-терапевта повторный, 0 - главное меню: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t" << "Хорошо, вы выбрали приём врача-терапевта повторный, есть приём завтра на 11:00, стоимость - 950 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас завтра в 11:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t" << "Хорошо, вы выбрали приём врача-терапевта первичный, есть приём завтра на 12:00, стоимость - 1150 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас завтра в 12:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Выводим в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, наш офтальмолог предлагает следующие услуги: " << endl;
		cout << "\t\t\t\t\t\t" << "1 - подбор контакной корекции зрения, 2 - эпиляция ресниц, 3 - снятие швов с кожи век, 4 - удаление инородного тела из глаза, 0 - главное меню: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t" << "Хорошо, вы выбрали подбор контакной корекции зрения, есть приём завтра на 12:00, стоимость - 350 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас завтра в 12:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали эпиляцию ресниц, есть приём Пятницу на 13:00, стоимость - 400 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Пятницу в 13:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t" << "Хорошо, вы выбрали снятие швов с кожи век, есть приём Среду на 18:00, стоимость - 450 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Среду в 18:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t" << "Хорошо, вы выбрали удаление инородного тела из глаза, есть приём завтра на 10:00, стоимость - 500 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас завтра в 10:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Выводим в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, наш уролог предлагает следующие услуги: " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "1 - диафаноскопия, 2 - приём врача-уролога первчиный, 3 - приём врача-уролога повторный, 0 - главное меню: ";cin >> adult_department_1;
		if (adult_department_1 == 1)
		{
			cout << "\t\t\t\t\t\t\t\t" << "Хорошо, вы выбрали диафаноскопия, есть приём завтра на 12:00, стоимость - 350 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас завтра в 12:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t" << "Хорошо, вы выбрали приём врача-уролога первчиный, есть приём в Понедельник на 14:00, стоимость - 1300 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Понедельник в 14:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t" << "Хорошо, вы выбрали приём врача-уролога повторный, есть приём в Среду на 09:00, стоимость - 1100 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> adult_department_2;
			if (adult_department_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда ждём вас в Среду в 09:00!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t" << "Желаете ознакомиться с нашим адресом/временем работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, перенаправляем вас в главное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Выводим в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Выводим в главное меню..." << endl;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "Вы желаете сдать анализы?" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t    " << "1 - да, 2 - нет: ";cin >> choise_analyzises;
	if (choise_analyzises == 1)
	{
		cout << "\t\t\t\t\t" << "Хорошо, приносите в любой день с 7:00 до 13:00, ваши анализы. Лабаратория работает в такой график в любой день недели." << endl;
		cout << "\t\t\t\t\t  " << "Цена составит 1500 рублей. Также рекомендация - приносите с утра, тогда анализы будут максимально точные" << endl;
		cout << "\t\t\t\t\t\t  " << "Желаете вернуться в главное меню - введите 1, завершить программу - введите 0: ";cin >> choise_analyzises_2;
		if (choise_analyzises_2 == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "Тогда пересылаем вас в главное меню..." << endl;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "У нас есть 2 инъекции, которые мы можем вам ввести, введите номер, которая вам нужна. " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t  " << "1 - ПРЕВЕНАР-13; 2 - УЛЬТРИКС КВАДРИ; 0 - выход в меню: ";cin >> choise_intections;
	switch (choise_intections)
	{
	case '1':
	{
		cout << "\n" << "\t\t\t\t\t\t\t\t" << "Ознакомтесь с показаниями для применения:" << endl;
		cout << "\t\t\t\t\t\t\t" << "- у лиц групп повышенного риска развития пневмококковой инфекции;" << endl;
		cout << "\t\t\t\t\t\t\t" << "- иммунодефицитными состояниями, в т.ч. ВИЧ-инфекцией, онкологическими заболеваниями, получающим иммуносупрессивную терапию; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- с анатомической/функциональной аспленией; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- с установленным кохлеарным имплантом или планирующиеся на эту операцию; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- пациентам с подтеканием спинномозговой жидкости; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- недоношенным детям; лицам, находящимся в организованных коллективах(детские дома, интернаты, армейские коллективы); " << endl;
		cout << "\t\t\t\t\t\t\t" << "- реконвалесцентам острого среднего отита, менингита, пневмонии; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- длительно и часто болеющим детям; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- пациентам, инфицированным микобактерией туберкулеза; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- табакокурильщикам. " << endl;
		cout << "\t\t\t\t\t\t\t" << "- всем лицам старше 50 лет; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "Ознакомтесь с противопоказаниями для применения: " << endl;
		cout << "\t\t\t\t\t\t\t" << "- повышенная чувствительность к дифтерийному анатоксину и/или вспомогательным веществам; " << endl;
		cout << "\t\t\t\t\t\t\t" << "- повышенная чувствительность на предшествующее введение Превенар® 13 или Превенар® (в том числе, анафилактический шок, тяжелые генерализованные аллергические реакции); " << endl;
		cout << "\t\t\t\t\t\t\t" << "- острые инфекционные или неинфекционные заболевания, обострения хронических заболеваний. Вакцинацию проводят после выздоровления или в период ремиссии. " << endl;
		cout << "\t\t\t\t\t\t\t" << "Если вы ознакомились с показаниями и согласны на вакцинацию, нажмите 1. Несогласны - 2. Выйти в меню - 0: ";cin >> choise_intections_2;
		if (choise_intections_2 == 1)
		{
			cout << "\t\t\t\t\t\t\t" << "Хорошо, тогда запишем вас на приём на завтра в 12:00. Стоимость будет 2000 рублей. Вы согласны? 1 - да, 2 - нет: ";cin >> choise_intections_3;
			if (choise_intections_3 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда введите ваше имя: ";cin >> name;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Теперь фамилию: ";cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t\t" << "Хорошо, " << name << ", ждём вас завтра в 12:00, желаете ознакомиться с нашим адресом/графиком работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда перенаправляем вас в главное меню...";
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда переводим вас в главное меню...";
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
			cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда переводим вас в главное меню...";
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
		cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "Ознакомтесь с показаниями для применения:" << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- лицам с высоким риском заболевания и возникновения осложнений в случае заболевания гриппом; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- лицам, часто болеющим острыми респираторными вирусными инфекциями; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- лицам, по роду учебной или профессиональной деятельности имеющим высокий риск заболевания гриппом или заражения им других лиц: " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- работникам медицинских и образовательных учреждений, транспорта, коммунальной и социальной сфер, полиции, военнослужащим и т.д. " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "Ознакомтесь с противопоказаниями для применения: " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- аллергические реакции на предшествующие прививки гриппозными вакцинами; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- аллергические реакции на куриный белок и другие компоненты вакцины; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "-  острые лихорадочные, острые инфекционные и неинфекционные заболевания, состояния или обострение хронического заболевания; " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "- возраст до 18 лет. " << endl;
		cout << "\t\t\t\t\t\t\t\t" << "Если вы ознакомились с показаниями и согласны на вакцинацию, нажмите 1. Несогласны - 2. Выйти в меню - 0: ";cin >> choise_intections_2;
		if (choise_intections_2 == 1)
		{
			cout << "\t\t\t\t\t\t\t" << "Хорошо, тогда запишем вас на приём на завтра в 11:00. Стоимость будет 1500 рублей. Вы согласны? 1 - да, 2 - нет: ";cin >> choise_intections_3;
			if (choise_intections_3 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда введите ваше имя: ";cin >> name;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Теперь фамилию: ";cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t\t" << "Хорошо, " << name << " ждём вас завтра в 11:00, желаете ознакомиться с нашим адресом/графиком работы? 1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда перенаправляем вас в главное меню...";
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
				cout << "\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда переводим вас в главное меню...";
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
			cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда переводим вас в главное меню...";
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
		cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t   " << "Выводим вас в главное меню..." << endl;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "Вам нужен массаж? Хорошо, мы проводим различные виды массажей, выберите какой нужен вам:" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << "1 - Антицеллюлитный массаж,  2 - Общий массаж, 0 - выйти в главное меню: ";cin >> choise_massage;
	switch (choise_massage)
	{
	case '1':
	{
		cout << "\t\t\t\t\t\t\t\t\t" << "Хорошо, вам нужен антицеллюлитный массаж. Выберите какой именно вам нужен: " << endl;
		cout << "\t\t\t\t" << "1 - Антицеллюлитный массаж спины (600 рублей); 2 - Антицеллюлитный массаж бедер, ягодиц, живота (1500 рублей); 3 - Антицеллюлитный массаж всего тела (1800 рублей); 0 - выйти в главное меню: ";cin >> aclmsg_ch;
		if (aclmsg_ch == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t" << "Вы выбрали антицеллюлитный массаж спины, чтож, у нас свободен сеанс на завтра в 12:00, вас устроит это время?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> aclmsg_ch_2;
			if (aclmsg_ch_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Олтично, тогда введите своё имя: ";cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "И вашу фамилию: ";cin >> surname;
				cout << "\t\t\t\t\t\t\t" << "Хорошо, " << name << " будем вас ждать завтра в 12:00! Оплата на месте. Желаете ознакомиться с нашим расписанием работы или адресом расположения?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда есть запись через 3 дня в 11:00, вас устроит данное время?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> aclmsg_ch_3;
				if (aclmsg_ch_3 == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Олтично, тогда введите своё имя: ";cin >> name;
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "И вашу фамилию: ";cin >> surname;
					cout << "\t\t\t\t\t\t\t" << "Хорошо, " << name << " будем вас ждать через 3 дня в 11:00! Оплата на месте. Желаете ознакомиться с нашим расписанием работы или адресом расположения?" << endl;
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
					cout << "\t\t\t\t\t\t\t\t " << "Чтож, тогда ничем не можем вам помочь, извините. Перенаправляем вас в главное меню." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t" << "Вы выбрали антицеллюлитный массаж бедер, ягодиц, живота, чтож, у нас свободен сеанс на завтра в 11:00, вас устроит это время?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> aclmsg_ch_2;
			if (aclmsg_ch_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Олтично, тогда введите своё имя: "; cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "И вашу фамилию: "; cin >> surname;
				cout << "\t\t\t\t\t\t\t" << "Хорошо, " << name << " будем вас ждать завтра в 11:00! Оплата на месте. Желаете ознакомиться с нашим расписанием работы или адресом расположения?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда есть запись через 2 дня также в 10:00, вас устроит данное время?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> aclmsg_ch_3;
				if (aclmsg_ch_3 == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Олтично, тогда введите своё имя: ";cin >> name;
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "И вашу фамилию: ";cin >> surname;
					cout << "\t\t\t\t\t\t\t" << "Хорошо, " << name << " будем вас ждать через 2 дня в 10:00! Оплата на месте. Желаете ознакомиться с нашим расписанием работы или адресом расположения?" << endl;
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет:";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t" << "Вы выбрали антицеллюлитный массаж всего тела, чтож, у нас свободен сеанс через 2 дня 9:00, вас устроит данное время?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> aclmsg_ch_2;
			if (aclmsg_ch_2 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Олтично, тогда введите своё имя: ";cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "И вашу фамилию: ";cin >> surname;
				cout << "\t\t\t\t\t\t\t" << "Хорошо, " << name << " будем вас ждать черещ 2 дня в 9:00! Оплата на месте. Желаете ознакомиться с нашим расписанием работы или адресом расположения?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда есть запись через 3 дня также в 12:00, вас устроит данное время?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет: ";cin >> aclmsg_ch_3;
				if (aclmsg_ch_3 == 1)
				{
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Олтично, тогда введите своё имя: "; cin >> name;
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "И вашу фамилию: "; cin >> surname;
					cout << "\t\t\t\t\t\t\t" << "Хорошо, " << name << " будем вас ждать через 3 дня в 12:00! Оплата на месте. Желаете ознакомиться с нашим расписанием работы или адресом расположения?" << endl;
					cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" "1 - да, 2 - нет: ";cin >> choise_operating;
					if (choise_operating == 1)
					{
						operating_mode();
					}
					else if (choise_operating == 2)
					{
						cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
					cout << "\n" << "\t\t\t\t\t\t\t\t " << "Чтож, тогда ничем не можем вам помочь, извините. Перенаправляем вас в главное меню." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t" << "Отлично, вы выбрали процедуру общего массажа! Она обойдётся вам в 5500 рублей за 10 сеансов, вы согласны?" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t" << "1 - да, 2 - нет." << endl;
		cin >> common_ch;
		if (common_ch == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда давайте назначим дату и время первого сеанса:" << endl;
			cout << "\t\t\t\t\t\t" << "1 - Понедельник, 17:00; 2 - Среда, 19:00; 3 - Пятница, 15:00; 4 - Суббота, 9:00; 5 - Суббота, 14:00; 6 - Воскресенье, 13:00; 0 - неподходит никакое время." << endl;
			cin >> common_ch_1;
			if (common_ch_1 == 1)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ваш сеанс будет в Понедельник в 17:00, введите своё имя: ";cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Теперь введите фамилию: ";cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "Отлично, " << name << " будем вас ждать в Понедельник в 17:00. Оплата на месте. Желаете ознакомиться с нашим адресом/временем работы?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - да, 2 - нет: ";cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ваш сеанс будет в Среду в 19:00, введите своё имя: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Теперь введите фамилию: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "Отлично, " << name << " будем вас ждать в Среду в 19:00. Оплата на месте. Желаете ознакомиться с нашим адресом/временем работы?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " "1 - да, 2 - нет." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ваш сеанс будет в Пятницу в 15:00, введите своё имя: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Теперь введите фамилию: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "Отлично, " << name << " будем вас ждать в Пятницу в 15:00. Оплата на месте. Желаете ознакомиться с нашим адресом/временем работы?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - да, 2 - нет." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ваш сеанс будет в Субботу в 14:00, введите своё имя: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Теперь введите фамилию: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "Отлично, " << name << " будем вас ждать в Субботу в 14:00. Оплата на месте. Желаете ознакомиться с нашим адресом/временем работы?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - да, 2 - нет." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ваш сеанс будет в Субботу в 14:00, введите своё имя: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Теперь введите фамилию: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "Отлично, " << name << " будем вас ждать в Субботу в 14:00. Оплата на месте. Желаете ознакомиться с нашим адресом/временем работы?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - да, 2 - нет." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, ваш сеанс будет в Воскресенье в 13:00, введите своё имя: " << endl;
				cin >> name;
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Теперь введите фамилию: " << endl;
				cin >> surname;
				cout << "\n" << "\t\t\t\t\t\t  " << "Отлично, " << name << " будем вас ждать в Воскресенье в 13:00. Оплата на месте. Желаете ознакомиться с нашим адресом/временем работы?" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t  " << "1 - да, 2 - нет." << endl;
				cin >> choise_operating;
				if (choise_operating == 1)
				{
					operating_mode();
				}
				else if (choise_operating == 2)
				{
					cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
				cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t\t " << "Хорошо, пересылаем вас в главное меню..." << endl;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Выберите какая именно консультация вам нужна: " << endl;
	cout << "\t\t\t\t\t\t\t" << "1 - детского психолога, 2 - врача-уролога, 3 - врача-хирурга, 4 - травматолога-ортопеда, 5 - психолога, 0 - выход из программы: "; cin >> ch_diagnost;
	if (ch_diagnost == '1')
	{
		cout << "\n" << "\t\t\t\t\t\t\t " << "Хорошо, вы выбрали детского психолога, есть приём на завтра в 13:00, стоимость - 500 рублей, вы согласны? 1 - да, 2 - нет: "; cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t   " << "Хорошо, ждём вас завтра в 13:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "Желаете ознакомиться с нашим адресом/расписанием работы? 1 - да, 2 - не: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
		cout << "\n" << "\t\t\t\t\t\t\t " << "Хорошо, вы выбрали врача-уролога, есть приём на завтра в 9:00, стоимость - 500 рублей, вы согласны? 1 - да, 2 - нет: ";cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t   " "Хорошо, ждём вас завтра в 9:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "Желаете ознакомиться с нашим адресом/расписанием работы? 1 - да, 2 - нет: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
		cout << "\n" << "\t\t\t\t\t\t\t " << "Хорошо, вы выбрали врача-хирурга, есть приём на завтра в 10:00, стоимость - 750 рублей, вы согласны? 1 - да, 2 - нет: "; cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t " << "Хорошо, ждём вас завтра в 10:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "Желаете ознакомиться с нашим адресом/расписанием работы? 1 - да, 2 - нет: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
			main();
		}
		else
		{
			error();
		}
	}
	else if (ch_diagnost == '4')
	{
		cout << "\n" << "\t\t\t\t\t\t\t " << "Хорошо, вы выбрали травматолога-ортопеда, есть приём через 2 дня в 11:00, стоимость - 400 рублей, вы согласны? 1 - да, 2 - нет: "; cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t " << "Хорошо, ждём вас через 2 дня в 11:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "Желаете ознакомиться с нашим адресом/расписанием работы? 1 - да, 2 - нет: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
		cout << "\n" << "\t\t\t\t\t\t\t " << "Хорошо, вы выбрали психолога, есть приём на завтра в 12:00, стоимость - 600 рублей, вы согласны? 1 - да, 2 - нет: "; cin >> ch_diagnost_1;
		if (ch_diagnost_1 == 1)
		{
			cout << "\n" << "\t\t\t\t\t\t\t " << "Хорошо, ждём вас завтра в 12:00!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t " << "Желаете ознакомиться с нашим адресом/расписанием работы? 1 - да, 2 - нет: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t" << "Жаль, ну тогда мы ничем вам не можем помочь, перенаправляем вас в главное меню" << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t\t " << "Хорошо, пересылаем вас в главное меню..." << endl;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t" << "Также в нашем заведении вы можете приобрести необходимые вам товары, список товаров: " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Жгут Эсмарка, 1 шт = 300р" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t       " << "Турникет CAT, 1 шт = 1000р" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "Жгут Альфа, 1 шт = 650р" << endl;
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Аптечка АИ-2, 1 шт = 2000р" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Аскорбиновая кислота драже №200, 1 шт = 30р" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "Терафлю, 1 шт = 350р" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t " << "Израильский бандаж (Bandage), 1 шт = 500р" << endl;
	cout << "\t\t\t\t\t\t\t\t\t" << "Если хотите увидеть более подробное описание каждого товара, введите 1, если нет, то 2: "; cin >> description_0;
	switch (description_0)
	{
	case '1':
	{
		description();
		break;
	}

	case '2':
	{
		cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Желаете купить какой-то товар? 1 - да, 2 - нет: "; cin >> choise_products;
		if (choise_products == 1)
		{
			buy();
		}
		else if (choise_products == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t" << "Хорошо, тогда переводим вас в главное меню...";
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t" << "  Список врачей нашего заведения: " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Терапевт - Прохоренко Михаил Дмитриевич. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Кардиолог - Филина Анастасия Максимовна. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Невролог - Гогин Кирилл Максимович. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Психиатр - Коновалов Богдан Евгеньевич. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Нарколог - Осипов Борис Дмитриевич. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Гинеколог - Медведева Ольга Николаевна. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Офтальмолог - Косяк Павел Александрович. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Врач-функциональной диагностики - Харламов Александр Леонидович. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Сонолог - Дегтярёва Елена Дмитриевна. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Терапевт - Криваносов Олег Николаевич. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Хирург - Дятчин Владимир Сергеевич. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Окулист - Михайловская София Дмитриевна. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Отоларинголог - Мозепа Лев Павлов. " << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Профпатолог - Григорьев Максим Григорьевич. " << "\n";
	cout << "\n" << "\t\t\t\t\t\t\t\t\t   " << "  Желаете вернуться в главное меню? 1 - да, 2 - нет: ";cin >> choise_list;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Описание какого товара вы бы хотели увидеть? " << endl;
	cout << "\t\t\t\t\t" << "1 - Жгут Эсмарка, 2 - Турникет CAT, 3 - Жгут Альфа, 4 - Аптечка АИ-2, 5 - Аскорбиновая кислота драже №200, 6 - Терафлю, 7 - Израильский бандаж (Bandage)." << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "  Введите цифру желаемого продукта: "; cin >> choise_desc;
	switch (choise_desc)
	{
	case '1':
	{
		cout << "\t\t\t\t\t\t" << "Жгуты Эсмарха задействуются в стационарных условиях и быту. Размеры: длина - 1400 мм, толщина - 25 мм. " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "Вы желаете приобрести данный товар? 1 - да, 2 - нет: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_first();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\t\t\t\t\t" << "Турникет САТ – это одно из лучших средств для остановки жизнеугрожающих кровотечений конечностей. Возможна работа одной рукой. Общая длина 95см. " << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "Вы желаете приобрести данный товар? 1 - да, 2 - нет: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_two();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\t\t\t" << "Жгут кровоостанавливающий резиновый рифлёный с застёжкой в виде петли Альфа. Предназначен для временной остановки кровотечений, включая артериальные. Размер 750х27х5мм, вес 80 гр." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "Вы желаете приобрести данный товар? 1 - да, 2 - нет: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_three();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\t\t\t\t\t" << "АИ - 2 содержит медицинские средства защиты и предназначена для оказания самопомощи и взаимопомощи при ранениях и ожогах." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "Вы желаете приобрести данный товар? 1 - да, 2 - нет: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_four();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\t\t" << "Аскорбиновая кислота, производства компании Фармстандарт, представлена в форме драже. В упаковке находится 200 штук драже, массой 0,25 г каждая.ой системы, кожи, суставов, кровеносных сосудов и нервной системы." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "Вы желаете приобрести данный товар? 1 - да, 2 - нет: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_five();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\t\t\t\t\t" << "ТераФлю - комбинированный препарат для устранения симптомов простуды (ОРЗ, ОРВИ), действие которого обусловлено входящими в его состав компонентами." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "Вы желаете приобрести данный товар? 1 - да, 2 - нет: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_six();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t" << "Стерильная компрессионная повязка с впитывающей подушкой, пришитой к одному из ее концов." << endl;
		cout << "\t\t\t\t\t\t\t\t\t" << "Вы желаете приобрести данный товар? 1 - да, 2 - нет: "; cin >> choise_desc_1;
		if (choise_desc_1 == 1)
		{
			purchase_seven();
		}
		else if (choise_desc_1 == 2)
		{
			cout << "\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Вы решили приобрести 'Жгут Эсмарка', отлично!" << endl;
	cout << "\t\t\t\t\t\t" << "  1 такой обойдётся вам в 300 рублей, какое количество вы хотиет заказать? Учтите, что у нас на складе есть всего 100 штук под заказ: "; cin >> quantity;
	if (quantity <= 100 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "Хорошо, вы решили заказать " << quantity << " 'жгут Эсмарка', это вам обойдётся в " << price_1 * quantity << " рублей, вы подтверждаете заказ? 1 - да, 2 - нет: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите ваше имя: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите вашу фамилию: "; cin >> surname;
			cout << "\t\t\t\t\t" << "Отлично! Ваш заказ будет готов завтра утром с началом нашего рабочего дня. Оплата на месте. Желаете ознакомиться с нашим расписанием работы/нашим адресом? 1 - да, 2 - нет: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t" << "Раз вы не желаете покупать товар, возвращаем вас в главное меню..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 100)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "У нас нет такого количества товара..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню...";
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Вы решили приобрести 'Турникет Cat', отлично!" << endl;
	cout << "\t\t\t\t\t\t" << "1 такой обойдётся вам в 1000 рублей, какое количество вы хотиет заказать? Учтите, что у нас на складе есть всего 50 штук под заказ: ";cin >> quantity;
	if (quantity <= 50 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "Хорошо, вы решили заказать " << quantity << " 'Турникет CAT', это вам обойдётся в " << price_2 * quantity << " рублей, вы подтверждаете заказ? 1 - да, 2 - нет: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите ваше имя: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите вашу фамилию: "; cin >> surname;
			cout << "\t\t\t\t\t" << "Отлично! Ваш заказ будет готов завтра утром с началом нашего рабочего дня. Оплата на месте. Желаете ознакомиться с нашим расписанием работы/нашим адресом? 1 - да, 2 - нет: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t" << "Раз вы не желаете покупать товар, возвращаем вас в главное меню..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 50)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "У нас нет такого количества товара..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню...";
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Вы решили приобрести 'Жгут Альфа', отлично!" << endl;
	cout << "\t\t\t\t\t\t" << "1 такой обойдётся вам в 650 рублей, какое количество вы хотиет заказать? Учтите, что у нас на складе есть всего 100 штук под заказ: ";cin >> quantity;
	if (quantity <= 100 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "Хорошо, вы решили заказать " << quantity << " 'жгутов Альфа', это вам обойдётся в " << price_3 * quantity << " рублей, вы подтверждаете заказ? 1 - да, 2 - нет: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите ваше имя: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите вашу фамилию: "; cin >> surname;
			cout << "\t\t\t\t\t" << "Отлично! Ваш заказ будет готов завтра утром с началом нашего рабочего дня. Оплата на месте. Желаете ознакомиться с нашим расписанием работы/нашим адресом? 1 - да, 2 - нет: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t" << "Раз вы не желаете покупать товар, возвращаем вас в главное меню..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 100)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "У нас нет такого количества товара..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню...";
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Вы решили приобрести 'Аптечка АИ-2', отлично!" << endl;
	cout << "\t\t\t\t\t\t" << "1 такой обойдётся вам в 2000 рублей, какое количество вы хотиет заказать? Учтите, что у нас на складе есть всего 30 штук под заказ: ";cin >> quantity;
	if (quantity <= 30 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "Хорошо, вы решили заказать " << quantity << " 'аптечка АИ-2', это вам обойдётся в " << price_4 * quantity << " рублей, вы подтверждаете заказ? 1 - да, 2 - нет: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите ваше имя: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите вашу фамилию: "; cin >> surname;
			cout << "\t\t\t\t\t" << "Отлично! Ваш заказ будет готов завтра утром с началом нашего рабочего дня. Оплата на месте. Желаете ознакомиться с нашим расписанием работы/нашим адресом? 1 - да, 2 - нет: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t" << "Раз вы не желаете покупать товар, возвращаем вас в главное меню..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 30)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "У нас нет такого количества товара..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню...";
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Вы решили приобрести 'Аскорбиновая кислота драже №200', отлично!" << endl;
	cout << "\t\t\t\t\t\t" << "1 такой обойдётся вам в 30 рублей, какое количество вы хотиет заказать? Учтите, что у нас на складе есть всего 200 штук под заказ: ";cin >> quantity;
	if (quantity <= 200 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "Хорошо, вы решили заказать " << quantity << " 'аскорбиновая кислота', это вам обойдётся в " << price_5 * quantity << " рублей, вы подтверждаете заказ? 1 - да, 2 - нет: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите ваше имя: "; cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите вашу фамилию: "; cin >> surname;
			cout << "\t\t\t\t\t" << "Отлично! Ваш заказ будет готов завтра утром с началом нашего рабочего дня. Оплата на месте. Желаете ознакомиться с нашим расписанием работы/нашим адресом? 1 - да, 2 - нет: "; cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t" << "Раз вы не желаете покупать товар, возвращаем вас в главное меню..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 200)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "У нас нет такого количества товара..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню...";
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Вы решили приобрести 'Терафлю', отлично!" << endl;
	cout << "\t\t\t\t\t\t" << "1 такой обойдётся вам в 350 рублей, какое количество вы хотиет заказать? Учтите, что у нас на складе есть всего 20 штук под заказ: ";cin >> quantity;
	if (quantity <= 20 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "Хорошо, вы решили заказать " << quantity << " 'терафлю', это вам обойдётся в " << price_6 * quantity << " рублей, вы подтверждаете заказ? 1 - да, 2 - нет: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите ваше имя: ";cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите вашу фамилию: ";cin >> surname;
			cout << "\t\t\t\t\t" << "Отлично! Ваш заказ будет готов завтра утром с началом нашего рабочего дня. Оплата на месте. Желаете ознакомиться с нашим расписанием работы/нашим адресом? 1 - да, 2 - нет: ";cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t" << "Раз вы не желаете покупать товар, возвращаем вас в главное меню..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 20)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "У нас нет такого количества товара..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню...";
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "Вы решили приобрести 'Израильский бандаж', отлично!" << endl;
	cout << "\t\t\t\t\t\t" << "1 такой обойдётся вам в 500 рублей, какое количество вы хотиет заказать? Учтите, что у нас на складе есть всего 60 штук под заказ: ";cin >> quantity;
	if (quantity <= 60 && quantity >= 1)
	{
		cout << "\t\t\t\t\t\t\t" << "Хорошо, вы решили заказать " << quantity << " 'Израильский бандаж', это вам обойдётся в " << price_7 * quantity << " рублей, вы подтверждаете заказ? 1 - да, 2 - нет: ";cin >> confirmation;
		if (confirmation == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите ваше имя: ";cin >> name;
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Введите вашу фамилию: ";cin >> surname;
			cout << "\t\t\t\t\t" << "Отлично! Ваш заказ будет готов завтра утром с началом нашего рабочего дня. Оплата на месте. Желаете ознакомиться с нашим расписанием работы/нашим адресом? 1 - да, 2 - нет: ";cin >> choise_operating;
			if (choise_operating == 1)
			{
				operating_mode();
			}
			else if (choise_operating == 2)
			{
				cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
			cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t  " << "Хорошо, тогда переводим вас в основное меню..." << endl;
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
		cout << "\t\t\t\t\t\t\t\t\t\t" << "Раз вы не желаете покупать товар, возвращаем вас в главное меню..." << endl;
		Sleep(500);
		system("cls");
		main();
	}
	else if (quantity > 60)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "У нас нет такого количества товара..." << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Перенаправляем вас в главное меню...";
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t\t" << "   Адрес - ул.Ушинского, д. 1А." << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t  " << "     Наш режим работы: " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Понедельник - Пятница, с 7:30 до 20:00" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t      " <<   "Суббота, с 8:00 до 15:00" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t     " <<   "Воскресенье, с 9:00 до 14:00" << endl;
	cout << "\t\t\t\t\t\t\t\t\t" << "  Вы ознакомились с нашим режимом работы, в какое меню хотите перейти?" << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "  1 - Главное меню, 0 - выход из программы: "; cin >> choise_operating;
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
	cout << "\n" << "\t\t\t\t\t\t\t\t\t\t  " << "На выбор есть 7 товаров:" << endl;
	cout << "\t\t\t\t" << "1 - Жгут Эсмарка, 2 - Турникет CAT, 3 - Жгут Альфа, 4 - Аптечка АИ-2, 5 - Аскорбиновая кислота драже №200, 6 - Терафлю, 7 - Израильский бандаж (Bandage)." << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << "Введите цифру желаемого продукта: "; cin >> choise_desc;
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
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << " Ошибка! Неккоректный ввод!" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << " Программа завершает работу!";
	Sleep(1000);
}

void exit()
{
	cout << "\t\t\t\t\t\t\t\t\t\t\t" << "Программа завершает работу...";
	Sleep(1000);
}



