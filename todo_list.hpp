#include <map>
#include <string>

class TodoList{
    std::map<std::string, bool> list;

    public:

    void add(std::string task = "");
    void complete(std::string task);

    void all();
    void complete();
    void incomplete();

    void clear();

};

// tuple<string, bool, vector<string>>()
