
#ifndef LibraryItem_h
#define LibraryItem_h

#include "book.h"
#include "user.h"
#include "administer.h"

class LibraryItem
{
private:
    string name;
public:
    LibraryItem(const string &Name);
    void queryUser();
    void queryBook();
    void queryAdmin();
    void addAdmin();
    void delAdmin();
};

#endif /* LibraryItem_h */
