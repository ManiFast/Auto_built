#include <iostream>
#include <string>
#include <fstream>
#include <future>
#include <thread>
#include <Windows.h>

using namespace std;

//==========================================+
//------------------------------------------|
//					About project									  |
//------------------------------------------|
//				Name: Auto_built								  |
//				Date: 2/21/2021									  |
//			Author: Stas (ManiFast)						  |
//		 License: Apache License 2.0 (GitHub) |	
//									 								 			  |
//------------------------------------------|
//					What is it doing ?							|
//------------------------------------------|
//	Сreates a file under the control			  |
// of AHK that adjusts to the assigned			|
// button values, which emulates keystrokes |
// from the keyboard in the game itself			|
// for quick construction.									|
//==========================================+


void load()
{
	cout << endl;
	float progress = 0.00;

	while (progress < 1.02)
	{
		int barWidth = 40;
		int pos = barWidth * progress;
		Sleep(40);

		cout << "[";
		for (int i = 0; i < barWidth; i++)
		{
			if (i < pos) cout << "=";
			else if (i == pos) cout << ">";
			else cout << " ";
		}
		cout << "] " << int(progress * 100.0) << " %\r";
		cout.flush();

		progress += 0.04;
	}

	Sleep(100);

	cout << "[File created successfully !]                                                      ";


	cout << endl;
}

void Stas(int r, int lb, int d)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, d);

	cout << "*==============*\n";

	cout << "***************\r";
	Sleep(100);
	cout << "$(9%424 $^ &*@^\r";
	Sleep(100);
	cout << "(32#!^^ 4H fe52\r";
	Sleep(100);
	cout << ">>/fgsR#3Q4g4GE\r";
	Sleep(100);
	cout << "$#@^@Sa he $#Hs\r";
	Sleep(100);
	cout << ">>/fgsR#Eerwgv2\r";
	Sleep(100);
	cout << "@#@(*24 rw GjE3\r";
	Sleep(100);
	cout << "Рары?№3 #f Jfd@\r";
	Sleep(100);
	cout << ">>/fgsR#E$#q@g#\r";
	Sleep(100);
	cout << "|+3015_ +_ >gR%\r";
	Sleep(100);
	cout << ">>/fgsR#E$#q@g#\r";
	Sleep(100);
	cout << ">>/fgsR#Eerwgv2\r";
	Sleep(100);
	cout << "C#@(*24 rw GjE3\r";
	cout << "C$#5643 $g 43#$\r";
	Sleep(100);
	cout << "Cr#$433 3# gE$#\r";
	cout << "Cr/fgsR#E$#q@g#\r";
	Sleep(100);
	cout << "Cre&#2! Hd {/P]\r";
	cout << "Cre$#8h $G tH23\r";
	Sleep(100);
	cout << "Crea bdf@$#//zd\r";
	cout << "Crea $#@785 4{#\r";
	Sleep(100);
	cout << "Creatdf *( >m,v\r";
	cout << "Creat#$ $h bju7\r";
	Sleep(100);
	cout << "CreateR#Eerwgv2\r";
	cout << "Create- (= *&#$\r";
	Sleep(100);
	cout << "Created rw GjE3\r";
	cout << "Created H4 hj;L\r";
	Sleep(100);
	cout << "Created bf Jfd@\r";
	cout << "Created b. 4E[|\r";
	Sleep(100);
	cout << "Created by#q@g#\r";
	cout << "Created by e367\r";
	Sleep(100);
	cout << "Created by SOP]\r";
	cout << "Created by Sh)$\r";
	Sleep(100);
	cout << "Created by Stz0\r";
	cout << "Created by St^4\r";
	Sleep(100);
	cout << "Created by Stav\r";
	cout << "Created by Sta?\r";

	Sleep(130);

	SetConsoleTextAttribute(hConsole, r);
	cout << "C";
	SetConsoleTextAttribute(hConsole, d);
	cout << "reated by Stas\r";
	Sleep(50);

	SetConsoleTextAttribute(hConsole, d);
	cout << "C";
	SetConsoleTextAttribute(hConsole, r);
	cout << "r";
	SetConsoleTextAttribute(hConsole, d);
	cout << "eated by Stas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Cr";
	SetConsoleTextAttribute(hConsole, r);
	cout << "e";
	SetConsoleTextAttribute(hConsole, d);
	cout << "ated by Stas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Cre";
	SetConsoleTextAttribute(hConsole, r);
	cout << "a";
	SetConsoleTextAttribute(hConsole, d);
	cout << "ted by Stas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Crea";
	SetConsoleTextAttribute(hConsole, r);
	cout << "t";
	SetConsoleTextAttribute(hConsole, d);
	cout << "ed by Stas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Creat";
	SetConsoleTextAttribute(hConsole, r);
	cout << "e";
	SetConsoleTextAttribute(hConsole, d);
	cout << "d by Stas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Create";
	SetConsoleTextAttribute(hConsole, r);
	cout << "d";
	SetConsoleTextAttribute(hConsole, d);
	cout << " by Stas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Created";
	SetConsoleTextAttribute(hConsole, r);
	cout << " b";
	SetConsoleTextAttribute(hConsole, d);
	cout << "y Stas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Created b";
	SetConsoleTextAttribute(hConsole, r);
	cout << "y";
	SetConsoleTextAttribute(hConsole, d);
	cout << " Stas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Created by";
	SetConsoleTextAttribute(hConsole, r);
	cout << " ";
	SetConsoleTextAttribute(hConsole, d);
	cout << "Stas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Created by ";
	SetConsoleTextAttribute(hConsole, r);
	cout << "S";
	SetConsoleTextAttribute(hConsole, d);
	cout << "tas\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Created by S";
	SetConsoleTextAttribute(hConsole, r);
	cout << "t";
	SetConsoleTextAttribute(hConsole, d);
	cout << "as\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Created by St";
	SetConsoleTextAttribute(hConsole, r);
	cout << "a";
	SetConsoleTextAttribute(hConsole, d);
	cout << "s\r";
	Sleep(50);
	SetConsoleTextAttribute(hConsole, d);
	cout << "Created by Sta";
	SetConsoleTextAttribute(hConsole, r);
	cout << "s";
	SetConsoleTextAttribute(hConsole, d);
	cout << "\r";
	Sleep(50);



	cout << "Created by ";
	SetConsoleTextAttribute(hConsole, lb);
	cout << "Stas";
	SetConsoleTextAttribute(hConsole, d);
	cout << "\n*==============*\n\n";

	Beep(200, 100);
	Beep(300, 100);
}

