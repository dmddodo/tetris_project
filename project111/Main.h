#pragma once
#include<iostream>
#include<string>
#include <windows.h>
#include "Define.h"
#include <conio.h> //�ܼ� ����� �Լ�
using namespace std;


//Ŀ��
void CursorView(char show);

//���� �޴� Ŭ����
class MainMenu {
public:
    MainMenu() {
        cout << "\n\n\n\n";
        cout << "\t\t"; cout << "@@@@@@@@@@@@  @@@@@@@@@   @@@@@@@@@@@  @@@@@@@@   @   @@@@@@@@@@@\n";
        cout << "\t\t"; cout << "      @       @                @       @      @   @   @          \n";
        cout << "\t\t"; cout << "      @       @                @       @      @   @   @          \n";
        cout << "\t\t"; cout << "      @       @@@@@@@@@        @       @     @    @   @@@@@@@@@@@\n";
        cout << "\t\t"; cout << "      @       @                @       @ @ @      @             @\n";
        cout << "\t\t"; cout << "      @       @                @       @     @    @             @\n";
        cout << "\t\t"; cout << "      @       @@@@@@@@@        @       @      @   @   @@@@@@@@@@@\n\n\n\n\n";
        cout << "\t\t"; cout << "                ������ �����Ϸ��� �ƹ�Ű�� ��������.\n\n\n\n\n\n\n";

        cout << "\t\t"; cout << "                   TetrisGame1.5 By SeokJinLee\n";

        getchar(); // �ƹ�Ű �Է� ��ٸ�
        system("cls"); // �ܼ� â clear
    }
};


