#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include <sys/stat.h>
#include "Headers\\design.h"
#include "Headers\\student.h"
using namespace std;

void Loading();
void Login();
void MainMenu();
void StudentManagement();
void Registration();
// void ReturningStudent();
// void ScholarshipStudents();
void ApplyForScholarship();
void ProcessStudentPayment();
void IncomeAndExpense();
void ABOUTUS();

int main()
{
    setcursor(false, 1);
    // Loading();

    // Login();
    MainMenu();
    getch();
    return 0;
}

void Loading()
{
    cls();
    cover();
    welcomeFtLoading();
}

void Login()
{
    int attempts = 3;
    cls();
    while (1)
    {
        setcursor(true, 1);
        char username[25];
        char pwd[30];
        cover();
        loginAcc();

        DrawRectangle(40, 11, 90, 19, 6);
        DrawRectangle(62, 21, 44, 1, 2);
        gotoxy(68, 22);
        foreColor(4);
        cout << "Username : ";
        DrawRectangle(62, 25, 44, 1, 2);
        gotoxy(68, 26);
        foreColor(4);
        cout << "Password : ";
        gotoxy(79, 22);
        foreColor(4);
        while (true)
        {
            inputLetter(username);
            if (!strcmp(username, "\0"))
            {
                continue;
            }
            else
            {
                break;
            }
        }
        gotoxy(79, 26);
        foreColor(4);
        while (true)
        {
            hidePassword(pwd);
            if (!strcmp(pwd, "\0"))
            {
                continue;
            }
            else
            {
                break;
            }
        }
        setcursor(false, 1);
        Clearloading();
        if (!strcmp(username, "admin") && !strcmp(pwd, "Group2"))
        {
            gotoxy(75, 29);
            foreColor(2);
            cout << "[ LOGIN SUCCESS ]";
            delay(500);
            int a = 219;
            int i;
            gotoxy(66, 34);
            foreColor(2);
            for (i = 0; i < 30; i++)
            {
                cout << (char)a;
                delay(100);
            }
            delay(700);
            system("cls");
            MainMenu();
        }
        else
        {
            attempts--;
            if (attempts > 0)
            {
                gotoxy(57, 29);
                foreColor(4);
                cout << "Incorrect username or password. You have " << attempts << " time to login" << endl;
                delay(1000);
                system("cls");
            }
            else
            {
                gotoxy(63, 29);
                foreColor(4);
                cout << "You have run out of attempts. Login failed." << endl;
                delay(1000);
                cls();
                cover();
                thank();
                delay(700);
                cls();
                cover();
                byebye();
                delay(700);
                exit(0);
            }
        }
    }
}

void MainMenu()
{
    int x = 0;
    char option;
    cls();
    cover();
    foreColor(1);
    ANT();
    BoxMenu();
    do
    {
        setcursor(false, 1);
        foreColor(6);
        gotoxy(77, 12);
        cout << "STUDENT MANAGEMENT";
        gotoxy(78, 14);
        cout << "REGISTRATION";
        gotoxy(80, 16);
        cout << "PAYMENT";
        gotoxy(77, 18);
        cout << "APPLY SCHOLARSHIP";
        gotoxy(80, 20);
        cout << "ABOUT US";
        gotoxy(77, 22);
        cout << "LOGOUT PROGRAM";
        gotoxy(78, 24);
        cout << "EXIT PROGRAM";
        foreColor(9);
        gotoxy(68, 27);
        cout << "<<< USE UP AND DOWN ARROW KEY >>>";
        if (x == 0)
        {
            foreColor(4);
            gotoxy(77, 12);
            cout << "STUDENT MANAGEMENT";
        }
        if (x == 1)
        {
            foreColor(4);
            gotoxy(78, 14);
            cout << "REGISTRATION";
        }
        if (x == 2)
        {
            foreColor(4);
            gotoxy(80, 16);
            cout << "PAYMENT";
        }
        if (x == 3)
        {
            foreColor(4);
            gotoxy(77, 18);
            cout << "APPLY SCHOLARSHIP";
        }
        if (x == 4)
        {
            foreColor(4);
            gotoxy(80, 20);
            cout << "ABOUT US";
        }
        if (x == 5)
        {
            foreColor(4);
            gotoxy(77, 22);
            cout << "LOGOUT PROGRAM";
        }
        if (x == 6)
        {
            foreColor(4);
            gotoxy(78, 24);
            cout << "EXIT PROGRAM";
        }
        option = getch();
        switch (option)
        {
        case 72:
        {
            x--;
            if (x < 0)
            {
                x = 6;
            }
            break;
        }
        case 80:
        {
            x++;
            if (x > 6)
            {
                x = 0;
            }
            break;
        }
        }
    } while (option != 13);

    do
    {
        switch (x)
        {
        case 0:
        {
            cls();
            StudentManagement();
        }
        break;
        case 1:
        {
            cls();
            Registration();
        }
        break;
        case 2:
        {
            cls();
            ProcessStudentPayment();
        }
        break;
        case 3:
        {
            cls();
            ApplyForScholarship();
        }
        break;
        case 4:
        {
            cls();
            ABOUTUS();
        }
        break;
        case 5:
        {
            cls();
            Login();
        }
        break;
        case 6:
        {
            cls();
            cover();
            thank();
            cls();
            cover();
            byebye();
            delay(1500);
            exit(0);
        }
        break;
        default:
            cls();
            break;
        }

    } while (1);
}

