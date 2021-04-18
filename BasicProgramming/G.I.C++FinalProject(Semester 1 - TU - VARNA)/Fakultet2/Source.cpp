#include<iostream>
#include<string>
#include<conio.h>
#include <algorithm>
#include<fstream>
#include<windows.h>
using namespace std;

int countSIT = 0;
int countKST = 0;
int br = 1;
bool Continue = true;
bool ContinueS = true;


struct Grades {
    string disciplines[5] = { "Базово програмиране", "Спорт", "Математика", "Електроника", "Уеб дизайн" };
    int gradesArray[5];
    double average;
};
struct Student {
    string specialty;
    string facultyNumber;
    string name;
    string dateOfBirth;
    Grades grades;
    int ageInMonths;
};

Student studentsG[30][1];
Student students[30];
int sizeStudent = 0;
Student groupK[6][5];
Student groupS[6][5];
int sizeGroupS[6][1] = { {0},{0},{0},{0},{0},{0} };
int sizeGroupK[6][1] = { {0},{0},{0},{0},{0},{0} };

//Базова задача
void menu();
void option(int choice);
void enterNewStudent(int n);
void displayStudent(Student student);
void displayStudents();
void displayExcellentBP();
string facultyNumbersSIT();
string facultyNumbersKST();
//Допълнение Първо
void distributeStudents();
void displayGroups(Student group[6][5], int sizegroup[6][1]);
//Допълнение Второ
void swapStudents(string facNm1, string facNm2, Student group[6][5], int sizegroup[6][1]);
void chooseStudent();
void deleteStudent(string fNum);
void eraseStudent();
//Допълнение Трето
void submenu();
void optionS(int choiceS);
void findAverage();
void sortAverage();
void printAverage();
void findAge();
void sortAge();
void bestSK();
void excellentStudents();
void fileSave();
void fileRead();

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    fileRead();
    int choice;
    while (Continue) {
        menu();
        cin >> choice;
        int k = 0;
        option(choice);
    }
    return 0;
}

//Базова задача
void menu()
{
    cout << "                      ______                     " << endl;
    cout << "                      |МЕНЮ|                     " << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "| " << "1. Добавете студент." << "                            |" << endl;
    cout << "| " << "2. Добавете n на брой студента." << "                 |" << endl;
    cout << "| " << "3. Извеждане на студенти от дадена специалност." << " |" << endl;
    cout << "| " << "4. Извеждане на студенти с отличен по БП." << "       |" << endl;
    cout << "| " << "5. Разпределение на студентите." << "                 |" << endl;
    cout << "| " << "6. Сортиране на студентите." << "                     |" << endl;
    cout << "| " << "7. Студенти с най-добър успех от СИТ и КСТ." << "     |" << endl;
    cout << "| " << "8. Студенти с успех над 5.50." << "                   |" << endl;
    cout << "| " << "9. Размяна на групите на двама студенти." << "        |" << endl;
    cout << "| " << "10. Изтриване на студент от група." << "              |" << endl;
    cout << "| " << "0. Изход." << "                                       |" << endl;
    cout << "| " << "Въведете число{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0}" << "|" << endl;
    cout << "---------------------------------------------------" << endl;
}

void option(int choice)
{
    int k;
    switch (choice)
    {
    case 1:
        enterNewStudent(1);
        break;
    case 2:
        cout << "Въведете броят на студентите, които искате да добавите (n - число): ";
        cin >> k;
        enterNewStudent(k);
        break;
    case 3:
        displayStudents();
        break;
    case 4:
        displayExcellentBP();
        break;
    case 5:
        distributeStudents();
        break;
    case 6:
        int choiceS;
        while (ContinueS) {
            submenu();
            cin >> choiceS;
            optionS(choiceS);
        }
        ContinueS = true;
        break;
    case 7:
        bestSK();
        break;
    case 8:
        excellentStudents();
        break;
    case 9:
        chooseStudent();
        break;
    case 10:
        eraseStudent();
        break;
    case 0:
        fileSave();
        Continue = false;
    }
}

