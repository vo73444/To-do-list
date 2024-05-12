#include "todo_list.hpp"
#include <iostream>
using namespace std;

int main(){

    TodoList list;


    list.add("Walk the dog");
    list.add("Walk the dog");
    
    list.all();
    list.complete();
    list.incomplete();

    list.complete(Task("Walk the dog"));
    list.add("Walk the dog");

    list.all();
    list.complete();
    list.incomplete();


    return 0;
}
