#ifndef _FILE_DESIGN_H
#define _FILE_DESIGN_H

#include<iostream>
#include<conio.h>
#include"antheaderInput.h"
#include<fstream>
#include"antheaderPlusPlus.h"
using namespace std;

void styleAboutMe()
{	
DrawRectangle(23, 10, 122, 17, 2);
gotoxy(65, 4); foreColor(1); cout<<" _____ _____ _____ _____ _____    ___ ";
gotoxy(65, 5); foreColor(1); cout<<"|   __| __  |     |  |  |  _  |  |_  |";
gotoxy(65, 6); foreColor(2); cout<<"|  |  |    -|  |  |  |  |   __|  |  _|";
gotoxy(65, 7); foreColor(2); cout<<"|_____|__|__|_____|_____|__|     |___|";
HLine(65, 8, 38, 11, 205);
}

void styleViewSt()
{
gotoxy(33,4); foreColor(4); cout<<" 	 __            __               __        __         ___                             __   __               ";
gotoxy(33,5); foreColor(3); cout<<".-----.|  |_.--.--.--|  |.-----.-----.|  |_     |__|.-----.'  _|.-----.----.--------.---.-.|  |_|__|.-----.-----.";
gotoxy(33,6); foreColor(2); cout<<"|__ --||   _|  |  |  _  ||  -__|     ||   _|    |  ||     |   _||  _  |   _|        |  _  ||   _|  ||  _  |     | ";
gotoxy(33,7); foreColor(1); cout<<"|_____||____|_____|_____||_____|__|__||____|    |__||__|__|__|  |_____|__| |__|__|__|___._||____|__||_____|__|__|";
}

void styleStudentId()
{
gotoxy(39, 3); foreColor(4); cout<<" _______ _________          ______   _______  _       _________  _________ ______   ";
gotoxy(39, 4); foreColor(4); cout<<"(  ____ \\__   __/|\\     /|(  __  \\ (  ____ \\( (    /|\\__   __/  \\__   __/(  __  \\ ";
gotoxy(39, 5); foreColor(2); cout<<"| (    \\/   ) (   | )   ( || (  \\  )| (    \\/|  \\  ( |   ) (        ) (   | (  \\  )";
gotoxy(39, 6); foreColor(2); cout<<"| (_____    | |   | |   | || |   ) || (__    |   \\ | |   | |        | |   | |   ) |";
gotoxy(39, 7); foreColor(2); cout<<"(_____  )   | |   | |   | || |   | ||  __)   | (\\ \\) |   | |        | |   | |   | |";
gotoxy(39, 8); foreColor(2); cout<<"      ) |   | |   | |   | || |   ) || (      | | \\   |   | |        | |   | |   ) |";
gotoxy(39, 9); foreColor(2); cout<<"/\\____) |   | |   | (___) || (__/  )| (____/\\| )  \\  |   | |     ___) (___| (__/  )";
gotoxy(39, 10); foreColor(2);cout<<"\\_______)   )_(   (_______)(______/ (_______/|/    )_)   )_(     \\_______/(______/";
HLine(35, 12, 95, 6, 205);
}

void BoxDisplayInvoicePayment()
{
				gotoxy(65, 4); foreColor(1); cout<<" ____  _  _  _  _  _____  ____  ___  ____"; 
				gotoxy(65, 5); foreColor(1); cout<<"(_  _)( \\( )( \\/ )(  _  )(_  _)/ __)( ___)"; 
				gotoxy(65, 6); foreColor(2); cout<<" _)(_  )  (  \\  /  )(_)(  _)(_( (__  )__)"; 
				gotoxy(65, 7); foreColor(2); cout<<"(____)(_)\\_)  \\/  (_____)(____)\\___)(____)"; 
				HLine(65, 8, 42, 9, 205);
				DrawRectangle(22, 9, 126, 24,5);
				
				foreColor(2); gotoxy(26, 11); cout<<"STUDENT DETAILS:";
//				HLine(26, 11, 15, 4, 205);
				DrawRectangle(26, 12, 118, 3,6);

				HLine(26, 14, 118, 6, 205);
				HLine(26, 16, 118, 6, 205);
				
				VLine(45, 11, 1, 6, 203);
				VLine(45, 12, 4, 6, 186);
				// VLine(45, 17, 1, 6, 202);
				
				VLine(90, 11, 1, 6, 203);
				VLine(90, 12, 4, 6, 186);
				// VLine(90, 17, 1, 6, 202);
				
				VLine(120, 11, 1, 6, 203);
				VLine(120, 12, 4, 6, 186);
				// VLine(120, 17, 1, 6, 202);
				DrawRectangle(26, 20, 118, 9, 3); 
				HLine(26, 22, 118, 3, 205);
				HLine(26, 26, 118, 3);
				VLine(34, 19, 1, 3, 203);
				VLine(34, 20, 9, 3, 186);
				VLine(34, 29, 1, 3, 202);
				
				VLine(123, 19, 1, 3, 203);
				VLine(123, 20, 9, 3, 186);
				VLine(123, 29, 1, 3, 202);
				
				DrawRectangle(123, 30, 21, 1, 3);
}

void BoxDisplayInvoice()
{
				gotoxy(65, 4); foreColor(1); cout<<" ____  _  _  _  _  _____  ____  ___  ____"; 
				gotoxy(65, 5); foreColor(1); cout<<"(_  _)( \\( )( \\/ )(  _  )(_  _)/ __)( ___)"; 
				gotoxy(65, 6); foreColor(2); cout<<" _)(_  )  (  \\  /  )(_)(  _)(_( (__  )__)"; 
				gotoxy(65, 7); foreColor(2); cout<<"(____)(_)\\_)  \\/  (_____)(____)\\___)(____)"; 
				HLine(65, 8, 42, 9, 205);
				DrawRectangle(22, 9, 126, 24,5);
				
				foreColor(2); gotoxy(26, 11); cout<<"STUDENT DETAILS:";
//				HLine(26, 11, 15, 4, 205);
				DrawRectangle(26, 12, 118, 5,6);

				HLine(26, 14, 118, 6, 205);
				HLine(26, 16, 118, 6, 205);
				
				VLine(45, 11, 1, 6, 203);
				VLine(45, 12, 5, 6, 186);
				VLine(45, 17, 1, 6, 202);
				
				VLine(90, 11, 1, 6, 203);
				VLine(90, 12, 5, 6, 186);
				VLine(90, 17, 1, 6, 202);
				
				VLine(110, 11, 1, 6, 203);
				VLine(110, 12, 5, 6, 186);
				VLine(110, 17, 1, 6, 202);
				DrawRectangle(26, 20, 118, 9, 3); 
				HLine(26, 22, 118, 3, 205);
				HLine(26, 26, 118, 3);
				VLine(34, 19, 1, 3, 203);
				VLine(34, 20, 9, 3, 186);
				VLine(34, 29, 1, 3, 202);
				
				VLine(123, 19, 1, 3, 203);
				VLine(123, 20, 9, 3, 186);
				VLine(123, 29, 1, 3, 202);
				
				DrawRectangle(123, 30, 21, 1, 3);
}