void enterNewStudent(int n)
{
    while (n > 0)
    {
        cout << endl;
        cout << "-> Въведете информация за Студент " << sizeStudent + 1 << " <-" << endl;
        cout << "Въведете специалност(КСТ/СИТ): ";
        cin >> students[sizeStudent].specialty;
        if (students[sizeStudent].specialty == "СИТ")
        {
            string fNumS = facultyNumbersSIT();
            cout << "Факултетен номер: ";
            cout << fNumS << endl;
            students[sizeStudent].facultyNumber = fNumS;
        }
        else if (students[sizeStudent].specialty == "КСТ")
        {
            string fNumK = facultyNumbersKST();
            cout << "Факултетен номер: ";
            cout << fNumK << endl;
            students[sizeStudent].facultyNumber = fNumK;
        }
        cout << "Въведете име: ";
        cin >> students[sizeStudent].name;
        cout << "Въведете месец и година на раждане в следния формат(mm/yyyy): ";
        cin >> students[sizeStudent].dateOfBirth;
        for (int i = 0; i < 5; i++)
        {
            cout << "Въведете оценка по " << students[sizeStudent].grades.disciplines[i] + ": ";
            cin >> students[sizeStudent].grades.gradesArray[i];

        }
        sizeStudent++;
        n--;
    }
    cout << endl;
}

void displayStudent(Student student)
{
    cout << student.specialty << endl;
    cout << student.facultyNumber << endl;
    cout << student.name << endl;
    cout << student.dateOfBirth << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << student.grades.disciplines[i] << endl;
        cout << student.grades.gradesArray[i] << endl;
    }
    cout << endl;
}

void displayStudents()
{
    string Specialty;
    cout << "Изберете специалност (СИТ/КСТ): " << endl;
    cin >> Specialty;
    for (int i = 0; i < sizeStudent; i++)
    {
        if (students[i].specialty == Specialty)
        {
            displayStudent(students[i]);
        }
    }
}

void displayExcellentBP()
{
    for (int i = 0; i < sizeStudent; i++)
    {
        if (students[i].grades.gradesArray[0] == 6)
        {
            displayStudent(students[i]);
        }
    }
}

string facultyNumbersSIT()
{
    string currentFaculty;
    if (countSIT < 10)
    {
        currentFaculty = "1262150" + to_string(countSIT + 1);
    }
    else
    {
        currentFaculty = "126215" + to_string(countSIT + 1);
    }
    countSIT++;
    return currentFaculty;
}

string facultyNumbersKST()
{
    string currentFaculty;
    if (countKST < 10)
    {
        currentFaculty = "1262160" + to_string(countKST + 1);
    }
    else
    {
        currentFaculty = "126216" + to_string(countKST + 1);
    }
    countKST++;
    return currentFaculty;
}
//Допълнение Първо
void distributeStudents()
{
    for (int i = 0; i < 6; i++)
    {
        sizeGroupS[i][0] = 0;
        sizeGroupK[i][0] = 0;
    }
    int remainderS = countSIT % 5;
    int groupsS;
    if (remainderS == 0)groupsS = countSIT / 5;
    else groupsS = countSIT / 5 + 1;
    int brGroupsS = 0;
    int brCellS = 0;
    int remainderК = countKST % 5;
    int groupsК;
    if (remainderК == 0)groupsК = countKST / 5;
    else groupsК = countKST / 5 + 1;
    int brGroupsК = 0;
    int brCellК = 0;
    for (int i = 0; i < sizeStudent; i++)
    {
        if (students[i].specialty == "СИТ")
        {
            groupS[brGroupsS][sizeGroupS[brGroupsS][0]] = students[i];
            sizeGroupS[brGroupsS][0]++;
            if (brGroupsS + 1 == groupsS) { brGroupsS = -1; brCellS++; }
            brGroupsS++;
        }
        else if (students[i].specialty == "КСТ")
        {
            groupK[brGroupsК][brCellК] = students[i];
            sizeGroupK[brGroupsК][0]++;
            if (brGroupsК + 1 == groupsК) { brGroupsК = -1; brCellК++; }
            brGroupsК++;
        }
    }
    displayGroups(groupS, sizeGroupS);
    displayGroups(groupK, sizeGroupK);
}

