#include <iostream>
#include <fstream>
#include<iostream>
#include<windows.h> 
#include<iomanip>
#include<conio.h>
#include<time.h>
#include <stdio.h>
#include <io.h>

#define LIGHTBLUE 9 
#define MAX_COLS 32768
#pragma warning(disable:4996)
using namespace std;

#define YEAR 1980
#define MONTH 1
#define DAY 1
#define WEEK 1 // 0 : Monday ... 5 : Saturday

void diary();
void date();
void rediary();
char search;
void bye();

void gotoxy(int x, int y)//x����y����
{
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

void mainview(){
	system("color 3f");
	system("mode con:cols=100 lines=40"); //������â
	int a = 0;

	cout << endl;
	cout << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                          1. ���̾����                               �������" << endl;
	cout << "  �������                          2. Ķ����                                     �������" << endl;
	cout << "  �������                          3. ���̾�ҷ�����                           �������" << endl;
	cout << "  �������                          4. ����                                       �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                          �޴��� �����ϼ���                             �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;

	gotoxy(58, 26);

	while (1){
		gotoxy(58, 26);
		cin >> a;
		switch (a){
		case 1:
			diary(); break;
		case 2:
			date(); break;
		case 3:
			rediary(); break;
		case 4:
			bye();
		
		}
	}
}

void diary(){
	system("cls");
	system("color 3f");
	time_t timer;
	struct tm *t;
	int a, b = 72;
	int year = 0;
	int month = 0;
	int day = 0;
	timer = time(NULL); // ���� �ð��� �� ������ ���
	t = localtime(&timer); // �� ������ �ð��� �и��Ͽ� ����ü�� �ֱ�

	cout << endl;
	cout << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                          ������ �Է��ϼ���                             �������" << endl;
	cout << "  �������                           ���� �Է��ϼ���                              �������" << endl;
	cout << "  �������                           ���� �Է��ϼ���                              �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                    ���� :        �� :     �� :                         �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	gotoxy(41, 21);
	cin >> year;
	while (year<0 || year>	t->tm_year + 1900){
		gotoxy(40, 23);
		cout << "�ٽ��Է��ϼ���!!";
		gotoxy(41, 21);
		cin >> year;
		break;
	}
	gotoxy(53, 21);
	cin >> month;
	while (month<0 || month>12){
		gotoxy(40, 23);
		cout << "�ٽ��Է��ϼ���!!";
		gotoxy(53, 21);
		cin >> month;
		break;
	}
	gotoxy(61, 21);
	cin >> day;
	while (day<0 || day>31){
		gotoxy(40, 23);
		cout << "�ٽ��Է��ϼ���!!";
		gotoxy(61, 21);
		cin >> day;
		break;
	}

	system("cls");

	cout << endl;
	cout << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������ctrl+z�� �Է��ϸ� ���ε�������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	gotoxy(30, 10);
	
	FILE *fp;
	char today[100];
	sprintf(today, "%d%d%d", year, month, day);
	int open, write;
	
	fp = fopen(today, "w");
	int s = 0;

	while ((write = getchar()) != EOF){
		gotoxy(30, 11 + s);
		if (write == '\n'){
			s++;
		}
		putc(write, fp);
	}
	fclose(fp);


	gotoxy(30, 11 + s);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 59);
	cout << "���ε� �Ϸ�" << endl;
	gotoxy(30, 11 + s+1);
	cout << "�ڵ����� ����ȭ������ ���ϴ�." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63); //���� ����� ���ư�

	Sleep(2000);

	system("cls");
	mainview(); //����ȭ������ 

}

