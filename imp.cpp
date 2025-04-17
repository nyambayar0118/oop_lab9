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

// Employee классын гишүүн функцүүд

// JobDescription классын гишүүн функцүүд

// Person классын гишүүн функцүүд

// Spouse классын гишүүн функцүүд
