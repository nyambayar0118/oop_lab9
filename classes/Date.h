// Огноо класс
class Date {
    protected:
    int year;
    int month;
    int day;

    public:
    int getYear();
    int getMonth();
    int getDay();

    void setYear(int);
    void setMonth(int);
    void setDay(int);

    void printDate();
};