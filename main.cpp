#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include "classes/Child.h"
#include "classes/Date.h"
#include "classes/Division.h"
#include "classes/Employee.h"
#include "classes/JobDescription.h"
#include "classes/Person.h"
#include "classes/Spouse.h"

using namespace std;

int main()
{
    vector<Child *> children;
    vector<Division *> divisions;
    vector<Employee *> employees;
    vector<JobDescription *> jobDescs;
    vector<Spouse *> spouses;

    // child.txt уншина
    cout << "READING CHILD" << endl;
    ifstream childFile("./data/child.txt");
    int childCount;
    childFile >> childCount;
    for (int i = 0; i < childCount; ++i)
    {
        char name[50], ss[50], toy[50];
        int age;
        childFile >> name >> ss >> age >> toy;
        children.push_back(new Child(strdup(name), strdup(ss), age, strdup(toy)));
    }
    childFile.close();

    // division.txt уншина
    cout << "READING DIVISION" << endl;
    ifstream divFile("./data/division.txt");
    int divCount;
    divFile >> divCount;
    divFile.ignore();
    for (int i = 0; i < divCount; ++i)
    {
        string name;
        getline(divFile, name);
        char *cname = new char[name.length() + 1];
        strcpy(cname, name.c_str());
        divisions.push_back(new Division(cname));
    }
    divFile.close();

    // jobdesc.txt уншина
    cout << "READING JOBDESC" << endl;
    ifstream jdFile("./data/jobdesc.txt");
    int jdCount;
    jdFile >> jdCount;
    jdFile.ignore();
    for (int i = 0; i < jdCount; ++i)
    {
        string desc;
        getline(jdFile, desc);
        char *cdesc = new char[desc.length() + 1];
        strcpy(cdesc, desc.c_str());
        jobDescs.push_back(new JobDescription(cdesc));
    }
    jdFile.close();

    // spouse.txt уншина
    cout << "READING SPOUSE" << endl;
    ifstream spouseFile("./data/spouse.txt");
    int spouseCount;
    spouseFile >> spouseCount;
    for (int i = 0; i < spouseCount; ++i)
    {
        int y, m, d, age;
        char name[50], ss[50];
        spouseFile >> y >> m >> d >> name >> ss >> age;
        Spouse *s = new Spouse(y, m, d, name, ss, age);
        spouses.push_back(s);
    }
    spouseFile.close();

    // employee.txt уншина
    cout << "READING EMPLOYEE" << endl;
    ifstream empFile("./data/employee.txt");
    int empCount;
    empFile >> empCount;
    for (int i = 0; i < empCount; ++i)
    {
        char name[50], ss[50], id[50], title[50];
        int age, y, m, d;
        empFile >> name >> ss >> age >> id >> title >> y >> m >> d;
        Employee *e = new Employee(strdup(name), strdup(ss), age, strdup(id), strdup(title), y, m, d);

        // Division, Spouse, JobDesc, Child тохируулж өгөх хэсэг
        if (i < divisions.size())
            e->setDivision(divisions[i]);
        if (i < spouses.size())
            e->setSpouse(spouses[i]);
        if (i < jobDescs.size())
            e->getjds().push_back(jobDescs[i%2]);
        if (i < children.size())
            e->getChildren().push_back(children[i]);

        employees.push_back(e);
    }
    empFile.close();

    for (int i = 0; i < employees.size(); i++)
    {
        employees[i]->print();
    }

    return 0;
}
