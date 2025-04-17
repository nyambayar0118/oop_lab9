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

    void setName(char* n);
    void setAge(int a);
    void setSSNum(char*);
};