// Ажлын хэлтэс класс
class Division
{
    // гишүүн өгөгдөл
    protected:
    //  хэлтэсийн нэр
    char *divisionName;
    // гишүүн функц
    public:
    //  хэлтэсийн нэрийг буцаах функц
    char *getDivisionName();
    // хэлтэсийн нэрийг тохируулах функц
    void setDivisionName(char *name);
    //Division классын конструктор
    Division(char* name);
};