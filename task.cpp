#include "task.hpp"

using namespace std;

// Task::Task(){
// }


Task::Task(string name){
    this->name = name;
    status = false;
}

string Task::get_name(){
    return name;
}

bool Task::get_status(){
    return status;
}

void Task::change_status(){
    status = true;
}

bool Task::operator==(Task task2){
    return this->name == task2.get_name();
}