void BoxDisplayScholarship() {
    // Scholarship Application Header
   gotoxy(65, 4); foreColor(1); cout<<" ____  _  _  _  _  _____  ____  ___  ____"; 
	gotoxy(65, 5); foreColor(1); cout<<"(_  _)( \\( )( \\/ )(  _  )(_  _)/ __)( ___)"; 
	gotoxy(65, 6); foreColor(2); cout<<" _)(_  )  (  \\  /  )(_)(  _)(_( (__  )__)"; 
	gotoxy(65, 7); foreColor(2); cout<<"(____)(_)\\_)  \\/  (_____)(____)\\___)(____)"; 
    HLine(65, 9, 42, 9, 205);
    DrawRectangle(22, 9, 126, 27, 5);
    
    // Main Scholarship Info Box
    foreColor(2); gotoxy(26, 11); cout<<"STUDENT INFORMATION:";
    DrawRectangle(26, 12, 118, 4, 6);

    // Horizontal lines
    // HLine(26, 11, 118, 6, 205);
    HLine(26, 14, 118, 6, 205);
    
    // Vertical dividers
    VLine(45, 11, 1, 6, 203);
    VLine(45, 12, 5, 6, 186);
    VLine(45, 17, 1, 6, 202);
    
    VLine(100, 11, 1, 6, 203);
    VLine(100, 12, 5, 6, 186);
    VLine(100, 17, 1, 6, 202);
    
    // Scholarship Details Section
    DrawRectangle(26, 20, 118, 9, 3); 
    foreColor(2); gotoxy(26, 19); cout<<"SCHOLARSHIP DETAILS:";
    
    // Scholarship grid lines
    HLine(26, 22, 118, 3, 205);
    HLine(26, 24, 118, 3, 205);
    HLine(26, 26, 118, 3, 205);
    HLine(26, 28, 118, 3, 205);
    
    // Vertical dividers for details
    VLine(34, 19, 1, 10, 203);
    VLine(34, 20, 9, 3, 186);
    VLine(34, 29, 1, 3, 202);
    
    VLine(80, 20, 9, 3, 186);
    VLine(123, 19, 1, 10, 203);
    VLine(123, 20, 9, 3, 186);
    VLine(123, 29, 1, 3, 202);
    
    // Column headers
    foreColor(3);
    gotoxy(29, 21); cout << "NO";
    gotoxy(36, 21); cout << "SCHOLARSHIP ITEM";
    gotoxy(82, 21); cout << "DURATION";
    gotoxy(125, 21); cout << "PRICE";
    
    // Footer
    DrawRectangle(26, 31, 118, 3, 4);
    foreColor(6); gotoxy(28, 32); cout << "TERMS: Scholarship requires minimum 3.0 GPA each semester";
}

void BoxInputStudent()
{
drawBoxDoubleLineWithBG(32, 5, 106, 5, 6);	
gotoxy(38,6); foreColor(1); cout<<" _  _      ____  _     _____    _  _      _____ ____  ____  _      ____  _____  _  ____  _     ";
gotoxy(38,7); foreColor(2); cout<<"/ \\/ \\  /|/  __\\/ \\ /\\/__ __\\  / \\/ \\  /|/    //  _ \\/  __\\/ \\__/|/  _ \\/__ __\\/ \\/  _ \\/ \\  /|";
gotoxy(38,8); foreColor(3); cout<<"| || |\\ |||  \\/|| | ||  / \\    | || |\\ |||  __\\| / \\||  \\/|| |\\/||| / \\|  / \\  | || / \\|| |\\ ||";
gotoxy(38,9); foreColor(4); cout<<"| || | \\|||  __/| \\_/|  | |    | || | \\||| |   | \\_/||    /| |  ||| |-||  | |  | || \\_/|| | \\||";
gotoxy(38,10); foreColor(5); cout<<"\\_/\\_/  \\|\\_/   \\____/  \\_/    \\_/\\_/  \\|\\_/   \\____/\\_/\\_\\\\_/  \\|\\_/ \\|  \\_/  \\_/\\____/\\_/  \\|";
 
drawBoxDoubleLineWithBG(32, 11, 106, 21, 6);

drawBoxDoubleLineWithBG(36, 13, 40, 1, 9);   
drawBoxDoubleLineWithBG(94, 13, 40, 1, 9);
drawBoxDoubleLineWithBG(36, 17, 40, 1, 9);
drawBoxDoubleLineWithBG(94, 17, 40, 1, 9);
drawBoxDoubleLineWithBG(36, 21, 40, 1, 9);
drawBoxDoubleLineWithBG(94, 21, 40, 1, 9);
drawBoxDoubleLineWithBG(36, 25, 40, 1, 9);
drawBoxDoubleLineWithBG(94, 25, 40, 1, 9);
drawBoxDoubleLineWithBG(36, 29, 40, 1, 9);
drawBoxDoubleLineWithBG(94, 29, 40, 1, 9);
}

void BoxInvoice()
{
gotoxy(64,6); foreColor(2); cout<<" ____  _  _  _  _  _____  ____  ___  ____ ";
gotoxy(64,7); foreColor(3); cout<<"(_  _)( \\( )( \\/ )(  _  )(_  _)/ __)( ___)";
gotoxy(64,8); foreColor(4); cout<<" _)(_  )  (  \\  /  )(_)(  _)(_( (__  )__) ";
gotoxy(64,9); foreColor(5); cout<<"(____)(_)\\_)  \\/  (_____)(____)\\___)(____)";
    
drawBoxDoubleLineWithBG(64, 28, 41, 1, 5);
	drawBoxDoubleLineWithBG(64, 11, 41, 15, 2);
	
	drawBoxDoubleLineWithBG(68, 12, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 15, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 18, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 21, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 24, 33, 1, 9);
	
	// left
	drawBoxDoubleLineWithBG(60, 17, 1, 4, 1);
	drawBoxDoubleLineWithBG(58, 15, 1, 8, 2);
	drawBoxDoubleLineWithBG(56, 13, 1, 12, 3);
	drawBoxDoubleLineWithBG(54, 11, 1, 16, 4);
	drawBoxDoubleLineWithBG(52, 9, 1, 20, 5);
	drawBoxDoubleLineWithBG(50, 7, 1, 24, 6);
	drawBoxDoubleLineWithBG(48, 5, 1, 28, 7);
//	// right
	drawBoxDoubleLineWithBG(108, 17, 1, 4, 1);
	drawBoxDoubleLineWithBG(110, 15, 1, 8, 2);
	drawBoxDoubleLineWithBG(112, 13, 1, 12, 3);
	drawBoxDoubleLineWithBG(114, 11, 1, 16, 4);
	drawBoxDoubleLineWithBG(116, 9, 1, 20, 5);
	drawBoxDoubleLineWithBG(118, 7, 1, 24, 6);
	drawBoxDoubleLineWithBG(120, 5, 1, 28, 7);
}

