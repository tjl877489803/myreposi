
#include "administer.h"
#include <iostream>

using namespace std;

admin::admin(const string &Num, const string &Password)
{
    adminNum = Num;
    password = Password;
}

void admin::addBook()
{
    Book book;
    cout << "please input the book number: ";
    cin >> book.bookNum;
    cout << "please input the ISBN: ";
    cin >> book.ISBN;
    cout << "please input the title: ";
    cin >> book.title;
    cout << "please input the writer: ";
    cin >> book.writer;
    cout << "please input the publish time: ";
    cin >> book.publishedTime;
    book.setFlag(true);
    book.setLibrary(true);
    string address;
    cout << "please input the location of the book: ";
    cin >> address;
    book.setLocation(address);
    booklist.push_back(book);
    cout << "add book succeed." << endl;
}

void admin::delBook()
{
    string booknum;
    cout << "please input the book number: ";
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
        booklist.erase(it);
        cout << "delete succeed." << endl;
    }
    else
    {
        cout << "do not find the book." << endl;
    }
}

void admin::modBook()
{
    string booknum;
    cout << "please input the book number: ";
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
        string address;
        cout << "please input the new location: ";
        cin >> address;
        it->setLocation(address);
        cout << "modify succeed." << endl;
    }
    else
    {
        cout << "do not find the book." << endl;
    }
}

void admin::queryBook()
{
    string booknum;
    cout << "please input the book number: ";
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
        cout << "do not find the book." << endl;
    }
}

void admin::addUser()
{
    string name;
    cout << "please input name: ";
    cin >> name;
    string number;
    cout << "please input the number: ";
    cin >> number;
    User user;
    user.init(name, number);
    userlist.push_back(user);
    cout << "add user succeed." << endl;
}

void admin::delUser()
{
    string number;
    cout << "please input the number: ";
    cin >> number;
    int flag = 0;
    list<User>::iterator it;
    for(it = userlist.begin(); it != userlist.end(); it++)
    {
        if(it->studentNum == number)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        userlist.erase(it);
        cout << "delete succeed." << endl;
    }
    else
    {
        cout << "do not find the user." << endl;
    }
}

void admin::queryUser()
{
    string number;
    cout << "please input the number: ";
    cin >> number;
    list<User>::iterator it;
    int flag = 0;
    for(it = userlist.begin(); it != userlist.end(); it++)
    {
        if(it->studentNum == number)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "the name is: " << it->name << endl;
        cout << "the number is: " << it->studentNum << endl;
    }
    else
    {
        cout << "do not find the user." << endl;
    }
}
