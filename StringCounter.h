
#include <map>
#include <string>

class StringCounter
{
private:
    std::map<std::string, int> myMap;

public:
    void addString(const std::string &str)
    {
        myMap[str]++;
    }
    int getCount(const std::string str)
    {

        return (myMap.count(str) > 0) ? myMap.at(str) : 0;
    }
    void incrementCount(const std::string &str)
    {
        myMap[str]++;
    }
    void decrementCount(const std::string &str)
    {
        myMap[str]--;
        if (myMap[str] < 0)
            myMap[str] = 0;
    }
    std::map<std::string, int>::iterator begin(){
        return myMap.begin();
    }
    std::map<std::string,int>::iterator end(){
        return myMap.end();
    }

};