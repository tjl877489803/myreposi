
#ifndef user_h
#define user_h

#include "book.h"
#include <string>
#include <list>
using namespace std;

class User
{
private:
    list<Book>borrowed;
public:
    string name;
    string studentNum;
    User();
    User(const string &Name, const string &number);
    void init(const string &Name, const string &number);
    void borrow();
    void resent();
    void queryBook();
};

extern list<User> userlist;

#endif /* user_h */
