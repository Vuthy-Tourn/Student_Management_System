#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include "./design.h"
#include <ctime>
using namespace std;

fstream fileStudent;

int AutoID();
char* inputLetter(char*, int); 
char* inputNumber(char*, int); 
char* input4Tel(char*, int);

class Student
{
private:
    int id;
    int age;
    char name[30], gender[10], phoneNumber[20], date[20], address[30], program[30];
    double tuition, additionalFees;
     char paymentPlan[10]; // "Annual" or "Semester"
    int scholarshipPercentage = 0;
    int scholarshipDurationYears;
    bool hasScholarship;

public:
    void Input(int minAge = 0, int maxAge = 100)
    {
        BoxInputPatient();
        foreColor(6);
        gotoxy(124, 18);
        foreColor(3);
        cout << "DD-MM-YYYY";
        gotoxy(38, 14);
        foreColor(2);
        cout << "ID : ";
        gotoxy(96, 14);
        foreColor(2);
        cout << "NAME : ";
        gotoxy(38, 18);
        foreColor(2);
        cout << "GENDER : ";
        gotoxy(96, 18);
        foreColor(2);
        cout << "DATE OF BIRTH : ";
        gotoxy(38, 22);
        foreColor(2);
        cout << "AGE : ";
        gotoxy(96, 22);
        foreColor(2);
        cout << "PHONE NUMBER : ";
        gotoxy(38, 26);
        foreColor(2);
        cout << "ADDRESS : ";
        gotoxy(96, 26);
        foreColor(2);
        cout << "PROGRAM : ";
        gotoxy(38, 30);
        foreColor(2);
        cout << "TUITION ($) : ";
        gotoxy(96, 30);
        foreColor(2);
        cout << "ADDITIONAL FEES ($) : ";

        gotoxy(43, 14);
        cout << id << endl;
        fflush(stdin);
        cin.clear();
        fflush(stdin);
        cin.clear();
        gotoxy(103, 14);
        while (true)
        {
            inputLetter(name, 29);
            if (!strcmp(name, "\0"))
            {
                continue;
            }
            else
            {
                break;
            }
        }
        gotoxy(47, 18);
        while (true)
        {
            inputLetter(gender, 6);
            if (!strcmp(gender, "\0"))
            {
                continue;
            }
            else
            {
                break;
            }
        }

        foreColor(2);
        fflush(stdin);
        cin.clear();

        while (true)
        {
            foreColor(2);

            gotoxy(112, 18);
            cout << "            ";
            gotoxy(112, 18);
            inputNumber(date, 10);

            if (!strcmp(date, "\0"))
            {
                continue;
            }

            if (strlen(date) == 10)
            {
                string day = string(1, date[0]) + string(1, date[1]);
                string month = string(1, date[3]) + string(1, date[4]);
                string year = string(1, date[6]) + string(1, date[7]) + string(1, date[8]) + string(1, date[9]);

                if ((stoi(day) >= 1 && stoi(day) <= 31) && (stoi(month) >= 1 && stoi(month) <= 12) && (stoi(year) >= 1900 && stoi(year) <= 2024) && (date[2] == '-' && date[5] == '-'))
                {
                    time_t now = time(nullptr);
                    tm *currentTime = localtime(&now);

                    age = (currentTime->tm_year+1900) - stoi(year);
                    if (stoi(month) > (currentTime->tm_mon + 1))
                        age--;

                    if (age >= minAge && age <= maxAge)
                        break;
                    else
                    {
                        gotoxy(108, 20);
                        foreColor(4);
                        cout << "Age must be between " << minAge << " - " << maxAge;
                        continue;
                    }
                }
            }
            gotoxy(107, 20);
            cout << "                             ";
            gotoxy(108, 20);
            foreColor(4);
            cout << "Wrong Format";
        }

        gotoxy(107, 20);
        cout << "                             ";
        gotoxy(44, 22);
        cout << age;
        fflush(stdin);
        cin.clear();
        gotoxy(111, 22);

        foreColor(2);
        while (true)
        {
            input4Tel(phoneNumber, 14);
            if (!strcmp(phoneNumber, "\0"))
            {
                continue;
            }
            else
            {
                break;
            }
        }
        fflush(stdin);
        cin.clear();
        gotoxy(48, 26);
        while (true)
        {
            inputLetter(address, 26);
            if (!strcmp(address, "\0"))
            {
                continue;
            }
            else
            {
                break;
            }
        }
        fflush(stdin);
        cin.clear();
        gotoxy(106, 26);
        while (true)
        {
            inputLetter(program, 26);
            if (!strcmp(program, "\0"))
            {
                continue;
            }
            else
            {
                break;
            }
        }
        fflush(stdin);
        cin.clear();
        gotoxy(51, 30);
        tuition = inputFloat();
        fflush(stdin);
        cin.clear();
        gotoxy(123, 30);
        additionalFees = inputFloat();
    }

