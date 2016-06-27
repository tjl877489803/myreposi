
#include "LibraryItem.h"
#include "administer.h"
#include "book.h"
#include <iostream>

using namespace std;

LibraryItem::LibraryItem(const string &Name)//图书馆的名字
{
    name = Name;
}

void LibraryItem::addAdmin()
{
    string number;
    cout << "please input the number: ";
    cin >> number;
    string pass;
    cout << "please input the password: ";
    cin >> pass;
    admin adminer;
    adminer.setAdmin(number, pass);
    adminlist.push_back(adminer);
    cout << "add administer succeed." << endl;
}

void LibraryItem::delAdmin()
{
    string number;
    cout << "please input the number: ";
    cin >> number;
    int flag = 0;
    list<admin>::iterator it;
    for(it = adminlist.begin(); it != adminlist.end(); it++)
    {
        if(it->getAdminnum() == number)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        adminlist.erase(it);
        cout << "delete succeed." << endl;
    }
    else
    {
        cout << "do not find the admin." << endl;
    }
}

void LibraryItem::queryBook()
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

void LibraryItem::queryUser()
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
        cout << "the name is: " << it->name << endl;
        cout << "the number is: " << it->studentNum << endl;
    }
    else
    {
        cout << "do not find the user." << endl;
    }
}

void LibraryItem::queryAdmin()
{
    string number;
    cout << "please input the number: ";
    cin >> number;
    int flag = 0;
    list<admin>::iterator it;
    for(it = adminlist.begin(); it != adminlist.end(); it++)
    {
        if(it->getAdminnum() == number)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "the name is: " << it->getAdminnum() << endl;
        cout << "the number is: " << it->getPassword() << endl;
    }
    else
    {
        cout << "do not find the user." << endl;
    }
}