void BoxScholarship()
{
	gotoxy(50, 4);foreColor(2);cout << " 	        __                __                    __     __        ";
    gotoxy(50, 5);foreColor(3);cout << ".-----.----.|  |--.-----.----.|  |.---.-.----.-----.|  |--.|__|.-----.";
    gotoxy(50, 6);foreColor(4);cout << "|__ --|  __||     |  _  |   _||  ||  _  |   _|__ --||     ||  ||  _  |";
    gotoxy(50, 7);foreColor(5);cout << "|_____|____||__|__|_____|__|  |__||___._|__| |_____||__|__||__||   __|";
    gotoxy(50, 8);foreColor(6);cout <<"                                                               |__|";
	
	drawBoxDoubleLineWithBG(64, 31, 41, 1, 5);
	drawBoxDoubleLineWithBG(64, 11, 41, 18, 2);
	
	drawBoxDoubleLineWithBG(68, 12, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 15, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 18, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 21, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 24, 33, 1, 9);
	
	// left
	drawBoxDoubleLineWithBG(60, 17, 1, 4, 1);
	drawBoxDoubleLineWithBG(58, 15, 1, 8, 2);
	drawBoxDoubleLineWithBG(56, 13, 1, 12, 3);
	drawBoxDoubleLineWithBG(54, 11, 1, 16, 4);
	drawBoxDoubleLineWithBG(52, 9, 1, 20, 5);
	drawBoxDoubleLineWithBG(50, 7, 1, 24, 6);
	// drawBoxDoubleLineWithBG(48, 5, 1, 28, 7);
	// right
	drawBoxDoubleLineWithBG(108, 17, 1, 4, 1);
	drawBoxDoubleLineWithBG(110, 15, 1, 8, 2);
	drawBoxDoubleLineWithBG(112, 13, 1, 12, 3);
	drawBoxDoubleLineWithBG(114, 11, 1, 16, 4);
	drawBoxDoubleLineWithBG(116, 9, 1, 20, 5);
	drawBoxDoubleLineWithBG(118, 7, 1, 24, 6);
	// drawBoxDoubleLineWithBG(120, 5, 1, 28, 7);
}

void BoxStudent()
{
	gotoxy(62, 6);foreColor(2);cout << "	     __            __               __   ";
    gotoxy(62, 7);foreColor(3);cout << ".-----.|  |_.--.--.--|  |.-----.-----.|  |_ ";
    gotoxy(62, 8);foreColor(4);cout << "|__ --||   _|  |  |  _  ||  -__|     ||   _|";
    gotoxy(62, 9);foreColor(5);cout << "|_____||____|_____|_____||_____|__|__||____|";
	
	drawBoxDoubleLineWithBG(64, 31, 41, 1, 5);
	drawBoxDoubleLineWithBG(64, 11, 41, 18, 2);
	
	drawBoxDoubleLineWithBG(68, 12, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 15, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 18, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 21, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 24, 33, 1, 9);
	
	
	// left
	drawBoxDoubleLineWithBG(60, 17, 1, 4, 1);
	drawBoxDoubleLineWithBG(58, 15, 1, 8, 2);
	drawBoxDoubleLineWithBG(56, 13, 1, 12, 3);
	drawBoxDoubleLineWithBG(54, 11, 1, 16, 4);
	drawBoxDoubleLineWithBG(52, 9, 1, 20, 5);
	drawBoxDoubleLineWithBG(50, 7, 1, 24, 6);
	drawBoxDoubleLineWithBG(48, 5, 1, 28, 7);
//	// right
	drawBoxDoubleLineWithBG(108, 17, 1, 4, 1);
	drawBoxDoubleLineWithBG(110, 15, 1, 8, 2);
	drawBoxDoubleLineWithBG(112, 13, 1, 12, 3);
	drawBoxDoubleLineWithBG(114, 11, 1, 16, 4);
	drawBoxDoubleLineWithBG(116, 9, 1, 20, 5);
	drawBoxDoubleLineWithBG(118, 7, 1, 24, 6);
	drawBoxDoubleLineWithBG(120, 5, 1, 28, 7);
}

void BoxPayment()
{
	gotoxy(60, 6);foreColor(2);cout << "	  		 	  		__   ";
    gotoxy(60, 7);foreColor(3);cout << " .-----.---.-.--.--.--------.-----.-----.|  |_ ";
    gotoxy(60, 8);foreColor(4);cout << " |  _  |  _  |  |  |        |  -__|     ||   _|";
    gotoxy(60, 9);foreColor(5);cout << " |   __|___._|___  |__|__|__|_____|__|__||____|";
    gotoxy(60, 10);foreColor(6);cout <<" |__|        |_____|                           ";
	
	drawBoxDoubleLineWithBG(64, 28, 41, 1, 5);
	drawBoxDoubleLineWithBG(64, 11, 41, 15, 2);
	
	drawBoxDoubleLineWithBG(68, 12, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 15, 33, 1, 9);
	drawBoxDoubleLineWithBG(68, 18, 33, 1, 9);
	// drawBoxDoubleLineWithBG(68, 21, 33, 1, 9);
	// drawBoxDoubleLineWithBG(68, 24, 33, 1, 9);
	
	// left
	drawBoxDoubleLineWithBG(60, 17, 1, 4, 1);
	drawBoxDoubleLineWithBG(58, 15, 1, 8, 2);
	drawBoxDoubleLineWithBG(56, 13, 1, 12, 3);
	drawBoxDoubleLineWithBG(54, 11, 1, 16, 4);
	drawBoxDoubleLineWithBG(52, 9, 1, 20, 5);
	drawBoxDoubleLineWithBG(50, 7, 1, 24, 6);
	drawBoxDoubleLineWithBG(48, 5, 1, 28, 7);
//	// right
	drawBoxDoubleLineWithBG(108, 17, 1, 4, 1);
	drawBoxDoubleLineWithBG(110, 15, 1, 8, 2);
	drawBoxDoubleLineWithBG(112, 13, 1, 12, 3);
	drawBoxDoubleLineWithBG(114, 11, 1, 16, 4);
	drawBoxDoubleLineWithBG(116, 9, 1, 20, 5);
	drawBoxDoubleLineWithBG(118, 7, 1, 24, 6);
	drawBoxDoubleLineWithBG(120, 5, 1, 28, 7);
}

