#pragma comment(lib, "winmm")
#include<iostream>
#include"../Project1/head.h"
#include<windows.h>

int main() {
	std::cout << "music start" << std::endl;
	//LPCWCHAR lpc = ("");
	PlaySound(L"Encato.wav", NULL, SND_FILENAME | SND_ASYNC);
	system("pause");
}