    void Display(int y)
    {
        drawBoxSingleLine(13, y, 145, 1, 5);
        foreColor(6);
        gotoxy(16, y + 1);
        cout << left << setw(10) << id << setw(20) << name << setw(10) << gender << setw(8) << age << setw(15) << date << setw(18) << program << setw(14) << tuition << setw(14) << scholarshipPercentage << setw(14) <<(tuition * (100 - scholarshipPercentage) / 100) << setw(15) << phoneNumber << setw(15) << address ;
    }

    void Header(int y)
    {
        DrawRectangle(13, y - 1, 145, 1, 2);
        foreColor(4);
        gotoxy(16, y);
        cout << left << setw(10) << "ID" << setw(20) << "Name" << setw(10) << "Gender" << setw(8) << "Age" << setw(15) << "Date of Birth" << setw(18) << "Program" << setw(14) << "Tuition($)" << setw(14) << "Scholarship(%)"<< setw(14) << "After Discount($)" << setw(15) << "Phone Number" << setw(15) << "Address";
    }

    int getID()
    {
        return id;
    }

    int getAge()
    {
        return age;
    }

    double getTuition()
    {
        return tuition;
    }

    double getAdditionalFees()
    {
        return additionalFees;
    }

    char *getName()
    {
        return name;
    }

    char *getAdd()
    {
        return address;
    }

    char *getDate()
    {
        return date;
    }

    char *getProgram()
    {
        return program;
    }

    void setID(int id)
    {
        this->id = id;
    }

    // Scholarship methods
    void setScholarship(int percentage, int years){
    scholarshipPercentage = percentage;
    scholarshipDurationYears = years;
    hasScholarship = true;
    };
    int getScholarshipPercentage(){
        return scholarshipPercentage; 
    };
    void setScholarshipPercentage(int percentage){
         scholarshipPercentage = percentage;
    }
    int getScholarshipDuration(){
        return scholarshipDurationYears; 
    };
    bool hasActiveScholarship(){
        return hasScholarship; 
    };

     // Payment calculation methods
    double calculateAnnualPayment() {
        if (scholarshipPercentage > 0) {
            return (tuition + additionalFees) * (100 - scholarshipPercentage) / 100;
        }
        return tuition + additionalFees;
    }
    
    double calculateSemesterPayment() {
        double base = calculateAnnualPayment() / 2;
        return base + 10.00; // $10 processing fee per semester
    }
    
    void setPaymentPlan(const char* plan) {
        strncpy(paymentPlan, plan, 9);
        paymentPlan[9] = '\0';
    }
    
    const char* getPaymentPlan() const {
        return paymentPlan;
    }
};

Student st;

