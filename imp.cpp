// Бүх классын гишүүн функцийн хэрэгжүүлэлт хийгдэх файл
#include "classes/lib.h"
#include "classes/Child.h"
#include "classes/Date.h"
#include "classes/Division.h"
#include "classes/Employee.h"
#include "classes/JobDescription.h"
#include "classes/Person.h"
#include "classes/Spouse.h"

using namespace std;

// Child классын гишүүн функцүүд
char *Child::getFavoriteToy()
{
    return favoriteToy;
}
void Child::setFavoriteToy(char *toy)
{
    delete[] favoriteToy;
    favoriteToy = new char[strlen(toy) + 1];
    strcpy(favoriteToy, toy);
}
Child::Child(char *n, char *ss, int a, char *t) : Person(n, ss, a)
{
    setFavoriteToy(t);
}
Child::~Child()
{
    delete[] favoriteToy;
}




// Date классын гишүүн функцүүд
int Date::getYear()
{
    return year;
}
int Date::getMonth()
{
    return month;
}
int Date::getDay()
{
    return day;
}
void Date::setYear(int y)
{
    year = y;
}
void Date::setMonth(int m)
{
    month = m;
}
void Date::setDay(int d)
{
    day = d;
}
Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}






// Division классын гишүүн функцүүд
char *Division::getDivisionName()
{
    return divisionName;
}
void Division::setDivisionName(char *name)
{
    delete[] divisionName;
    divisionName = new char[strlen(name) + 1];
    strcpy(divisionName, name);
}
Division::Division(char *name)
{
    setDivisionName(name);
}
Division::~Division()
{
    delete[] divisionName;
}







// Employee классын гишүүн функцүүд
char *Employee::getCompanyID()
{
    return companyID;
}
char *Employee::getTitle()
{
    return title;
}
Date Employee::getStartDate()
{
    return startDate;
}
Spouse *Employee::getSpouse()
{
    return Spouse;
}
vector<Child *> Employee::getChildren()
{
    return children;
}
vector<JobDescription *> Employee::getjds()
{
    return jds;
}
Division *Employee::getDiv()
{
    return div;
}
void Employee::setCompanyID(char *id)
{
    delete[] companyID;
    companyID = new char[strlen(id) + 1];
    strcpy(companyID, id);
}
void Employee::setTitle(char *tit)
{
    delete[] title;
    title = new char[strlen(tit) + 1];
    strcpy(title, tit);
}
void Employee::setStartDate(int y, int m, int d)
{
    startDate.setYear(y);
    startDate.setMonth(m);
    startDate.setDay(d);
}
Employee::Employee(char *n, char *ss, int a, char *id, char *tit, int y, int m, int d) : Person(n, ss, a)
{
    setCompanyID(id);
    setTitle(tit);
    setStartDate(y, m, d);
}
Employee::~Employee() {
    delete[] companyID;
    delete[] title;
    delete spouse;
    for (auto child : children) delete child;
    for (auto jd : jds) delete jd;
}





// JobDescription классын гишүүн функцүүд
char *JobDescription::getDescription()
{
    return description;
}
void JobDescription::setDescription(char *desc)
{
    delete[] description;
    description = new char[strlen(desc) + 1];
    strcpy(description, desc);
}
JobDescription::JobDescription(char *desc)
{
    setDescription(desc);
}
JobDescription::~JobDescription()
{
    delete[] description;
}





// Person классын гишүүн функцүүд
char *Person::getName()
{
    return name;
}
char *Person::getSSNum()
{
    return SSNum;
}
int Person::getAge()
{
    return age;
}
void Person::setName(char *n)
{
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}
void Person::setAge(int a)
{
    age = a;
}
void Person::setSSNum(char *ss)
{
    delete[] SSNum;
    SSNum = new char[strlen(ss) + 1];
    strcpy(SSNum, ss);
}
Person::Person(char *n, char *ss, int a)
{
    setName(n);
    setSSNum(ss);
    setAge(a);
}
Person::~Person()
{
    delete[] name;
    delete[] SSNum;
}







// Spouse классын гишүүн функцүүд
Date Spouse::getAnniversaryDate()
{
    return anniversaryDate;
}
void Spouse::setAnniversaryDate(int y, int m, int d)
{
    anniversaryDate.setYear(y);
    anniversaryDate.setMonth(m);
    anniversaryDate.setDay(d);
}
Spouse::Spouse(int y, int m, int d)
{
    setAnniversaryDate(y, m, d);
}