void BoxMenu()
{
	gotoxy(70,6); foreColor(2); cout<<" __  __  ____  _  _  __  __ ";
	gotoxy(70,7); foreColor(2); cout<<"(  \\/  )( ___)( \\( )(  )(  )";
	gotoxy(70,8); foreColor(4); cout<<" )    (  )__)  )  (  )(__)( ";
	gotoxy(70,9); foreColor(9); cout<<"(_/\\/\\_)(____)(_)\\_)(______)";


	drawBoxDoubleLineWithBG(64, 10, 41, 17, 6);
	drawBoxDoubleLineWithBG(64, 26, 41, 1, 6);
	drawBoxDoubleLineWithBG(68, 11, 33, 1, 2);
	drawBoxDoubleLineWithBG(68, 13, 33, 1, 2);
	drawBoxDoubleLineWithBG(68, 15, 33, 1, 2);
	drawBoxDoubleLineWithBG(68, 17, 33, 1, 2);
	drawBoxDoubleLineWithBG(68, 19, 33, 1, 2);
	drawBoxDoubleLineWithBG(68, 21, 33, 1, 2);
	drawBoxDoubleLineWithBG(68, 23, 33, 1, 2);
//	drawBoxDoubleLineWithBG(68, 26, 33, 1, 2);
	// left
	drawBoxDoubleLineWithBG(60, 6, 1, 26, 1);
	drawBoxDoubleLineWithBG(58, 8, 1, 22, 2);
	drawBoxDoubleLineWithBG(56, 10, 1, 18, 3);
	drawBoxDoubleLineWithBG(54, 12, 1, 14, 4);
	drawBoxDoubleLineWithBG(52, 14, 1, 10, 5);
	drawBoxDoubleLineWithBG(50, 16, 1, 6, 6);
	// right
	drawBoxDoubleLineWithBG(108, 6, 1, 26, 1);
	drawBoxDoubleLineWithBG(110, 8, 1, 22, 2);
	drawBoxDoubleLineWithBG(112, 10, 1, 18, 3);
	drawBoxDoubleLineWithBG(114, 12, 1, 14, 4);
	drawBoxDoubleLineWithBG(116, 14, 1, 10, 5);
	drawBoxDoubleLineWithBG(118, 16, 1, 6, 6);
gotoxy(70,29); foreColor(2); cout<<" __  __  ____  _  _  __  __ ";
gotoxy(70,30); foreColor(2); cout<<"(  \\/  )( ___)( \\( )(  )(  )";
gotoxy(70,31); foreColor(4); cout<<" )    (  )__)  )  (  )(__)( ";
gotoxy(70,32); foreColor(9); cout<<"(_/\\/\\_)(____)(_)\\_)(______)";

}

void DeleteSuccess()
{
foreColor(1); gotoxy(20,12);cout<<" /$$$$$$$            /$$             /$$                      /$$$$$$                                  ";                          
foreColor(2); gotoxy(20,13);cout<<"| $$__  $$          | $$            | $$                     /$$__  $$                                                            "; 
foreColor(3); gotoxy(20,14);cout<<"| $$  \\ $$  /$$$$$$ | $$  /$$$$$$  /$$$$$$    /$$$$$$       | $$  \\__/ /$$   /$$  /$$$$$$$  /$$$$$$$  /$$$$$$   /$$$$$$$ /$$$$$$$  ";
foreColor(4); gotoxy(20,15);cout<<"| $$  | $$ /$$__  $$| $$ /$$__  $$|_  $$_/   /$$__  $$      |  $$$$$$ | $$  | $$ /$$_____/ /$$_____/ /$$__  $$ /$$_____//$$_____/  ";
foreColor(5); gotoxy(20,16);cout<<"| $$  | $$| $$$$$$$$| $$| $$$$$$$$  | $$    | $$$$$$$$       \\____  $$| $$  | $$| $$      | $$      | $$$$$$$$|  $$$$$$|  $$$$$$   ";
foreColor(6); gotoxy(20,17);cout<<"| $$  | $$| $$_____/| $$| $$_____/  | $$ /$$| $$_____/       /$$  \\ $$| $$  | $$| $$      | $$      | $$_____/ \\____  $$\\____  $$  ";
foreColor(7); gotoxy(20,18);cout<<"| $$$$$$$/|  $$$$$$$| $$|  $$$$$$$  |  $$$$/|  $$$$$$$      |  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$$|  $$$$$$$ /$$$$$$$//$$$$$$$/  ";
foreColor(8); gotoxy(20,19);cout<<"|_______/  \\_______/|__/ \\_______/   \\___/   \\_______/       \\______/  \\______/  \\_______/ \\_______/ \\_______/|_______/|_______/   ";
}

void UpDateSuccess()
{
foreColor(2); gotoxy(18,12);cout<<" /$$   /$$                 /$$             /$$                      /$$$$$$                  ";                                          
foreColor(2); gotoxy(18,13);cout<<"| $$  | $$                | $$            | $$                     /$$__  $$                         ";                                   
foreColor(3); gotoxy(18,14);cout<<"| $$  | $$  /$$$$$$   /$$$$$$$  /$$$$$$  /$$$$$$    /$$$$$$       | $$  \\__/ /$$   /$$  /$$$$$$$  /$$$$$$$  /$$$$$$   /$$$$$$$ /$$$$$$$"; 
foreColor(3); gotoxy(18,15);cout<<"| $$  | $$ /$$__  $$ /$$__  $$ |____  $$|_  $$_/   /$$__  $$      |  $$$$$$ | $$  | $$ /$$_____/ /$$_____/ /$$__  $$ /$$_____//$$_____/"; 
foreColor(4); gotoxy(18,16);cout<<"| $$  | $$| $$  \\ $$| $$  | $$  /$$$$$$$  | $$    | $$$$$$$$       \\____  $$| $$  | $$| $$      | $$      | $$$$$$$$|  $$$$$$|  $$$$$$ "; 
foreColor(4); gotoxy(18,17);cout<<"| $$  | $$| $$  | $$| $$  | $$ /$$__  $$  | $$ /$$| $$_____/       /$$  \\ $$| $$  | $$| $$      | $$      | $$_____/ \\____  $$\\____  $$"; 
foreColor(5); gotoxy(18,18);cout<<"|  $$$$$$/| $$$$$$$/|  $$$$$$$|  $$$$$$$  |  $$$$/|  $$$$$$$      |  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$$|  $$$$$$$ /$$$$$$$//$$$$$$$/"; 
foreColor(5); gotoxy(18,19);cout<<" \\______/ | $$____/  \\_______/ \\_______/   \\___/   \\_______/       \\______/  \\______/  \\_______/ \\_______/ \\_______/|_______/|_______/ "; 
foreColor(6); gotoxy(18,20);cout<<"          | $$                                                                                                                         "; 
foreColor(6); gotoxy(18,21);cout<<"          | $$                                                                                                                         "; 
foreColor(8); gotoxy(18,22);cout<<"          |__/                                                                                                                         "; 
	
}