void InsertStudent(string fileName_Path, int no, int minAge, int maxAge = 100)
{
    setcursor(true, 1);
    int lastId = no;
    fileStudent.open(fileName_Path, ios::in | ios::binary);

    while (fileStudent.read((char *)&st, sizeof(st)))
    {
        lastId = st.getID();
    }
    fileStudent.close();

    fileStudent.open(fileName_Path, ios::out | ios::app | ios::binary);
    st.setID(lastId + 1);
    st.setScholarshipPercentage(0);
    st.Input(minAge, maxAge);
    foreColor(2);
    setcursor(false, 1);
    cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t    <<< Successfully >>>";
    delay(1000);
    ClearBG();
    fileStudent.write((char *)&st, sizeof(st));
    fileStudent.close();
}

void ShowStudent(string fileName_Path)
{
    setcursor(false, 1);
    int y = 12;
    fileStudent.open(fileName_Path, ios::in | ios::binary);
    if (fileStudent.fail())
    {
        gotoxy(73, 15);
        cout << "<<< file not found >>>" << endl;
    }
    else
    {
        cout << endl
             << endl;
        gotoxy(0, 9);
        st.Header(y - 2);
        fileStudent.read((char *)&st, sizeof(st));
        while (fileStudent.eof() != true)
        {
            st.Display(y);
            y += 3;
            fileStudent.read((char *)&st, sizeof(st));
        }
    }
    fileStudent.close();
}

void SearchStudent(string fileName_Path)
{
    setcursor(true, 1);
    int y = 17;
    fileStudent.open(fileName_Path, ios::in | ios::binary);
    bool found = false;
    if (fileStudent.fail())
    {
        setcursor(false, 1);
        gotoxy(75, 15);
        cout << "<<< File Not Found >>>";
        delay(1500);
    }
    else
    {
        int tempId;
        drawBoxSingleLine(64, 4, 38, 1, 3);
        gotoxy(65, 5);
        foreColor(14);
        cout << "Enter ID you want to search : ";
        gotoxy(95, 5);
        tempId = inputNumber();
        setcursor(false, 1);
        fileStudent.read((char *)&st, sizeof(st));
        while (!fileStudent.eof())
        {
            if (tempId == st.getID())
            {
                cover();
                ClearBG();
                gotoxy(77, 5);
                foreColor(3);
                styleSearchPt();
                st.Header(y);
                st.Display(y + 2);
                foreColor(3);
                y += 3;
                cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t <<< Press to Continue >>>";
                getch();
                found = true;
            }
            fileStudent.read((char *)&st, sizeof(st));
        }
        if (found == false)
        {
            cover();
            ClearBG();
            NotFind();
            delay(1000);
        }
    }
    fileStudent.close();
}

void UpdateStudent(string fileName_Path, int minAge, int maxAge = 100)
{
    setcursor(true, 1);
    fileStudent.open(fileName_Path, ios::out | ios::in | ios::binary);
    bool found = false;
    if (fileStudent.fail())
    {
        setcursor(false, 1);
        gotoxy(75, 15);
        cout << "<<< File Not Found >>>" << endl;
        delay(1500);
    }
    else
    {
        int updateid;

        drawBoxSingleLine(64, 4, 38, 1, 3);
        gotoxy(65, 5);
        foreColor(14);
        cout << "Enter ID You want to Update : ";
        gotoxy(95, 5);
        updateid = inputNumber();
        fileStudent.read((char *)&st, sizeof(st));
        while (!fileStudent.eof())
        {
            if (updateid == st.getID())
            {
                cover();
                ClearBG();
                st.Input(minAge, maxAge);
                int lastread = fileStudent.tellg();
                fileStudent.seekp(lastread - sizeof(st));
                fileStudent.write((char *)&st, sizeof(st));
                found = true;
            }
            fileStudent.read((char *)&st, sizeof(st));
        }
        setcursor(false, 1);
        if (found == false)
        {
            cover();
            ClearBG();
            NotFind();
            delay(1000);
        }
        if (found == true)
        {
            cover();
            ClearBG();
            UpDateSuccess();
            delay(1500);
        }
    }
    fileStudent.close();
}

