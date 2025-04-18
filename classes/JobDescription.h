#ifndef JOBDESCRIPTION_H
#define JOBDESCRIPTION_H

// Албан тушаал класс
class JobDescription
{
    // Албан тушаалын тодорхойлолт гишүүн өгөгдөл
    protected:
    char *description;
    // гишүүн функцууд
    // албан тушаалын тодорхойлолтыг буцаах функц
    public:
    char *getDescription();
    // албан тушаалын тодорхойлолтыг тохируулах функц
    void setDescription(char* desc);
    // JobDescription классын конструктор
    JobDescription(char* desc);
    ~JobDescription();
};
#endif