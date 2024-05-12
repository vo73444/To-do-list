#include <iostream>

using namespace std;

class Task{
    string name;
    bool status;

    public:

    // Task();

    Task(string name);

    string get_name();

    bool get_status();

    void change_status();

    bool operator==(Task task2);
};