void DeleteStudent(string fileName_Path)
{
    setcursor(true, 1);
    fileStudent.open(fileName_Path, ios::in | ios::binary);
    fstream backup;

    backup.open("Files\\Temp.bin", ios::out | ios::binary);

    bool found = false;
    if (fileStudent.fail())
    {
        setcursor(false, 1);
        gotoxy(75, 15);
        cout << "<<< File Not Found >>>";
        delay(1500);
    }
    else
    {
        int deleteid;
        drawBoxSingleLine(64, 4, 38, 1, 3);
        gotoxy(65, 5);
        foreColor(14);
        cout << "Enter ID You want to Delete : ";
        gotoxy(95, 5);
        deleteid = inputNumber();
        setcursor(false, 1);
        fileStudent.read((char *)&st, sizeof(st));
        while (!fileStudent.eof())
        {
            if (deleteid == st.getID())
            {
                found = true;
            }
            if (deleteid != st.getID())
            {
                backup.write((char *)&st, sizeof(st));
            }
            fileStudent.read((char *)&st, sizeof(st));
        }
        if (found == false)
        {
            cover();
            ClearBG();
            NotFind();
            delay(1000);
        }
        if (found == true)
        {
            cover();
            ClearBG();
            DeleteSuccess();
            delay(1500);
        }
    }
    fileStudent.close();
    backup.close();
    remove(fileName_Path.c_str());
    rename("Files\\Temp.bin", fileName_Path.c_str());
}

int countStudents(){
	int count = 0; 
	fileStudent.open("Files\\NewStudents.bin", ios::in | ios::binary); 
	fileStudent.read((char*)&st, sizeof(st)); 
	while(fileStudent.eof() != true){
		count++; 
		fileStudent.read((char*)&st, sizeof(st)); 
	}
	fileStudent.close(); 
	return count; 
}

void invoiceTemplate(string path, int stuId){
	setcursor(true, 1);
	int y = 17; 
	int count = 0; 
	
	
	if(path == "Files\\NewStudents.bin"){
		count += countStudents();
	}
	
	fileStudent.open(path, ios::in | ios::binary);
	bool found = false;
	if(fileStudent.fail())
	{
		setcursor(false, 1);
		gotoxy(75, 15);
		cout<<"<<< File Not Found >>>";
		delay(1500);
	}
	else
	{
		setcursor(false, 1);
		fileStudent.read((char*)&st,sizeof(st));
		while(!fileStudent.eof())
		{
			count++; 
			if(stuId == st.getID())
			{
				ClearBG();
				cover(); 
				BoxDisplayInvoice();
                double percentage = st.getScholarshipPercentage();
                time_t timestamp = time(NULL);
                struct tm datetime = *localtime(&timestamp);
                // Calculate payment amounts
                double baseAmount = st.getTuition();
                double discount = 0;
                double processingFee = 0;
                
                if(percentage > 0) {
                    discount = baseAmount * percentage / 100;
                    baseAmount -= discount;
                }

                if(strcmp(st.getPaymentPlan(), "Semester") == 0) {
                    baseAmount /= 2;
                    // processingFee = 10.00;
                }
				foreColor(2);
                // Student Information 
				gotoxy(28, 13); cout<<"Invoice ID "; gotoxy(50, 13); cout<<"YTT-123-00"<<count++;  
				gotoxy(90, 13); cout << "Invoice Date:"; gotoxy(117, 13); cout << asctime(&datetime);
				gotoxy(28, 15); cout<<"Student ID  "; gotoxy(50, 15); cout<<st.getID();  
				gotoxy(90, 15); cout<<"Student Name "; gotoxy(117, 15); cout<<st.getName(); 
				gotoxy(28, 17); cout<<"Program "; gotoxy(50, 17); cout<<st.getProgram(); 
				gotoxy(90, 17); cout<<"Address "; gotoxy(117, 17); cout<<st.getAdd();  
			
				foreColor(2); gotoxy(29, 21); cout<<"NO"; gotoxy(38, 21); cout<<"Description"; gotoxy(131, 21); cout<<"Price"; 
				foreColor(2); gotoxy(29, 24); cout<<"1"; gotoxy(38, 24); cout<<st.getPaymentPlan()<< " Payment"; gotoxy(131, 24); cout<<"$"<< baseAmount; 
				foreColor(2);  if(percentage > 0) {
                gotoxy(29, 28); cout << "2";
                gotoxy(38, 28); cout << "Scholarship (" << percentage << "%)"; 
                gotoxy(131, 28); cout << "-$" << discount;
                 }
				gotoxy(124, 31); cout<<"Total : $"<<baseAmount; 

                    // Payment terms
                foreColor(14);
                gotoxy(28, 36); cout << "Noted: ";
                if(strcmp(st.getPaymentPlan(), "Semester") == 0) {
                    cout << "Second payment of $" << baseAmount << " due next semester";
                } else {
                    cout << "Full annual payment";
                }
				gotoxy(0, 37); cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t <<< Press to Continue >>>";
				getch();
				found = true;
				break; 
			}
			fileStudent.read((char*)&st,sizeof(st));
		}
		if(found == false)
		{
			cover();
			ClearBG();
			NotFind();
			delay(1000);
		}
	}
	fileStudent.close();
}

