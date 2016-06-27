
#ifndef administer_h
#define administer_h

#include <string>
#include "user.h"
#include "book.h"
using namespace std;

class admin
{
private:
    string adminNum;
    string password;
    
public:
    admin()
    {
        
    }
    string getAdminnum()
    {
        return adminNum;
    }
    string getPassword()
    {
        return password;
    }
    admin(const string &Num, const string &password);
    void addBook();//书籍信息也是用内存中的链表结构存储的，添加书籍信息就是在书籍链表中添加一个节点
    void delBook();//从书籍链表中删除一个书籍信息节点
    void modBook();
    void queryBook();
    void addUser();
    void delUser();
    void queryUser();
    void setAdmin(const string &num, const string &pass)
    {
        adminNum = num;
        password = pass;
    }
};

extern list<admin> adminlist;

#endif /* administer_h */