void displayGroups(Student group[6][5], int sizegroup[6][1])
{
    for (int k = 0; k < 6; k++)
    {
        for (int i = 0; i < sizegroup[k][0]; i++)
        {
            Student tempStudent = group[k][i];
            cout << tempStudent.facultyNumber << " " << tempStudent.name << endl;
        }
        cout << endl;
    }
}
//Допълнение Второ
void swapStudents(string facNm1, string facNm2, Student group[6][5], int sizegroup[6][1])
{
    int fl = 0;
    int group1, group2;
    int pos1, pos2;
    Student student1, student2;
    for (int k = 0; k < 6; k++)
    {
        for (int i = 0; i < sizegroup[k][0]; i++)
        {
            Student tempStudent = group[k][i];
            if (tempStudent.facultyNumber == facNm1) {
                student1 = tempStudent;
                fl++;
                group1 = k; pos1 = i;
                if (fl == 2)break;
            }
            if (tempStudent.facultyNumber == facNm2) {
                student2 = tempStudent;
                fl++;
                group2 = k; pos2 = i;
                if (fl == 2)break;
            }
            if (fl == 2)break;
        }
        if (fl == 2)break;
    }
    if (fl == 2)
    {
        group[group2][pos2] = student1;
        group[group1][pos1] = student2;
    }
}

void chooseStudent()
{
    string fac1, fac2;
    cout << "Въведете факултетен номер на студент 1: ";
    cin >> fac1;
    cout << "Въведете факултетен номер на студент 2: ";
    cin >> fac2;
    if (fac1[5] == '5' && fac2[5] == '5')
    {
        swapStudents(fac1, fac2, groupS, sizeGroupS);
        displayGroups(groupS, sizeGroupS);
    }
    else if (fac1[5] == '6' && fac2[5] == '6')
    {
        swapStudents(fac1, fac2, groupK, sizeGroupK);
        displayGroups(groupK, sizeGroupK);
    }
    else
    {
        cout << "Моля въведете факултетни номера на студенти от една и съща специалност!" << endl;
    }

}

void eraseStudent()
{
    string fac;
    cout << "Въведете факултетен номер на студента: ";
    cin >> fac;
    if (fac[5] == '5')
    {
        deleteStudent(fac);
    }
    else if (fac[5] == '6')
    {
        deleteStudent(fac);
    }
}

void deleteStudent(string fNum)
{
    Student tempStudent;
    for (int i = 0; i < sizeStudent; i++)
    {
        if (fNum == students[i].facultyNumber)
        {
            tempStudent = students[i];
            students[i] = students[sizeStudent - 1];
            students[sizeStudent - 1] = tempStudent;
            sizeStudent--;
        }
    }
    distributeStudents();
}
//Допълнение Трето
void submenu()
{
    cout << "                      _________                     " << endl;
    cout << "                      |Подменю|                     " << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "| " << "1. Сортиране на студентите по среден успех." << "     |" << endl;
    cout << "| " << "2. Сортиране на студентите по възраст в месеци." <<"  |" << endl;
    cout << "| " << "0. Назад." << "                                       |" << endl;
    cout << "| " << "  ->Въведете число {1, 2, 0}<-" << "               |" << endl;
    cout << "---------------------------------------------------" << endl;
}
void optionS(int choiceS)
{
    switch (choiceS)
    {
    case 1:
        findAverage();
        printAverage();
        break;
    case 2:
        findAge();
        sortAge();
        break;
    case 0:
        ContinueS = false;
    }
}


void findAverage()
{
    double avg = 0;
    for (int i = 0; i < countSIT + countKST; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            avg += students[i].grades.gradesArray[j];
        }
        avg /= 5;
        students[i].grades.average = avg;
        avg = 0;
    }
}

void sortAverage()
{
        int i, j;
        for (i = 0; i < sizeStudent - 1; i++)
            for (j = 0; j < sizeStudent - i - 1; j++)
                if (students[j].grades.average < students[j + 1].grades.average)
                    swap(students[j], students[j + 1]);
}