int countTotalStudents(string fileName_Path) 
{
    int totalCount = 0;
    fileStudent.open(fileName_Path, ios::in | ios::binary);
    fileStudent.seekg(0, ios::end);
    int fileSize = fileStudent.tellg(); 
    int recordSize = sizeof(Student);

    if(fileSize > 0) 
	{
        totalCount = fileSize / recordSize;
    }

    fileStudent.close();
    return totalCount;
}

// Utility functions
bool VerifyStudentExists(int id) {
    fstream file("Files\\NewStudents.bin", ios::in | ios::binary);
    if(!file.is_open()) return false;

    Student temp;
    bool found = false;
    
    while(file.read((char*)&temp, sizeof(Student))) {
        if(temp.getID() == id) {
            found = true;
            break;
        }
    }
    
    file.close();
    return found;
}

Student GetStudentRecord(int id) {
    fstream file("Files\\NewStudents.bin", ios::in | ios::binary);
    Student student;
    
    if(file.is_open()) {
        while(file.read((char*)&student, sizeof(Student))) {
            if(student.getID() == id) {
                break;
            }
        }
        file.close();
    }
    return student;
}

void UpdateStudentRecord(Student updatedStudent) {
    fstream tempFile("Files\\TempStudents.bin", ios::out | ios::binary);
    fstream mainFile("Files\\NewStudents.bin", ios::in | ios::binary);
    
    if(mainFile.is_open() && tempFile.is_open()) {
        Student current;
        
        while(mainFile.read((char*)&current, sizeof(Student))) {
            if(current.getID() == updatedStudent.getID()) {
                tempFile.write((char*)&updatedStudent, sizeof(Student));
            } else {
                tempFile.write((char*)&current, sizeof(Student));
            }
        }
        
        mainFile.close();
        tempFile.close();
        
        remove("Files\\NewStudents.bin");
        rename("Files\\TempStudents.bin", "Files\\NewStudents.bin");
    }
}

double CalculateAmountDue(Student student) {
    double baseFee = student.getTuition();
    if(student.hasActiveScholarship()) {
        return baseFee * (100 - student.getScholarshipPercentage()) / 100;
    }
    return baseFee;
}

void ApplyScholarshipToStudent(int studentId, int percentageChoice) {
    if(!VerifyStudentExists(studentId)) {
        gotoxy(65, 28); cout << "Error: Student not found!";
        delay(1500);
        return;
    }

    Student student = GetStudentRecord(studentId);
    int duration = (percentageChoice >= 3) ? 4 : 2; // 75% and 100% get 4 years
    
    student.setScholarship(
        (percentageChoice == 1) ? 30 : 
        (percentageChoice == 2) ? 50 : 
        (percentageChoice == 3) ? 75 : 100,
        duration
    );
    
    UpdateStudentRecord(student);
}

