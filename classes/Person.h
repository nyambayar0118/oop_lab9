// Хүн класс
class Person {
    protected:
    char* name;
    char* SSNum;
    int age;

    public:
    char* getName();
    char* getSSNum();
    int getAge();

    void setName(char*);
    void setAge(int);
    void setSSNum(char*);
};