void NotFind()
{
	
foreColor(14); gotoxy(30,12);cout<<"   ______  _______         __    __              __             ______                                     __ ";
foreColor(13); gotoxy(30,13);cout<<"  /      |/       \\       /  \\  /  |            /  |           /      \\                                   /  |";
foreColor(12); gotoxy(30,14);cout<<"  $$$$$$/ $$$$$$$  |      $$  \\ $$ |  ______   _$$ |_         /$$$$$$  |______   __    __  _______    ____$$ |";
foreColor(11); gotoxy(30,15);cout<<"    $$ |  $$ |  $$ |      $$$  \\$$ | /      \\ / $$   |        $$ |_ $$//      \\ /  |  /  |/       \\  /    $$ |";
foreColor(10); gotoxy(30,16);cout<<"    $$ |  $$ |  $$ |      $$$$  $$ |/$$$$$$  |$$$$$$/         $$   |  /$$$$$$  |$$ |  $$ |$$$$$$$  |/$$$$$$$ |";
foreColor(9); gotoxy(30,17);cout<<"    $$ |  $$ |  $$ |      $$ $$ $$ |$$ |  $$ |  $$ | __       $$$$/   $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |";
foreColor(8); gotoxy(30,18);cout<<"   _$$ |_ $$ |__$$ |      $$ |$$$$ |$$ \\__$$ |  $$ |/  |      $$ |    $$ \\__$$ |$$ \\__$$ |$$ |  $$ |$$ \\__$$ |";
foreColor(6); gotoxy(30,19);cout<<"  / $$   |$$    $$/       $$ | $$$ |$$    $$/   $$  $$/       $$ |    $$    $$/ $$    $$/ $$ |  $$ |$$    $$ |";
foreColor(3); gotoxy(30,20);cout<<"  $$$$$$/ $$$$$$$/        $$/   $$/  $$$$$$/     $$$$/        $$/      $$$$$$/   $$$$$$/  $$/   $$/  $$$$$$$/ ";

}

void WU()
{
// WU Left

gotoxy(15,7); cout<<".----------------. "<<endl;
gotoxy(15,8); cout<<"| .--------------. |"<<endl;
gotoxy(15,9); cout<<"| | _____  _____ | |"<<endl;
gotoxy(15,10); cout<<"| ||_   _||_   _|| |"<<endl;
gotoxy(15,11); cout<<"| |  | | /\\ | |  | |"<<endl;
gotoxy(15,12); cout<<"| |  | |/  \\| |  | |"<<endl;
gotoxy(15,13); cout<<"| |  |   /\\   |  | |"<<endl;
gotoxy(15,14); cout<<"| |  |__/  \\__|  | |"<<endl;
gotoxy(15,15); cout<<"| |              | |"<<endl;
gotoxy(15,16); cout<<"| '--------------' |"<<endl;
gotoxy(15,17); cout<<" '----------------'"<<endl;
//delay(500);
                            
gotoxy(15,20);cout<<".----------------. "<<endl;
gotoxy(15,21);cout<<"| .--------------. |"<<endl;
gotoxy(15,22);cout<<"| | _____  _____ | |"<<endl;
gotoxy(15,23);cout<<"| ||_   _||_   _|| |"<<endl;
gotoxy(15,24);cout<<"| |  | |    | |  | |"<<endl;
gotoxy(15,25);cout<<"| |  | '    ' |  | |"<<endl;
gotoxy(15,26);cout<<"| |   \\ `--' /   | |"<<endl;
gotoxy(15,27);cout<<"| |    `.__.'    | |"<<endl;
gotoxy(15,28);cout<<"| |              | |"<<endl;
gotoxy(15,29);cout<<"| '--------------' |"<<endl;
gotoxy(15,30);cout<<" '----------------'"<<endl;


 //WU Right
gotoxy(138,7); cout<<".----------------. "<<endl;
gotoxy(138,8); cout<<"| .--------------. |"<<endl;
gotoxy(138,9); cout<<"| | _____  _____ | |"<<endl;
gotoxy(138,10); cout<<"| ||_   _||_   _|| |"<<endl;
gotoxy(138,11); cout<<"| |  | | /\\ | |  | |"<<endl;
gotoxy(138,12); cout<<"| |  | |/  \\| |  | |"<<endl;
gotoxy(138,13); cout<<"| |  |   /\\   |  | |"<<endl;
gotoxy(138,14); cout<<"| |  |__/  \\__|  | |"<<endl;
gotoxy(138,15); cout<<"| |              | |"<<endl;
gotoxy(138,16); cout<<"| '--------------' |"<<endl;
gotoxy(138,17); cout<<" '----------------'"<<endl;
//delay(500);
                            
gotoxy(138,20);cout<<".----------------. "<<endl;
gotoxy(138,21);cout<<"| .--------------. |"<<endl;
gotoxy(138,22);cout<<"| | _____  _____ | |"<<endl;
gotoxy(138,23);cout<<"| ||_   _||_   _|| |"<<endl;
gotoxy(138,24);cout<<"| |  | |    | |  | |"<<endl;
gotoxy(138,25);cout<<"| |  | '    ' |  | |"<<endl;
gotoxy(138,26);cout<<"| |   \\ `--' /   | |"<<endl;
gotoxy(138,27);cout<<"| |    `.__.'    | |"<<endl;
gotoxy(138,28);cout<<"| |              | |"<<endl;
gotoxy(138,29);cout<<"| '--------------' |"<<endl;
gotoxy(138,30);cout<<" '----------------'"<<endl;
//delay(500);
                    


}

