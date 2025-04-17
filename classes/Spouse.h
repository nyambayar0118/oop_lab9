#include "Person.h"
#include "Date.h"

// Эхнэр/Нөхөр класс
class Spouse: public Person {
<<<<<<< HEAD
ds;
=======
   // Гишүүн өгөгдөл
   protected:
   Date anniversaryDate;
   // Гишүүн функцүүд
    public:
    // Огноог буцаах функц
    Date getAnniversaryDate();
    // Огноог тохируулах функц
    void setAnniversaryDate( int y,int m,int d);
<<<<<<< HEAD
>>>>>>> b718aac368ba87000f8c01b6515d23bc7f7b54f5
=======
    // Spouse Конструктор
    Spouse(int y,int m,int d);
>>>>>>> 3f405ac4bc891ab527f043ada82c949ad63b0e81
};