void StudentManagement(){
     int y = 0;
    char option;
    cls();
    cover();
    BoxPatient1();
    foreColor(4);
    ANT();
    do
    {
        setcursor(false, 1);
        foreColor(2);
        foreColor(6);
        gotoxy(76, 13);
        cout << " VIEW STUDENTS";
        gotoxy(76, 16);
        cout << " SEARCH STUDENT";
        gotoxy(76, 19);
        cout << " UPDATE STUDENT";
        gotoxy(76, 22);
        cout << " DELETE STUDENT";
        gotoxy(76, 25);
        cout << " RETURN";
        foreColor(9);
        gotoxy(68, 32);
        cout << "<<< USE UP AND DOWN ARROW KEY >>>";

        if (y == 0)
        {
            foreColor(4);
            gotoxy(76, 13);
            cout << " VIEW STUDENTS";
        }
        if (y == 1)
        {
            foreColor(4);
            gotoxy(76, 16);
            cout << " SEARCH STUDENT";
        }
        if (y == 2)
        {
            foreColor(4);
            gotoxy(76, 19);
            cout << " UPDATE STUDENT";
        }
        if (y == 3)
        {
            foreColor(4);
            gotoxy(76, 22);
            cout << " DELETE STUDENT";
        }
        if (y == 4)
        {
            foreColor(4);
            gotoxy(76, 25);
            cout << " RETURN";
        }
        option = getch();
        switch (option)
        {
        case 72:
        {
            y--;
            if (y < 0)
            {
                y = 5;
            }
            break;
        }
        case 80:
        {
            y++;
            if (y > 5)
            {
                y = 0;
            }
            break;
        }
        }
    } while (option != 13);

    do
    {
        switch (y)
        {
        case 0:
            cls();
            cover();
            styleViewPt();
            ShowStudent("Files\\NewStudents.bin");
            foreColor(2);
            cout << "\n\n\n\n\t\t\t\t\t\t\t      <<<< Press Any Key back to [STUDENT MENU] >>>>" << endl;
            getch();
            StudentManagement();
            break;
        case 1:
        {
            do
            {
                cls();
                cover();
                ShowStudent("Files\\NewStudents.bin");
                SearchStudent("Files\\NewStudents.bin");
                cls();
                cover();
                chooseSearch();
            } while (getch() != 27);
            StudentManagement();
        }
        break;
        case 2:
        {
            do
            {
                cls();
                cover();
                ShowStudent("Files\\NewStudents.bin");
                UpdateStudent("Files\\NewStudents.bin", 0, 100);
                cls();
                cover();
                chooseUpdate();
            } while (getch() != 27);
            StudentManagement();
        }
        break;
        case 3:
        {
            do
            {
                cls();
                cover();
                ShowStudent("Files\\NewStudents.bin");
                DeleteStudent("Files\\NewStudents.bin");
                cls();
                cover();
                chooseDelete();
            } while (getch() != 27);
            StudentManagement();
        }
        break;
        case 4:
        {
            cls();
            MainMenu();
        }
        break;
        default:
            cls();
            break;
        }

    } while (1);
}