void ScholarshipApplicationTemplate(int studentId, int percentage, int durationYears) {
    cls();
    cover();
    BoxDisplayScholarship(); // Using our new scholarship-specific box
    
    Student student = GetStudentRecord(studentId);
    SYSTEMTIME currentTime;
    GetLocalTime(&currentTime);
    char dateStr[11];
    sprintf(dateStr, "%02d-%02d-%04d", currentTime.wDay, currentTime.wMonth, currentTime.wYear);

    // Student Information Section
    foreColor(2);
    gotoxy(28, 13);  cout << "Student ID:";       gotoxy(50, 13);  cout << studentId;
    gotoxy(105, 13); cout << "Application Date:"; gotoxy(125, 13); cout << dateStr;
    
    gotoxy(28, 15);  cout << "Student Name:";     gotoxy(50, 15);  cout << student.getName();
    gotoxy(105, 15); cout << "Program:";          gotoxy(125, 15); cout << student.getProgram();

    // Scholarship Details
    foreColor(2);
    gotoxy(29, 23); cout<<"1";  gotoxy(38, 23); cout << "Percentage Award";       gotoxy(82, 23); cout << durationYears << " Years";  gotoxy(125, 23); cout << percentage << "%";
    gotoxy(29, 25); cout<<"2"; gotoxy(38, 25); cout << "Original Tuition";       gotoxy(82, 25); cout << "Per Year";                gotoxy(125, 25); cout << "$" << student.getTuition();
    gotoxy(29, 27); cout<<"3"; gotoxy(38, 27); cout << "Annual Scholarship";     gotoxy(82, 27); cout << "Discount";                gotoxy(125, 27); cout << "$" << (student.getTuition() * percentage / 100);
    gotoxy(29, 29); cout<<"4"; gotoxy(38, 29); cout << "Final Annual Payment";   gotoxy(82, 29); cout << "After Discount";               gotoxy(125, 29); cout << "$" << student.getTuition() * (100 - percentage) / 100;
    UpdateStudentRecord(student);
    // Additional Information
    foreColor(14);
    gotoxy(28, 33); cout << "Scholarship ID: SCH-" << student.getID() << "-" << percentage << "-" << durationYears;
    
    gotoxy(0, 37); cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t <<< Press any key to continue >>>";
    getch();
}

char* inputLetter(char* charArray, int n)
{
	char input;
	int index = 0;
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		else if(index == n) continue; 
		else if(!(input>='a' && input<='z' || input>='A' && input<='Z' || input == 32 ))
		{
			continue;
		}
		else
		{
			printf("%c", input);
			// add char array
			charArray[index] = input;
			//next position
			index++;
		}
	}
	// set to NULL
	charArray[index] = '\0';//charArray[index] = NULL;
	
	return charArray;
}

char* inputNumber(char* charArray, int n)
{
	char input;
	int index = 0;
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		else if(index == n) continue; 
		else if(!(input>='0' && input<='9' || input == '.' || input == '-')  )
		{
			continue;
		}
		else
		{
			printf("%c", input);
			// add char array
			charArray[index] = input;
			//next position
			index++;
		}
	}
	// set to NULL
	charArray[index] = '\0';//charArray[index] = NULL;
	
	return charArray;
}

char* input4Tel(char* charArray, int n)
{
	char input;
	int index = 0;
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		else if(index == n) continue; 
		else if(!(input>='0' && input<='9' || input == 32 || input == '+') )
		{
			continue;
		}
		else
		{
			printf("%c", input);
			// add char array
			charArray[index] = input;
			//next position
			index++;
		}
	}
	// set to NULL
	charArray[index] = '\0';//charArray[index] = NULL;
	
	return charArray;
}

#endif