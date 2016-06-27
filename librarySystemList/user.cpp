
#include "user.h"
#include <iostream>
using namespace std;

User::User()
{
    
}

User::User(const string &Name, const string &number)
{
    name = Name;
    studentNum = number;
}

void User::borrow()
{
    string booknum;
    cout << "please input the booknum: ";
    cin >> booknum;
    list<Book>::iterator it;
    int flag = 0;
    for(it = booklist.begin(); it != booklist.end(); it++)
    {
        if(it->getbookNum() == booknum)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        if(it->getflag() == true)
        {
            it->setFlag(false);
            Book book;
            book.Init(it);
            book.setFlag(false);
            book.setLibrary(true);
            borrowed.push_back(book);
        }
        else
        {
            cout << "the book has been borrowed." << endl;
        }
    }
    else
    {
        cout << "do not find the book." << endl;
    }
}

void User::resent()
{
    string resentNum;
    cout << "please input the resent book number: ";
    cin >> resentNum;
    list<Book>::iterator it;
    int flag = 0;
    for(it = borrowed.begin(); it != borrowed.end(); it++)
    {
        if(it->bookNum == resentNum)
        {
            flag = 1;
            break;
        }
    }
    list<Book>::iterator it1;
    for(it1 = booklist.begin(); it1 != booklist.end(); it++)
    {
        if(it1->bookNum == resentNum)
        {
            break;
        }
    }
    if(flag == 1)
    {
        borrowed.erase(it);
        it1->setFlag(true);
        cout << "resent book successfully" << endl;
    }
    else
    {
        cout << "do not find the book to resent\n";
    }
}

void User::queryBook()
{
    string booknum;
    cout << "please input the query book number: ";
    cin >> booknum;
    int flag = 0;
    list<Book>::iterator it;
    for(it = booklist.begin(); it != booklist.end(); it++)
    {
        if(it->bookNum == booknum)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        it->display();
    }
    else
    {
        cout << "the book is not found." << endl;
    }
}

void User::init(const string &Name, const string &number)
{
    name = Name;
    studentNum = number;
}