void rediary(){
	char move = '0';
	system("cls");
	system("color 3f");
	int s = 0;
	time_t timer;
	struct tm *t;
	timer = time(NULL); // ���� �ð��� �� ������ ���
	t = localtime(&timer); // �� ������ �ð��� �и��Ͽ� ����ü�� �ֱ�
	int year = 0;
	int month = 0;
	int day = 0;

	cout << endl;
	cout << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  ��������������������  ���̾�ҷ�����  ��������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                           ������ �Է��ϼ���                            �������" << endl;
	cout << "  �������                            ���� �Է��ϼ���                             �������" << endl;
	cout << "  �������                            ���� �Է��ϼ���                             �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                    ���� :        �� :     �� :                         �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;

	gotoxy(41, 21);
	cin >> year;
	while (year<0 || year>	t->tm_year + 1900){
		gotoxy(40, 23);
		cout << "�ٽ��Է��ϼ���!!";
		gotoxy(41, 21);
		cin >> year;
		break;
	}

	gotoxy(53, 21);
	cin >> month;
	while (month<0 || month>12){
		gotoxy(40, 23);
		cout << "�ٽ��Է��ϼ���!!";
		gotoxy(53, 21);
		cin >> month;
		break;
	}

	gotoxy(61, 21);
	cin >> day;

	while (day<0 || day>31){
		gotoxy(40, 23);
		cout << "�ٽ��Է��ϼ���!!";
		gotoxy(61, 21);
		cin >> day;
		break;
	}

	system("cls");

	cout << endl;
	cout << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  ��������������������  ���̾�ҷ�����  ��������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  ��������      �����                                        �����      ��������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������                                                                        �������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;
	cout << "  �������������������������������������������������" << endl;

	char today[100];
	sprintf(today, "%d%d%d", year, month, day);

	FILE *fp;

	fopen_s(&fp, today, "r");

	if (fp == NULL)
	{
		gotoxy(30,11);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 59);
		cout << "�����Ͻ� ��¥�� ���̾�� �����ϴ�." << endl;
		gotoxy(30, 12);
		cout << "���α׷��� �����մϴ�." << endl;
		gotoxy(30, 13);
		exit(0);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63);

	}
	char w[MAX_COLS]; // ���� 1�پ� �ӽ÷� ����� ����

	while (fgets(w, MAX_COLS, fp) != NULL){ //1�پ� ��� 
		gotoxy(30, 11 + s);
		printf("%s", w);
		s++;
	}

	gotoxy(30, 11 + s + 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 59);
	cout << "ESC�� ������ ����ȭ������ ���ϴ�." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63); //���� ����� ���ư�

	move = _getch();
	if (move == 27){ //esc������ ����ȭ��
		system("cls");
		mainview(); 
	}

}

int CheckYUN(int parm_year) //�޷� ���� üũ
{
	if ((parm_year % 4 == 0 && parm_year % 100 != 0) || parm_year % 400 == 0)
		return 29;
	else return 28;
}

