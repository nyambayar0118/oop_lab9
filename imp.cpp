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

//get function
int Date::getYear() {
    return year;
}
int Date::getMonth() {
    return month;
}
int Date::getDay() {
    return day;
}
//set function
void Date::setYear(int y) {
    year = y;
}
void Date::setMonth(int m) {
    month = m;
}
void Date::setDay(int d) {
    day = d;
}
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
char* Employee::getTitle(){
    return title;
}
Date Employee::getStartDate(){
    return startDate;
}
Spouse* Employee::getSpouse{
    return Spouse;
}
vector<Child*> Employee::getChildren(){
    return children;
}
vector<JobDescription*> Employee::getjds(){
    return jds;
}
Division* Employee::getDiv(){
    return div;
}
//set function
void Employee::setCompanyID(char* id){
    companyID = new char[strlen(id)+1];
    strcpy(companyID, id);
}
void Employee::setTitle(char* tit){
    title = new char[strlen(tit)+1];
    strcpy(title, tit);
}
void Employee::setStartDate(int y, int m, int d){
    startDate.setYear(y);
    startDate.setMonth(m);
    startDate.setDay(d);  
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

//consturctor

//date constructor
Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

//Division parametrtei constructor
Division::Division(char* name) {
    setDivisionName(name);
}
//Division destructor
Division::~Division() {
    delete[] divisionName;
}

//Spouse constructor
Spouse::Spouse(int y,int m,int d){
    Date(y,m,d);
}
//JobDescription constructor
JobDescription::JobDescription(char* desc) {
    setDescription(desc);
}
//JobDescription descturctor
JobDescription::~JobDescription() {
    delete[] description;
}
//Person constructor
Person::Person(char* n, char* ss, int a) {
    setName(n);
    setSSNum(ss);
    setAge(a);
}
//Person destructor
Person::~Person() {
    delete[] name;
    delete[] SSNum;
}

//Child contructor
Child::Child(char* n, char* ss, int a, char* t) :Person(n,ss,a) {
setFavoriteToy(t);
}
//Child destructor
Child::~Child(){
    delete[] favoriteToy;
}