int main()
{
	setlocale(LC_ALL, "ru");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);



	// Colors
	int r = 4, lb = 9, d = 7;

	Stas(r, lb, d);

	//future<void> startLoading = async(launch::async, Stas);


	string path = "config.ahk";	// Add ../
	string custom;

up:
	SetConsoleTextAttribute(hConsole, d);
	cout << "Do u want create custom config ?, say no ";
	SetConsoleTextAttribute(hConsole, lb);
	cout << "(y/n)";
	SetConsoleTextAttribute(hConsole, d);
	cout << ":" << endl;
	cin >> custom;

	string BindKey, b_Go, b_Ladder, b_Flor, b_Wall;

	if (custom == "y" || custom == "yes" || custom == "Y")
		{
			BindKey = "X";
			//b_Go = "w";
			b_Ladder = "XButton1";
			b_Flor = "f";
			b_Wall = "XButton2";
		}
	else if (custom == "n" || custom == "no" || custom == "N")
	{
		cout << endl << "Enter the name of the bind button, e.g. 'X' (";
		SetConsoleTextAttribute(hConsole, r);
		cout << "Large letters";
		SetConsoleTextAttribute(hConsole, d);
		cout << "):" << endl;
		cin >> BindKey;
		cout << endl << "Enter the name of the button, on which ladder is putting, e.g. 'c' (";
		SetConsoleTextAttribute(hConsole, r);
		cout << "Small letters";
		SetConsoleTextAttribute(hConsole, d);
		cout << ")\nmouse4 = 'XButton1', mouse5 = 'XButton2':" << endl;
		cin >> b_Ladder;
		cout << endl << "Enter the name of the button, on which flor is putting, e.g. 'f' (";
		SetConsoleTextAttribute(hConsole, r);
		cout << "Small letters";
		SetConsoleTextAttribute(hConsole, d);
		cout << "):" << endl;
		cin >> b_Flor;
		cout << endl << "Enter the name of the button, on which wall is putting, e.g. 'x' (";
		SetConsoleTextAttribute(hConsole, r);
		cout << "Small letters";
		SetConsoleTextAttribute(hConsole, d);
		cout << "):" << endl;
		cin >> b_Wall;
	}
	else
	{
		cout << endl << endl;
		goto up;
	}

	future<void> startLoading = async(launch::async, load);
	// While loading...

	ofstream file;
	//file.open(path, ofstream::app);
	file.open(path);

	if (!file.is_open())
	{
		cout << "Error opening\nОшибка при открытии" << endl;
	}
	else if (file.is_open())
	{
		// Write
		file << "Up:\n\nSendInput {w up}\n\n$";
		file << BindKey;
		file << "::\nwhile GetKeyState(\"";
		file << BindKey;
		file << "\", \"P\")\n{\n";

		file << "SendInput {w down}\nSleep 10\n\n";
		file << "SendInput {" << b_Ladder << "}\nSleep 10\n\n";
		file << "SendInput {LButton Down}\nSleep 30\nSendInput {LButton Up}\nSleep 30\nSleep 100\n\n";
		file << "SendInput {" << b_Flor << "}\nSleep 10\n\n";
		file << "SendInput {LButton Down}\nSleep 30\nSendInput {LButton Up}\nSleep 30\nSleep 100\n\n";
		file << "SendInput {" << b_Wall << "}\nSleep 10\n\n";
		file << "SendInput {LButton Down}\nSleep 30\nSendInput {LButton Up}\nSleep 30\n\n";
		file << "SendInput {" << b_Ladder << "}\n\nSleep 450\n}\n\nGoto, Up\n\nreturn\n";
	}


	// End
	file.close();

	Sleep(1500);
	cout << endl;
	
	for (float time = 4.00; time > 0; time-=0.10)
	{
		if (time < 0.10) time = 0.00;
		cout << "You can close window. (" << time << ")\r";
		Sleep(100);
	}

	system("cls");
	system("exit");
	return 0;
}