void byebye()
{
	foreColor(6); gotoxy(50,14); cout<<".-. .-')                 ('-.        .-. .-')                 ('-.   ";
	delay(300);
	foreColor(6); gotoxy(50,15); cout<<"\\  ( OO )              _(  OO)       \\  ( OO )              _(  OO)  ";
	delay(300);
	foreColor(6); gotoxy(50,16); cout<<" ;-----.\\  ,--.   ,--.(,------.       ;-----.\\  ,--.   ,--.(,------. ";
	delay(300);
	foreColor(6); gotoxy(50,17); cout<<" | .-.  |   \\  `.'  /  |  .---'       | .-.  |   \\  `.'  /  |  .---' ";
	delay(300);
	foreColor(6); gotoxy(50,18); cout<<" | '-' /_).-')     /   |  |           | '-' /_).-')     /   |  |     ";
	delay(300);
	foreColor(6); gotoxy(50,19); cout<<" | .-. `.(OO  \\   /   (|  '--.        | .-. `.(OO  \\   /   (|  '--.  ";
	delay(300);
	foreColor(6); gotoxy(50,20); cout<<" | |  \\  ||   /  /\\_   |  .--'        | |  \\  ||   /  /\\_   |  .--'  ";
	delay(300);
	foreColor(6); gotoxy(50,21); cout<<" | '--'  /`-./  /.__)  |  `---.       | '--'  /`-./  /.__)  |  `---. ";
	delay(300);
	foreColor(6); gotoxy(50,22); cout<<" `------'   `--'       `------'       `------'   `--'       `------' ";
}

void thank()
{
	foreColor(5); gotoxy(36,14); cout<<"  .-') _    ('-. .-.   ('-.         .-') _ .-. .-')                                             ";
	delay(300);
	foreColor(5); gotoxy(36,15); cout<<"(  OO) )  ( OO )  /  ( OO ).-.    ( OO ) )\\  ( OO )                                             "; 
	delay(300);
	foreColor(5); gotoxy(36,16); cout<<"/     '._ ,--. ,--.  / . --. /,--./ ,--,' ,--. ,--.         ,--.   ,--..-'),-----.  ,--. ,--.   "; 
	delay(300);
	foreColor(5); gotoxy(36,17); cout<<"|'--...__)|  | |  |  | \\-.  \\ |   \\ |  |\\ |  .'   /          \\  `.'  /( OO'  .-.  ' |  | |  |   "; 
	delay(300);
	foreColor(5); gotoxy(36,18); cout<<"'--.  .--'|   .|  |.-'-'  |  ||    \\|  | )|      /,        .-')     / /   |  | |  | |  | | .-') "; 
	delay(300);
	foreColor(5); gotoxy(36,19); cout<<"   |  |   |       | \\| |_.'  ||  .     |/ |     ' _)      (OO  \\   /  \\_) |  |\\|  | |  |_|( OO )"; 
	delay(300);
	foreColor(5); gotoxy(36,20); cout<<"   |  |   |  .-.  |  |  .-.  ||  |\\    |  |  .   \\         |   /  /\\_   \\ |  | |  | |  | | `-' /"; 
	delay(300);
	foreColor(5); gotoxy(36,21); cout<<"   |  |   |  | |  |  |  | |  ||  | \\   |  |  |\\   \\        `-./  /.__)   `'  '-'  '('  '-'(_.-' "; 
	delay(300);
	foreColor(5); gotoxy(36,22); cout<<"   `--'   `--' `--'  `--' `--'`--'  `--'  `--' '--'          `--'          `-----'   `-----'  "; 
	delay(2500);
}

void chooseView()
{
	foreColor(1);gotoxy(58,6); 
	cout<<"  _______ ______  ____  ________  ____  _  ______";
	foreColor(2);gotoxy(58,7);
	cout<<" / ___/ // / __ \\/ __ \\/ __/ __/ / __ \\/ |/ / __/";
	foreColor(3);gotoxy(58,8);
	cout<<"/ /__/ _  / /_/ / /_/ /\\ \\/ _/  / /_/ /    / _/  ";
	foreColor(4);gotoxy(58,9);
	cout<<"\\___/_//_/\\____/\\____/___/___/  \\____/_/|_/___/  ";
		
	foreColor(4);
	drawBoxSingleLineWithBG(49, 20, 9, 1, 4);
	gotoxy(52,21);
	foreColor(6);
	cout<<"ESC";
	foreColor(2);
	gotoxy(48,24);
	cout<<"Back to MENU";
	drawBoxSingleLineWithBG(109, 20, 9, 1, 4);
	foreColor(6);
	gotoxy(110,21);	cout<<"ANY KEY";
	foreColor(2);
	gotoxy(109,24);
	cout<<"View Again";
	foreColor(6);
	gotoxy(75,30);
	cout<<"<<<<       >>>>";
	foreColor(2);
	gotoxy(80,30);
	cout<<"Press";
}

void chooseDelete()
{
	foreColor(1);gotoxy(58,6); 
	cout<<"  _______ ______  ____  ________  ____  _  ______";
	foreColor(2);gotoxy(58,7);
	cout<<" / ___/ // / __ \\/ __ \\/ __/ __/ / __ \\/ |/ / __/";
	foreColor(3);gotoxy(58,8);
	cout<<"/ /__/ _  / /_/ / /_/ /\\ \\/ _/  / /_/ /    / _/  ";
	foreColor(4);gotoxy(58,9);
	cout<<"\\___/_//_/\\____/\\____/___/___/  \\____/_/|_/___/  ";
		
	foreColor(4);
	drawBoxSingleLineWithBG(49, 20, 9, 1, 4);
	gotoxy(52,21);
	foreColor(6);
	cout<<"ESC";
	foreColor(2);
	gotoxy(48,24);
	cout<<"Back to MENU";
	drawBoxSingleLineWithBG(109, 20, 9, 1, 4);
	foreColor(6);
	gotoxy(110,21);
	cout<<"ANY KEY";
	foreColor(2);
	gotoxy(108,24);
	cout<<"Delete Again";
	foreColor(6);
	gotoxy(75,30);
	cout<<"<<<<       >>>>";
	foreColor(2);
	gotoxy(80,30);
	cout<<"Press";
}

void chooseUpdate()
{
	foreColor(1);gotoxy(58,6); 
	cout<<"  _______ ______  ____  ________  ____  _  ______";
	foreColor(2);gotoxy(58,7);
	cout<<" / ___/ // / __ \\/ __ \\/ __/ __/ / __ \\/ |/ / __/";
	foreColor(3);gotoxy(58,8);
	cout<<"/ /__/ _  / /_/ / /_/ /\\ \\/ _/  / /_/ /    / _/  ";
	foreColor(4);gotoxy(58,9);
	cout<<"\\___/_//_/\\____/\\____/___/___/  \\____/_/|_/___/  ";
		
	foreColor(4);
	drawBoxSingleLineWithBG(49, 20, 9, 1, 4);
	gotoxy(52,21);
	foreColor(6);
	cout<<"ESC";
	foreColor(2);
	gotoxy(48,24);
	cout<<"Back to MENU";
	drawBoxSingleLineWithBG(109, 20, 9, 1, 4);
	foreColor(6);
	gotoxy(110,21);
	cout<<"ANY KEY";
	foreColor(2);
	gotoxy(108,24);
	cout<<"Update Again";
	foreColor(6);
	gotoxy(75,30);
	cout<<"<<<<       >>>>";
	foreColor(2);
	gotoxy(80,30);
	cout<<"Press";
}

