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

int main() {
    vector<Child*> children;
    vector<Division*> divisions;
    vector<Employee*> employees;
    vector<JobDescription*> jobDescs;
    vector<Spouse*> spouses;

    // child.txt уншина
    ifstream childFile("child.txt");
    int childCount;
    childFile >> childCount;
    for (int i = 0; i < childCount; ++i) {
        char name[50], ss[50], toy[50];
        int age;
        childFile >> name >> ss >> age >> toy;
        children.push_back(new Child(strdup(name), strdup(ss), age, strdup(toy)));
    }
    childFile.close();

    // division.txt уншина
    ifstream divFile("division.txt");
    int divCount;
    divFile >> divCount;
    divFile.ignore();
    for (int i = 0; i < divCount; ++i) {
        string name;
        getline(divFile, name);
        divisions.push_back(new Division(strdup(name.c_str())));
    }
    divFile.close();

    // jobdesc.txt уншина
    ifstream jdFile("jobdesc.txt");
    int jdCount;
    jdFile >> jdCount;
    jdFile.ignore();
    for (int i = 0; i < jdCount; ++i) {
        string desc;
        getline(jdFile, desc);
        jobDescs.push_back(new JobDescription(strdup(desc.c_str())));
    }
    jdFile.close();

    // spouse.txt уншина
    ifstream spouseFile("spouse.txt");
    int spouseCount;
    spouseFile >> spouseCount;
    for (int i = 0; i < spouseCount; ++i) {
        int y, m, d, age;
        char name[50], ss[50];
        spouseFile >> y >> m >> d >> name >> ss >> age;
        Spouse* s = new Spouse(y, m, d);
        s->setName(strdup(name));
        s->setSSNum(strdup(ss));
        s->setAge(age);
        spouses.push_back(s);
    }
    spouseFile.close();

    // employee.txt уншина
    ifstream empFile("employee.txt");
    int empCount;
    empFile >> empCount;
    for (int i = 0; i < empCount; ++i) {
        char name[50], ss[50], id[50], title[50];
        int age, y, m, d;
        empFile >> name >> ss >> age >> id >> title >> y >> m >> d;
        Employee* e = new Employee(strdup(name), strdup(ss), age, strdup(id), strdup(title), y, m, d);

        // Just assigning sample division, spouse, jobdesc for simplicity
        if (i < divisions.size()) e->setDivisionName(divisions[i]);
        if (i < spouses.size()) e->setSpouse(spouses[i]);
        if (i < jobDescs.size()) e->getjds().push_back(jobDescs[i]);
        if (i < children.size()) e->getChildren().push_back(children[i]);

        employees.push_back(e);
    }
    empFile.close();

    // хэвлэх
    for (Employee* e : employees) {
        cout << "Employee: " << e->getName() << ", Title: " << e->getTitle() << ", Division: "
             << (e->getDiv() ? e->getDiv()->getDivisionName() : "N/A") << endl;
    }

    return 0;
}
