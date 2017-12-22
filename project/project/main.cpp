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

void gotoxy(int x, int y)//x가로y세로
{
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

void mainview(){
	system("color 3f");
	system("mode con:cols=100 lines=40"); //사이즈창
	int a = 0;

	cout << endl;
	cout << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■□□□□■■■■■■■■■■■■■■■■■■■■□□□□■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                          1. 다이어리쓰기                               ■■■■■■" << endl;
	cout << "  ■■■■■■                          2. 캘린더                                     ■■■■■■" << endl;
	cout << "  ■■■■■■                          3. 다이어리불러오기                           ■■■■■■" << endl;
	cout << "  ■■■■■■                          4. 종료                                       ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                          메뉴를 선택하세요                             ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

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
	timer = time(NULL); // 현재 시각을 초 단위로 얻기
	t = localtime(&timer); // 초 단위의 시간을 분리하여 구조체에 넣기

	cout << endl;
	cout << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■□□□□■■■■■■■■■■■■■■■■■■■■□□□□■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                          연도를 입력하세요                             ■■■■■■" << endl;
	cout << "  ■■■■■■                           달을 입력하세요                              ■■■■■■" << endl;
	cout << "  ■■■■■■                           일을 입력하세요                              ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                    연도 :        월 :     일 :                         ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	gotoxy(41, 21);
	cin >> year;
	while (year<0 || year>	t->tm_year + 1900){
		gotoxy(40, 23);
		cout << "다시입력하세요!!";
		gotoxy(41, 21);
		cin >> year;
		break;
	}
	gotoxy(53, 21);
	cin >> month;
	while (month<0 || month>12){
		gotoxy(40, 23);
		cout << "다시입력하세요!!";
		gotoxy(53, 21);
		cin >> month;
		break;
	}
	gotoxy(61, 21);
	cin >> day;
	while (day<0 || day>31){
		gotoxy(40, 23);
		cout << "다시입력하세요!!";
		gotoxy(61, 21);
		cin >> day;
		break;
	}

	system("cls");

	cout << endl;
	cout << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■ctrl+z를 입력하면 업로드■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■□□□□■■■■■■■■■■■■■■■■■■■■□□□□■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
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
	cout << "업로드 완료" << endl;
	gotoxy(30, 11 + s+1);
	cout << "자동으로 메인화면으로 갑니다." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63); //원래 색깔로 돌아감

	Sleep(2000);

	system("cls");
	mainview(); //메인화면으로 

}

void rediary(){
	char move = '0';
	system("cls");
	system("color 3f");
	int s = 0;
	time_t timer;
	struct tm *t;
	timer = time(NULL); // 현재 시각을 초 단위로 얻기
	t = localtime(&timer); // 초 단위의 시간을 분리하여 구조체에 넣기
	int year = 0;
	int month = 0;
	int day = 0;

	cout << endl;
	cout << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■  다이어리불러오기  ■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■□□□□■■■■■■■■■■■■■■■■■■■■□□□□■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                           연도를 입력하세요                            ■■■■■■" << endl;
	cout << "  ■■■■■■                            달을 입력하세요                             ■■■■■■" << endl;
	cout << "  ■■■■■■                            일을 입력하세요                             ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                    연도 :        월 :     일 :                         ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

	gotoxy(41, 21);
	cin >> year;
	while (year<0 || year>	t->tm_year + 1900){
		gotoxy(40, 23);
		cout << "다시입력하세요!!";
		gotoxy(41, 21);
		cin >> year;
		break;
	}

	gotoxy(53, 21);
	cin >> month;
	while (month<0 || month>12){
		gotoxy(40, 23);
		cout << "다시입력하세요!!";
		gotoxy(53, 21);
		cin >> month;
		break;
	}

	gotoxy(61, 21);
	cin >> day;

	while (day<0 || day>31){
		gotoxy(40, 23);
		cout << "다시입력하세요!!";
		gotoxy(61, 21);
		cin >> day;
		break;
	}

	system("cls");

	cout << endl;
	cout << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■  다이어리불러오기  ■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■□□□□■■■■■■■■■■■■■■■■■■■■□□□□■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

	char today[100];
	sprintf(today, "%d%d%d", year, month, day);

	FILE *fp;

	fopen_s(&fp, today, "r");

	if (fp == NULL)
	{
		gotoxy(30,11);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 59);
		cout << "선택하신 날짜에 다이어리가 없습니다." << endl;
		gotoxy(30, 12);
		cout << "프로그램을 종료합니다." << endl;
		gotoxy(30, 13);
		exit(0);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63);

	}
	char w[MAX_COLS]; // 행이 1줄씩 임시로 저장될 버퍼

	while (fgets(w, MAX_COLS, fp) != NULL){ //1줄씩 출력 
		gotoxy(30, 11 + s);
		printf("%s", w);
		s++;
	}

	gotoxy(30, 11 + s + 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 59);
	cout << "ESC를 누르면 메인화면으로 갑니다." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63); //원래 색깔로 돌아감

	move = _getch();
	if (move == 27){ //esc누르면 메인화면
		system("cls");
		mainview(); 
	}

}