void printAverage()
{
    sortAverage();
    cout << endl;
    for (int k = 0; k < sizeStudent; k++)
    {
        cout << k + 1 << ". " << students[k].name << " - " << students[k].specialty << " - " << students[k].facultyNumber << " - " << students[k].dateOfBirth
            << " - " << students[k].grades.average << endl;
    }
}

void findAge()
{
    int ageInMonths = 0;
    int month = 0;
    int year = 0;
    for (int i = 0; i < sizeStudent; i++)
    {
        month = stoi(students[i].dateOfBirth.substr(0, 2));
        year = stoi(students[i].dateOfBirth.substr(3, 4));
        ageInMonths = (2020 - year) * 12 - month;
        students[i].ageInMonths = ageInMonths;
    }
}

void sortAge()
{
    int i, j;
    for (i = 0; i < sizeStudent - 1; i++)
        for (j = 0; j < sizeStudent - i - 1; j++)
            if (students[j].ageInMonths < students[j + 1].ageInMonths)
                swap(students[j], students[j + 1]);
    cout << endl;
    for (int k = 0; k < sizeStudent; k++)
    {
        cout << k + 1 << ". " << students[k].name << " - " << students[k].specialty << " - " << students[k].facultyNumber << " - " << students[k].dateOfBirth
            << endl;
    }
}
void bestSK()
{
    findAverage();
    sortAverage();
    bool stop = true; 
    int brS = 0, brK = 0;
    int i = 0;
    while (stop)
    {
        if (students[i].specialty == "СИТ" && brS == 0)
        {
            cout << "1." << students[i].name << " - " << students[i].specialty << " - " <<
                students[i].facultyNumber << " - " << students[i].grades.average << endl;
            brS++;
        }
        if (students[i].specialty == "КСТ" && brK == 0)
        {
            cout << "2." << students[i].name << " - " << students[i].specialty << " - " <<
                students[i].facultyNumber << " - " << students[i].grades.average << endl;
            brK++;
        }
        if (brS > 0 && brK > 0)
        {
            stop = false;
        }
        i++;
    }
}
void excellentStudents()
{
    findAverage();
    sortAverage();
    for (int i = 0; i < sizeStudent; i++)
    {
        if (students[i].grades.average >= 5.50)
        {
            cout << i + 1 << "." << students[i].name << " - " << students[i].facultyNumber << " - " << students[i].specialty << " - " << students[i].dateOfBirth << " - " << students[i].grades.average << endl;
        }
        else break;
    }
}
void fileSave()
{
    findAverage();
    ofstream myFile;
    myFile.open("Data.txt");
    myFile << sizeStudent << endl;
    for (int i = 0; i < sizeStudent; i++)
    {
        if (myFile)
        {
            myFile << students[i].specialty << endl;
            myFile << students[i].facultyNumber << endl;
            myFile << students[i].name << endl;
            myFile << students[i].dateOfBirth << endl;
            myFile << students[i].ageInMonths << endl;
            for (int j = 0; j < 5; j++)
            {
                myFile << students[i].grades.gradesArray[j]<< endl;
            }
            myFile << students[i].grades.average << endl;
        }
        else
        {
            cout << "Can't open file data /Data.txt/" << endl;
        }
    }
    myFile << countSIT<< endl;
    myFile << countKST << endl;
    myFile << br << endl;
    myFile.close();
}
void fileRead()
{
    ifstream myFile;
    myFile.open("Data.txt");
    myFile >> sizeStudent;
    for (int i = 0; i < sizeStudent; i++)
    {
        if (myFile)
        {
            myFile >> students[i].specialty;
            myFile >> students[i].facultyNumber;
            myFile >> students[i].name;
            myFile >> students[i].dateOfBirth;
            myFile >> students[i].ageInMonths;
            for (int j = 0; j < 5; j++)
            {
                myFile >> students[i].grades.gradesArray[j];
            }
            myFile >> students[i].grades.average;
        }
        else
        {
            cout << "Can't open file data /Data.txt/" << endl;
        }
    }
    myFile >> countSIT;
    myFile >> countKST;
    myFile >> br;
    myFile.close();
}


