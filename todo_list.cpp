#include "todo_list.hpp"
#include <iostream>
#include <iterator>

using namespace std;

void TodoList::add(string task){
    list[task] = false;
}
void TodoList::complete(std::string task){
    list[task] = true;
}

void TodoList::all(){
    if(list.empty()){
        cout <<"\nYou have no current tasks\n";
        return;
    }
    string output = "\nHere is a list of all your tasks:\n";
    map<string, bool>::iterator itr;

    for(itr = list.begin(); itr != list.end(); itr++){
            output = output + itr->first + "\n";
        
    }


    cout << output;
}
void TodoList::complete(){
    string output = "\nHere is a list of your completed tasks:\n";
    map<string, bool>::iterator itr;

    for(itr = list.begin(); itr != list.end(); itr++){
        if(itr->second == true){
            output = output + itr->first + "\n";
        }
    }

    cout << output;
}
void TodoList::incomplete(){
    string output = "\nHere is a list of your incompleted tasks:\n";
    map<string, bool>::iterator itr;

    for(itr = list.begin(); itr != list.end(); itr++){
        if(itr->second == false){
            output = output + itr->first + "\n";
        }
    }

    cout << output;
}

void TodoList::clear(){
    list.clear();
}
