
#ifndef book_h
#define book_h

#include <string>
#include <list>
using namespace std;


class Book
{
private:
    bool library;//表示数据是否属于图书馆
    bool flag;//表示书籍是否借出去了
    string location;
public:
    string bookNum;
    string ISBN;
    string writer;
    string title;
    string publishedTime;
    Book();
    Book(const string &num, const string &isbn, const string &write, const string &tit, const string &time, const string &address);
    void display();
    void setLibrary(bool value);
    void setFlag(bool value);
    void setLocation(const string &address);
    string getbookNum();
    bool getflag();
    void Init(list<Book>::iterator it);//初始化书籍链表结构
};

extern list<Book> booklist;

#endif /* book_h */