void Registration()
{
    do
{
    cls();
    cover();
    InsertStudent("Files\\NewStudents.bin", 1000, 0, 100);
    cls();
    cover();
    chooseInsert();
} while (getch() != 27);
MainMenu();
}

void ApplyForScholarship() {
    int selectedPercentage = 0;
    int durationYears = 0;
    int studentId = 0;
    
    cls();
    cover();
    
    // Get student ID
    setcursor(true, 1);
    drawBoxSingleLine(60, 17, 46, 1, 3);
    styelIncomeAndExpense();
    gotoxy(61, 18); foreColor(14);
    cout << "Enter Student ID for Scholarship: ";
    gotoxy(97, 18); studentId = inputNumber(); 
    
    // Verify student exists
    if(!VerifyStudentExists(studentId)) {
        gotoxy(65, 7); foreColor(4); cout << "Student not found!";
        gotoxy(65, 9); cout << "Press any key to continue...";
        getch();
        return;
    }

    
    // First select percentage
    PERCENTAGE_SELECTION:
    while(true) {
        int y = 0;
        char option;
        cls();
        cover();
        BoxPatient();
        
        do {
            setcursor(false, 1);
            foreColor(6);
            gotoxy(76, 13); cout << "30% Scholarship";
            gotoxy(76, 16); cout << "50% Scholarship"; 
            gotoxy(76, 19); cout << "75% Scholarship";
            gotoxy(76, 22); cout << "100% Scholarship";
            gotoxy(76, 25); cout << "BACK TO MENU";
            
            foreColor(9);
            gotoxy(68, 29);
            cout << "<<< USE UP AND DOWN ARROW KEY >>>";

            // Highlight selected option
            if(y == 0) { foreColor(4); gotoxy(76, 13); cout << "30% Scholarship"; }
            if(y == 1) { foreColor(4); gotoxy(76, 16); cout << "50% Scholarship"; }
            if(y == 2) { foreColor(4); gotoxy(76, 19); cout << "75% Scholarship"; }
            if(y == 3) { foreColor(4); gotoxy(76, 22); cout << "100% Scholarship"; }
            if(y == 4) { foreColor(4); gotoxy(76, 25); cout << "BACK TO MENU"; }

            option = getch();
            if(option == 72) y--; // Up arrow
            if(option == 80) y++; // Down arrow
            if(y < 0) y = 4;
            if(y > 4) y = 0;
            
        } while(option != 13); // Enter key

        // Handle selection
        if(y == 4) {
            MainMenu();      
            return;  
        }; // Back to menu
        
        selectedPercentage = (y == 0) ? 30 : 
                          (y == 1) ? 50 :
                          (y == 2) ? 75 : 
                          (y == 3) ? 100 : 0;
        // Now select duration
        DURATION_SELECTION:
        cls();
        cover();
        BoxPatient();
        
        int y_duration = 0;
        do {
            setcursor(false, 1);
            foreColor(6);
            gotoxy(76, 13); cout << selectedPercentage << "% for 2 YEARS";
            gotoxy(76, 16); cout << selectedPercentage << "% for 4 YEARS";
            gotoxy(70, 19); cout << "BACK TO PERCENTAGE SELECTION";
            
            foreColor(9);
            gotoxy(68, 29);
            cout << "<<< USE UP AND DOWN ARROW KEY >>>";

            // Highlight selected option
            if(y_duration == 0) { foreColor(4); gotoxy(76, 13); cout << selectedPercentage << "% for 2 YEARS"; }
            if(y_duration == 1) { foreColor(4); gotoxy(76, 16); cout << selectedPercentage << "% for 4 YEARS"; }
            if(y_duration == 2) { foreColor(4); gotoxy(70, 19); cout << "BACK TO PERCENTAGE SELECTION"; }

            option = getch();
            if(option == 72) y_duration--; // Up arrow
            if(option == 80) y_duration++; // Down arrow
            if(y_duration < 0) y_duration = 2;
            if(y_duration > 2) y_duration = 0;
            
        } while(option != 13); // Enter key
        if(y_duration == 2) goto PERCENTAGE_SELECTION;
        
        durationYears = (y_duration == 0) ? 2 : 4;
        
        // After getting student ID and verifying:
    Student student = GetStudentRecord(studentId);
    student.setScholarship(selectedPercentage, durationYears);
    ApplyScholarshipToStudent(studentId, selectedPercentage);
    UpdateStudentRecord(student);
    
    // Show the beautiful template
    ScholarshipApplicationTemplate(studentId, selectedPercentage, durationYears);
    
    // Optional: Save to file
    ofstream receipt("Scholarship_Receipts.txt", ios::app);
    if(receipt) {
        receipt << "Scholarship Approved for ID: " << studentId << endl;
        receipt << "Percentage: " << selectedPercentage << "%" << endl;
        receipt << "Duration: " << durationYears << " years" << endl;
        // receipt << "Date: " << dateStr << endl << endl;
        receipt.close();
    }
    }
}

