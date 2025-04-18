#ifndef SPOUSE_H
#define SPOUSE_H

#include "Person.h"
#include "Date.h"

// Эхнэр/Нөхөр класс
class Spouse: public Person {
 Date AnniversaryDate;

   // Гишүүн өгөгдөл
   protected:
   Date anniversaryDate;
   // Гишүүн функцүүд
    public:
    // Огноог буцаах функц
    Date getAnniversaryDate();
    // Огноог тохируулах функц
    void setAnniversaryDate( int y,int m,int d);
    // Spouse Конструктор
    Spouse(int y,int m,int d);
};
#endif