void chooseInsert()
{
	foreColor(1);gotoxy(58,6); 
	cout<<"  _______ ______  ____  ________  ____  _  ______";
	foreColor(2);gotoxy(58,7);
	cout<<" / ___/ // / __ \\/ __ \\/ __/ __/ / __ \\/ |/ / __/";
	foreColor(3);gotoxy(58,8);
	cout<<"/ /__/ _  / /_/ / /_/ /\\ \\/ _/  / /_/ /    / _/  ";
	foreColor(4);gotoxy(58,9);
	cout<<"\\___/_//_/\\____/\\____/___/___/  \\____/_/|_/___/  ";
		
	foreColor(4);
	drawBoxSingleLineWithBG(49, 20, 9, 1, 4);
	gotoxy(52,21);
	foreColor(6);
	cout<<"ESC";
	foreColor(2);
	gotoxy(48,24);
	cout<<"Back to MENU";
	drawBoxSingleLineWithBG(109, 20, 9, 1, 4);
	foreColor(6);
	gotoxy(110,21);
	cout<<"ANY KEY";
	foreColor(2);
	gotoxy(108,24);
	cout<<"Insert Again";
	foreColor(6);
	gotoxy(75,30);
	cout<<"<<<<       >>>>";
	foreColor(2);
	gotoxy(80,30);
	cout<<"Press";
}

void chooseSearch()
{
	foreColor(1);gotoxy(58,6); 
	cout<<"  _______ ______  ____  ________  ____  _  ______";
	foreColor(2);gotoxy(58,7);
	cout<<" / ___/ // / __ \\/ __ \\/ __/ __/ / __ \\/ |/ / __/";
	foreColor(3);gotoxy(58,8);
	cout<<"/ /__/ _  / /_/ / /_/ /\\ \\/ _/  / /_/ /    / _/  ";
	foreColor(4);gotoxy(58,9);
	cout<<"\\___/_//_/\\____/\\____/___/___/  \\____/_/|_/___/  ";
		
	foreColor(4);
	drawBoxSingleLineWithBG(49, 20, 9, 1, 4);
	gotoxy(52,21);
	foreColor(6);
	cout<<"ESC";
	foreColor(2);
	gotoxy(48,24);
	cout<<"Back to MENU";
	drawBoxSingleLineWithBG(109, 20, 9, 1, 4);
	foreColor(6);
	gotoxy(110,21);
	cout<<"ANY KEY";
	foreColor(2);
	gotoxy(108,24);
	cout<<"Search Again";
	foreColor(6);
	gotoxy(75,30);
	cout<<"<<<<       >>>>";
	foreColor(2);
	gotoxy(80,30);
	cout<<"Press";
}

