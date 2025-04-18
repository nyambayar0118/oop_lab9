#ifndef CHILD_H
#define CHILD_H

#include "Person.h"

// Хүүхэд класс
class Child: public Person {
    protected:
    char* favoriteToy;

    public:
    char* getFavoriteToy();
    void setFavoriteToy(char* toy);
    Child(char* n, char* ss, int a, char* t);
    ~Child();
};

#endif