void date(){

	int a, b = 72;
	char move = '0'; // �ؿ� ���� �̵��ϱ� ���� flag
	char *p_week[] = { "Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun" };
	int month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day, year, month;
	int input_year, input_month;
	int standard_year = YEAR;
	int standard_month = MONTH;
	int standard_week = WEEK;
	int first_week, i, j; // �Ŵ� 1���� ����
	int differ_day; // �����ϰ��� ���� 
	int week_count = 0; // ���ֿ��� ���� �������� ��¥�� ��ġ�� üũ

	system("cls");

	while (1) {
		system("cls");

		cout << endl;
		cout << endl;
		cout << "  �������������������������������������������������" << endl;
		cout << "  �������������������������������������������������" << endl;
		cout << "  �������������������������������������������������" << endl;
		cout << "  �������������������������������������������������" << endl;
		cout << "  �������������������������������������������������" << endl;
		cout << "  ��������      �����                                        �����      ��������" << endl;
		cout << "  ��������      �����                                        �����      ��������" << endl;
		cout << "  ��������      �����                                        �����      ��������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                  ���ϴ� ������ �Է��ϼ���                              �������" << endl;
		cout << "  �������                    ���ϴ� ���� �Է��ϼ���                              �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������                                                                        �������" << endl;
		cout << "  �������������������������������������������������" << endl;
		cout << "  �������������������������������������������������" << endl;
		cout << "  �������������������������������������������������" << endl;
		cout << "  �������������������������������������������������" << endl;
		cout << "  �������������������������������������������������" << endl;

		// �ؿ� ���� �Է� �޴´�...
		gotoxy(58, 19);
		cin >> input_year;

		gotoxy(58, 20);
		cin >> input_month;

		year = input_year;
		month = input_month;

		while (1) {
			system("cls");

			day = 0;
			differ_day = 0;

			// �ؿ� ���� �̵�
			switch (move)
			{
			case 75: // ���� ��
				if (month == 1) {
					month = 12;
					year -= 1;
				}
				else month -= 1;
				break;

			case 77: // ���� ��
				if (month == 12) {
					month = 1;
					year += 1;
				}
				else month += 1;
				break;

			case 27: // ����ȭ��
				system("cls");
				mainview();

			default:;
			}

			// �ش� �� 1���� ���� ���ϱ�
			// �����ϰ��� ���� 7�� ���� ������ �̿�

			// ������ ���� 
			if (year >= standard_year) {
				for (i = year; i >= standard_year; --i) {
					if (i > standard_year) {
						month_days[1] = CheckYUN(i - 1);
						// �����̸� 366��, �ƴϸ� 365�� 
						differ_day += 337 + month_days[1];
					}
					else {
						month_days[1] = CheckYUN(year);
						for (j = month; j > standard_month; --j) differ_day += month_days[j - 2];
					}
				}
			}
			// ������ ����
			else {
				for (i = year; i < standard_year; ++i) {
					if (i < standard_year - 1) {
						month_days[1] = CheckYUN(i + 1);
						differ_day += 337 + month_days[1];
					}
					else {
						month_days[1] = CheckYUN(year);
						for (j = month; j <= 12; ++j) differ_day += month_days[j - 1];
					}
				}
			}

			// 7�� ������ �������� 0�̸� �����ϰ� ���� ����
			if (year >= standard_year) first_week = (int)(standard_week + differ_day % 7) % 7;
			else first_week = (int)(standard_week - differ_day % 7) % 7;
			// first_week�� ������ �� ����ŭ ���Ѵ�.
			if (first_week < 0) first_week = standard_week - first_week;

			

			// ���.......

			cout << endl;
			cout << endl;
			cout << "  �������������������������������������������������" << endl;
			cout << "  �������������������������������������������������" << endl;
			cout << "  �����������������ᢷ�� ��ư �̿��� Ķ���� �̵�������������������" << endl;
			cout << "  �������������������������������������������������" << endl;
			cout << "  �������������������������������������������������" << endl;
			cout << "  ��������      �����                                        �����      ��������" << endl;
			cout << "  ��������      �����                                        �����      ��������" << endl;
			cout << "  ��������      �����                                        �����      ��������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                         "; printf(" ������% 4d �⢷����", year);cout<<"                          �������" << endl;
			cout << "  �������                             "; printf(" ����% 2d ������", month); cout << "                             �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������                                                                        �������" << endl;
			cout << "  �������������������������������������������������" << endl;
			cout << "  �������������������������������������������������" << endl;
			cout << "  ���� ESC�� ������ ����ȭ������������������������������������" << endl;
			cout << "  �������������������������������������������������" << endl;
			cout << "  �������������������������������������������������" << endl;
			
			char today[100];
			gotoxy(37, 16);
			month_days[1] = CheckYUN(year);
			ifstream read;
			for (i = 0; i < 7; ++i) printf("%s ", p_week[i]);
			for (i = 0; i < month_days[month - 1] + first_week; ++i) {
				if (i % 7 == 0) {
					printf("\n\n\t\t\t\t    ");
					week_count = 0;
				}
				if (i >= first_week) {
					sprintf(today, "%d%d%d.txt", year, month, day);
					read.open("today");
					day++;
					if (read.fail())
						printf("%3d ", day);
					else{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 59);
						printf("%3d ", day);
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63); //���� ����� ���ư�
					}
						
					week_count++;
				}
				else printf("%4s", "* ");
			}
			for (i = week_count - 1; i < 6; i++) printf("  * ");

			// �޷� �̵��� ���� �ɼ� ����
			move = _getch();
		}
	}
}

void bye(){
	system("cls");
	system("color 3f");
	gotoxy(30, 10);
	cout << "���� ����� �Ϸ絵 �ູ�ϱ⸦!" << endl;
	gotoxy(30, 11);
	cout << "�ϱ����� �����մϴ�." << endl;
	gotoxy(30, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 59);
	exit(0);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63); //���� ����� ���ư�
}


int main(){
	mainview();

}