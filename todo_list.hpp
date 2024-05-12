#include <map>
#include <vector>
#include <string>
#include "task.hpp"

class TodoList{
    // std::map<std::string, bool> list;
    std::vector<Task> list;

    // Task find(Task task);

    public:

    void add(std::string task = "");
    void complete(Task task);

    void all();
    void complete();
    void incomplete();

    void clear();

};

// tuple<string, bool, vector<string>>()
