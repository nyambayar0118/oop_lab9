#include "Person.h"

// Хүүхэд класс
class Child: public Person {
    char* favoriteToy;

    char* getFavoriteToy();
    void setFavoriteToy(char* toy);
    Child(char* n, char* ss, int a, char* t);
    ~Child();
};