int CheckYUN(int parm_year) //달력 윤년 체크
{
	if ((parm_year % 4 == 0 && parm_year % 100 != 0) || parm_year % 400 == 0)
		return 29;
	else return 28;
}

void date(){

	int a, b = 72;
	char move = '0'; // 해와 월을 이동하기 위한 flag
	char *p_week[] = { "Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun" };
	int month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day, year, month;
	int input_year, input_month;
	int standard_year = YEAR;
	int standard_month = MONTH;
	int standard_week = WEEK;
	int first_week, i, j; // 매달 1일의 요일
	int differ_day; // 기준일과의 차이 
	int week_count = 0; // 한주에서 현재 진행중인 날짜의 위치를 체크

	system("cls");

	while (1) {
		system("cls");

		cout << endl;
		cout << endl;
		cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
		cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
		cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
		cout << "  ■■■■■■■■■■□□□□■■■■■■■■■■■■■■■■■■■■□□□□■■■■■■■■■■" << endl;
		cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
		cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
		cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                  원하는 연도를 입력하세요                              ■■■■■■" << endl;
		cout << "  ■■■■■■                    원하는 달을 입력하세요                              ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
		cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

		// 해와 달을 입력 받는다...
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

			// 해와 월을 이동
			switch (move)
			{
			case 75: // 지난 달
				if (month == 1) {
					month = 12;
					year -= 1;
				}
				else month -= 1;
				break;

			case 77: // 다음 달
				if (month == 12) {
					month = 1;
					year += 1;
				}
				else month += 1;
				break;

			case 27: // 메인화면
				system("cls");
				mainview();

			default:;
			}

			// 해당 월 1일의 요일 정하기
			// 기준일과의 차를 7로 나눈 나머지 이용

			// 기준일 이후 
			if (year >= standard_year) {
				for (i = year; i >= standard_year; --i) {
					if (i > standard_year) {
						month_days[1] = CheckYUN(i - 1);
						// 윤년이면 366일, 아니면 365일 
						differ_day += 337 + month_days[1];
					}
					else {
						month_days[1] = CheckYUN(year);
						for (j = month; j > standard_month; --j) differ_day += month_days[j - 2];
					}
				}
			}
			// 기준일 이전
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

			// 7로 나누어 나머지가 0이면 기준일과 같은 요일
			if (year >= standard_year) first_week = (int)(standard_week + differ_day % 7) % 7;
			else first_week = (int)(standard_week - differ_day % 7) % 7;
			// first_week가 음수면 그 수만큼 더한다.
			if (first_week < 0) first_week = standard_week - first_week;

			

			// 출력.......

			cout << endl;
			cout << endl;
			cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
			cout << "  ■■■■■■■■■■■□□■■■■◁▷ 버튼 이용해 캘린더 이동■■■■□□■■■■■■■■■■■" << endl;
			cout << "  ■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■" << endl;
			cout << "  ■■■■■■■■■■□□□□■■■■■■■■■■■■■■■■■■■■□□□□■■■■■■■■■■" << endl;
			cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
			cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
			cout << "  ■■■■■■■      □□□□                                        □□□□      ■■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                         "; printf(" ▷▷▷% 4d 년◁◁◁", year);cout<<"                          ■■■■■■" << endl;
			cout << "  ■■■■■■                             "; printf(" ▷▷% 2d 월◁◁", month); cout << "                             ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■                                                                        ■■■■■■" << endl;
			cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "  ■■■ ESC를 누르면 메인화면■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			
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
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63); //원래 색깔로 돌아감
					}
						
					week_count++;
				}
				else printf("%4s", "* ");
			}
			for (i = week_count - 1; i < 6; i++) printf("  * ");

			// 달력 이동을 위한 옵션 선택
			move = _getch();
		}
	}
}

void bye(){
	system("cls");
	system("color 3f");
	gotoxy(30, 10);
	cout << "오늘 당신의 하루도 행복하기를!" << endl;
	gotoxy(30, 11);
	cout << "일기장을 종료합니다." << endl;
	gotoxy(30, 12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 59);
	exit(0);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 63); //원래 색깔로 돌아감
}


int main(){
	mainview();

}