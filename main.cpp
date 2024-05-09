#include "todo_list.hpp"
#include <iostream>
using namespace std;

int main(){

    TodoList list;


    list.add("");
    list.add("Buy eggs");

    list.all();

    list.add("Take garbage out");

    list.complete("Buy milk");

    list.all();
    list.complete();
    list.incomplete();
    list.clear();
    list.all();

    return 0;
}
