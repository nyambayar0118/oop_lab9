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
char* Child::getFavoriteToy() {
    return favoriteToy;
}
void Child::setFavoriteToy(char* toy) {
    favoriteToy = new char[strlen(toy) + 1];
    strcpy(favoriteToy, toy);
}
// Date классын гишүүн функцүүд

// Division классын гишүүн функцүүд

//get function
char* Division::getDivisionName() {
    return divisionName;
}
//set function
void Division::setDivisionName(char* name) {
    divisionName = new char[strlen(name) + 1];
    strcpy(divisionName, name);
}

// Employee классын гишүүн функцүүд

//get function
char* Employee::getCompanyID() {
    return companyID;
}

// JobDescription классын гишүүн функцүүд

char* JobDescription::getDescription() {
    return description;
}
void JobDescription::setDescription(char* desc) {
    description = new char[strlen(desc) + 1];
    strcpy(description, desc);
}

// Person классын гишүүн функцүүд

char* Person::getName() {
    return name;
}
char* Person::getSSNum() {
    return SSNum;
}
int Person::getAge() {
    return age;
}
void Person::setName(char* n) {
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void Person::setAge(int a) {

    age = a;
}
void Person::setSSNum(char* ss) {
    SSNum = new char[strlen(ss) + 1];
    strcpy(SSNum, ss);
}
// Spouse классын гишүүн функцүүд

//get function
Date Spouse::getAnniversaryDate() {
    return anniversaryDate;
}
//set function
void Spouse::setAnniversaryDate(int y, int m, int d) {
    anniversaryDate.setYear (y);
    anniversaryDate.setMonth(m);
    anniversaryDate.setDay(d);
}