void welcomeFtLoading()
{
	
	gotoxy(50,5);foreColor(1);cout<<"   	    	_                            _          __    __                                                     ";
	gotoxy(50,6);foreColor(2);cout<<" __      _____| | ___ ___  _ __ ___   ___  | |_ ___   / / /\\ \\ \\/\\ /\\       		      			    ";
	gotoxy(50,7);foreColor(3);cout<<"\\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | __/ _ \\  \\ \\/  \\/ / / \\ \\                                      ";
	gotoxy(50,8);foreColor(4);cout<<"  \\ V  V /  __/ | (_| (_) | | | | | |  __/ | || (_) |  \\  /\\  /\\ \\_/ /                            	                     ";
	gotoxy(50,9);foreColor(5);cout<<"   \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___|  \\__\\___/    \\/  \\/  \\___/";
	                                                                                                   
	gotoxy(17,11);foreColor(1);cout<<"    _             _            _                                                                 _                   _                          ";
	gotoxy(17,12);foreColor(2);cout<<"___| |_ _   _  __| | ___ _ __ | |_   _ __ ___   __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_   ___ _   _ ___| |_ ___ _ __ ___   ";
	gotoxy(17,13);foreColor(3);cout<<"/ __| __| | | |/ _` |/ _ \\ '_ \\| __| | '_ ` _ \\ / _` | '_ \\ / _` |/ _` |/ _ \\ '_ ` _ \\ / _ \\ '_ \\| __| / __| | | / __| __/ _ \\ '_ ` _ \\ ";
	gotoxy(17,14);foreColor(4);cout<<"\\__ \\ |_| |_| | (_| |  __/ | | | |_  | | | | | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_  \\__ \\ |_| \\__ \\ ||  __/ | | | | |";
	gotoxy(17,15);foreColor(5);cout<<"|___/\\__|\\__,_|\\__,_|\\___|_| |_|\\__| |_| |_| |_|\\__,_|_| |_|\\__,_|\\__, |\\___|_| |_| |_|\\___|_| |_|\\__| |___/\\__, |___/\\__\\___|_| |_| |_| ";                                                                                                                                                                                                               
	gotoxy(17,16);foreColor(6);cout<<"                                                                  |___/                                     |___/";                                                                                                                                                                                                               

	int i;
  		
	gotoxy(68,23); foreColor(9); cout<<" L O A D I N G  N O W . . .";	
	DrawRectangle(33, 25, 102, 1, 5);	
	foreColor(2);
	for(i=0; i<10; i++)
	{
		gotoxy(34+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+1<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(44+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+11<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(54+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+21<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(64+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+31<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(74+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+41<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(84+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+51<<"%";
		delay(30);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(94+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+61<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(104+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+71<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(114+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+81<<"%";
		delay(30);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(124+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+91<<"%";
		delay(30);
	}
	gotoxy(78,29); foreColor(5); cout<<"C O M P L E T E";
	delay(1000);
	system("cls");	
}

void loginAcc()
{

gotoxy(26, 5); foreColor(1); cout<<" _____ _____ _____ _____ _____ _____ _____ _____    _____ _____ ____     _____ _____ _____ _____ _ _ _ _____ _____ ____  ";
gotoxy(26, 6); foreColor(2); cout<<"|  |  |   __|   __| __  |   | |  _  |     |   __|  |  _  |   | |    \\   |  _  |  _  |   __|   __| | | |     | __  |    \\ ";
gotoxy(26, 7); foreColor(3); cout<<"|  |  |__   |   __|    -| | | |     | | | |   __|  |     | | | |  |  |  |   __|     |__   |__   | | | |  |  |    -|  |  |";
gotoxy(26, 8); foreColor(4); cout<<"|_____|_____|_____|__|__|_|___|__|__|_|_|_|_____|  |__|__|_|___|____/   |__|  |__|__|_____|_____|_____|_____|__|__|____/ ";
//foreColor(1); gotoxy(68,5); cout<<" _____  _____  __  __  ___  _____ ";
//foreColor(2); gotoxy(68,6); cout<<"/  _  \\|  _  \\/  \\/  \\/___\\/  _  \\";
//foreColor(3); gotoxy(68,7); cout<<"|  _  ||  |  ||  \\/  ||   ||  |  |";
//foreColor(4); gotoxy(68,8); cout<<"\\__|__/|_____/\\__ \\__/\\___/\\__|__/";			
//	gotoxy(15,3);foreColor(1);cout<<"    _______ ____   __  __                                             ___              __   ____                                          __";
//	gotoxy(15,4);foreColor(2);cout<<"   / ____(_) / /  / / / /_______  _________  ____ _____ ___  ___     /   |  ____  ____/ /  / __ \\____ ____________      ______  _________/ /";
//	gotoxy(15,5);foreColor(3);cout<<"  / /_  / / / /  / / / / ___/ _ \\/ ___/ __ \\/ __ `/ __ `__ \\/ _ \\   / /| | / __ \\/ __  /  / /_/ / __ `/ ___/ ___/ | /| / / __ \\/ ___/ __  / ";
//	gotoxy(15,6);foreColor(4);cout<<" / __/ / / / /  / /_/ (__  )  __/ /  / / / / /_/ / / / / / /  __/  / ___ |/ / / / /_/ /  / ____/ /_/ (__  |__  )| |/ |/ / /_/ / /  / /_/ /  ";
//	gotoxy(15,7);foreColor(5);cout<<"/_/   /_/_/_/   \\____/____/\\___/_/  /_/ /_/\\__,_/_/ /_/ /_/\\___/  /_/  |_/_/ /_/\\__,_/  /_/    \\__,_/____/____/ |__/|__/\\____/_/   \\__,_/   ";
	
	DrawRectangle(40, 11, 90, 6, 6);
		
	gotoxy(73,12);foreColor(1);cout<<"   __             _    ";
	gotoxy(73,13);foreColor(2);cout<<"  / /  ___  ___ _(_)__ ";
	gotoxy(73,14);foreColor(3);cout<<" / /__/ _ \\/ _ `/ / _ \\";
	gotoxy(73,15);foreColor(4);cout<<"/____/\\___/\\_, /_/_//_/";
	gotoxy(73,16);foreColor(5);cout<<"          /___/        ";	
}

void cover()
{
	// Top
	gotoxy(4,1); foreColor(4);
	SYSTEMTIME currentTime;
    GetLocalTime(&currentTime);
	HLine(4, 2, 163, 9, 196);
	// Bottom	
	HLine(4, 38, 163, 9, 196);
	// left
	VLine(4, 2, 35, 9, 179);
	VLine(4, 1, 1, 9, 218);
	VLine(4, 37, 1, 9, 192);
	// Right
	VLine(168, 2, 35, 9, 179);
	VLine(168, 1, 1, 9, 191);
	VLine(168, 37, 1, 9, 217);	
}

void studentViewCover()
{
	// Top
	gotoxy(4,1); foreColor(4);

	HLine(4, 2, 180, 9, 196);
	// Bottom	
	HLine(4, 38, 180, 9, 196);
	// left
	VLine(4, 2, 35, 9, 179);
	VLine(4, 1, 1, 9, 218);
	VLine(4, 37, 1, 9, 192);
	// Right
	VLine(185, 2, 35, 9, 179);
	VLine(185, 1, 1, 9, 191);
	VLine(185, 37, 1, 9, 217);	
}

void Clearloading()
{
	
	gotoxy(68,34); cout<<"                                           "<<endl;
	gotoxy(68,35); cout<<"                                           "<<endl;
}

void ClearBG()
{
gotoxy(6,3); cout<<"                                                                                                                                                                 ";
gotoxy(6,4); cout<<"                                                                                                                                                                 ";
gotoxy(6,5); cout<<"                                                                                                                                                                 ";
gotoxy(6,6); cout<<"                                                                                                                                                                 ";
gotoxy(6,7); cout<<"                                                                                                                                                                 ";
gotoxy(6,8); cout<<"                                                                                                                                                                 ";                                                                                                                                                 
gotoxy(6,9); cout<<"                                                                                                                                                                 ";	
gotoxy(6,10); cout<<"                                                                                                                                                                ";
gotoxy(6,11); cout<<"                                                                                                                                                                ";
gotoxy(6,12); cout<<"                                                                                                                                                                ";
gotoxy(6,13); cout<<"                                                                                                                                                                ";
gotoxy(6,14); cout<<"                                                                                                                                                                ";
gotoxy(6,15); cout<<"                                                                                                                                                                ";                                                                                                                                                
gotoxy(6,16); cout<<"                                                                                                                                                                ";
gotoxy(6,17); cout<<"                                                                                                                                                                 ";
gotoxy(6,18); cout<<"                                                                                                                                                                ";
gotoxy(6,19); cout<<"                                                                                                                                                                ";
gotoxy(6,20); cout<<"                                                                                                                                                                ";
gotoxy(6,21); cout<<"                                                                                                                                                                ";
gotoxy(6,22); cout<<"                                                                                                                                                                ";                                                                                                                                                 
gotoxy(6,23); cout<<"                                                                                                                                                                ";	
gotoxy(6,24); cout<<"                                                                                                                                                                ";
gotoxy(6,25); cout<<"                                                                                                                                                                ";
gotoxy(6,26); cout<<"                                                                                                                                                                ";
gotoxy(6,27); cout<<"                                                                                                                                                                ";
gotoxy(6,28); cout<<"                                                                                                                                                                ";
gotoxy(6,29); cout<<"                                                                                                                                                                ";                                                                                                                                                
gotoxy(6,30); cout<<"                                                                                                                                                                ";
gotoxy(6,31); cout<<"                                                                                                                                                                ";
gotoxy(6,32); cout<<"                                                                                                                                                                ";
gotoxy(6,33); cout<<"                                                                                                                                                                ";
gotoxy(6,34); cout<<"                                                                                                                                                                ";
gotoxy(6,35); cout<<"                                                                                                                                                                ";                                                                                                                                                 
gotoxy(6,36); cout<<"                                                                                                                                                                ";	
gotoxy(6,37); cout<<"                                                                                                                                                                ";
}
#endif