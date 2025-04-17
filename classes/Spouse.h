#include "Person.h"
#include "Date.h"

// Эхнэр/Нөхөр класс
class Spouse: public Person {
   // Гишүүн өгөгдөл
   protected:
   Date anniversaryDate;
   // Гишүүн функцүүд
    public:
    // Огноог буцаах функц
    Date getAnniversaryDate();
    // Огноог тохируулах функц
    void setAnniversaryDate( int y,int m,int d);
    // Spouse өргөтгөсөн конструктор
    Spouse(int y,int m,int d, char* n, char* ss, int a);
};