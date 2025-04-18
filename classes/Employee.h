#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include "Spouse.h"
#include "Division.h"
#include "JobDescription.h"
#include "Child.h"
#include "lib.h"
#include "Date.h"
#include <vector>

using namespace std;
// Ажилтан класс
class Employee: public Person {
    //гишүүн өгөгдөлүүд

    protected:
    //компанийн id
    char* companyID;
    char* title;
    Date startDate;
    Spouse* so;
    vector<Child*> children;
    vector<JobDescription*> jds;
    Division* div;

    //гишүүн функцүүд
    public:
    //компанийн id-г буцаах функц
    char* getCompanyID();
    //компанийн title-г тохируулах функц
    char* getTitle();
    //компанийн startdate-г тохируулах функц
    Date getStartDate();
    //компанийн spouse-г тохируулах функц
    Spouse* getSpouse();
    //компанийн children-г тохируулах функц
    vector<Child*> getChildren();
    //компанийн jds-г тохируулах функц
    vector<JobDescription*> getjds();
    //компанийн div-г тохируулах функц
    Division* getDiv();
    //компанийн id-г авах функц
    void setCompanyID(char* id);
    //компанийн title-г авах функц
    void setTitle(char* tit);
    //компанийн startdate-г авах функц
    void setStartDate(int y, int m, int d);
    void setDivisionName(char *name);
    void setSpouse(Spouse* s);
    //
    Employee(char* n, char* ss, int a, char* id, char* tit, int y, int m, int d );
    ~Employee();
};

#endif