void ProcessStudentPayment() {
    int studentId = 0;
    cls();
    cover();
    
    // Get student ID
    setcursor(true, 1);
    drawBoxSingleLine(60, 17, 46, 1, 3);
    styelIncomeAndExpense();
    gotoxy(61, 18); foreColor(14);
    cout << "Enter Student ID for Payment: ";
    gotoxy(95, 18); studentId = inputNumber(); 

    // Verify student exists
    if (!VerifyStudentExists(studentId)) {
        gotoxy(65, 7); foreColor(4);
        cout << "Error: Student not found!";
        delay(1500);
        return;
    }

    Student student = GetStudentRecord(studentId);
    
    // Payment plan selection
    cls();
    cover();
    BoxStaff();
    
    int y = 0;
    char option;
    
    do {
        setcursor(false, 1);
        foreColor(6);
        gotoxy(76, 13); cout << "ANNUAL PAYMENT";
        gotoxy(76, 16); cout << "SEMESTER PAYMENT";
        gotoxy(76, 19); cout << "BACK TO MENU";
        
        // Highlight selected option
        if (y == 0) { foreColor(4); gotoxy(76, 13); cout << "ANNUAL PAYMENT"; }
        if (y == 1) { foreColor(4); gotoxy(76, 16); cout << "SEMESTER PAYMENT"; }
        if (y == 2) { foreColor(4); gotoxy(76, 19); cout << "BACK TO MENU"; }

        option = getch();
        if (option == 72) y--; // Up arrow
        if (option == 80) y++; // Down arrow
        if (y < 0) y = 3;
        if (y > 3) y = 0;
        
        if (option == 13) { // Enter key
            switch (y) {
                case 0: // Annual payment
                     do
            {
               student.setPaymentPlan("Annual");
                    UpdateStudentRecord(student);
                    invoiceTemplate("Files\\NewStudents.bin", studentId);
                    cls();
                    cover();
               chooseView();
            } while (getch() != 27);
             MainMenu();
            break;
                case 1: // Semester payment
                     do
            {
               student.setPaymentPlan("Semester");
                    UpdateStudentRecord(student);
                    invoiceTemplate("Files\\NewStudents.bin", studentId);
                    cls();
                    cover();
               chooseView();
            } while (getch() != 27);
             MainMenu();
            break;
                case 2: 
                MainMenu();// Back to menu
                    return;
            }
        }
    } while (true);
}

void ABOUTUS()
{
    cls();
    cover();
    foreColor(6);
    styleAboutMe();
    foreColor(9);
    gotoxy(39, 12);
    cout << "-    Topic       : ";
    foreColor(7);
    gotoxy(62, 12);
    cout << "Student Management System.";
    foreColor(9);
    gotoxy(39, 14);
    cout << "-    Member      : ";
    foreColor(7);
    gotoxy(62, 14);
    cout << "Tourn Vuthy, Den Sopheak, Bai Kimhouy.";
    foreColor(9);
    foreColor(9);
    gotoxy(39, 16);
    cout << "-    Instructor   : ";
    foreColor(7);
    gotoxy(62, 16);
    cout << "Leang Panhra";
    foreColor(4);
    gotoxy(39, 20);
    cout << "-    We're students at Western University, subject in";
    gotoxy(39, 22);
    cout << "-     Algorithms and Data Structure ";
    gotoxy(39, 24);
    cout << "-     Thank you so much for using this system!! Hope it works well.";
    foreColor(6);
    gotoxy(65, 34);
    cout << "<<<< Press Any Key back to [MENU] >>>>" << endl;
    getch();
    MainMenu();
}