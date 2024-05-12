#include "todo_list.hpp"
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

void TodoList::add(string task){
    if(task == ""){
        cout << "\nPlease enter something valid to be added to the list.\n";

        return;
    }
    else if(find(list.begin(), list.end(), task) != list.end()){
        vector<Task>::iterator itr;
        for(itr = list.begin(); (*itr).get_name() == task; itr++){
            if((*itr).get_status() == false){
                cout << "\nTask is already on the list.\n";
                return;
            }
            else{
                   list.push_back(Task(task));
                   return;
            }
        
        }

    }
    
    list.push_back(Task(task));
}
void TodoList::complete(Task task){
    if(find(list.begin(), list.end(), task) == list.end()){
        cout << "\nTask '" << task.get_name() << "' does not exist in list\n";
        return;
    }
    else{
        vector<Task>::iterator itr;
        for(itr = list.begin(); itr < list.end(); itr++){
            if(*itr == task){
                (*itr).change_status();
            }
        }
    }
}

void TodoList::all(){
    if(list.empty()){
        cout <<"\nYou have no current tasks\n";
        return;
    }
    string output = "\nHere is a list of all your tasks:\n";
    vector<Task>::iterator itr;

    for(itr = list.begin(); itr < list.end(); itr++){
            output = output + (*itr).get_name() + "\n";
        
    }


    cout << output;
}
void TodoList::complete(){
    string output = "\nHere is a list of your completed tasks:\n";
    vector<Task>::iterator itr;

    for(itr = list.begin(); itr < list.end(); itr++){
        if((*itr).get_status() == true){
            output = output + (*itr).get_name() + "\n";
        }
    }

    cout << output;
}
void TodoList::incomplete(){
    string output = "\nHere is a list of your incompleted tasks:\n";
    vector<Task>::iterator itr;

    for(itr = list.begin(); itr < list.end(); itr++){
        if((*itr).get_status() == false){
            output = output + (*itr).get_name() + "\n";
        }
    }

    cout << output;
}

void TodoList::clear(){
    list.clear();
}
