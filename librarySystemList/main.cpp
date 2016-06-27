
#include <iostream>
#include "book.h"
#include "administer.h"
#include "user.h"
#include "LibraryItem.h"

list<Book> booklist;
list<User> userlist;
list<admin> adminlist;

void menu()
{
    cout << "*******************************" << endl;
    cout << "1. user." << endl;
    cout << "2. administer." << endl;
    cout << "3. library." << endl;
    cout << "*******************************" << endl;
}

void menuUser()
{
    cout << "*******************************" << endl;
    cout << "0. exit." << endl;
    cout << "1. borrow the book." << endl;
    cout << "2. resent the book." << endl;
    cout << "3. query the book." << endl;
    cout << "*******************************" << endl;
}

void menuAdmin()
{
    cout << "*******************************" << endl;
    cout << "0.exit." << endl;
    cout << "1.add the book." << endl;
    cout << "2.delete the book." << endl;
    cout << "3.modify the book." << endl;
    cout << "4.query the book." << endl;
    cout << "5.add the user." << endl;
    cout << "6.delete the user." << endl;
    cout << "7.query the user." << endl;
    cout << "*******************************" << endl;
}

void menuLibrary()
{
    cout << "*******************************" << endl;
    cout << "0.exit." << endl;
    cout << "1.add the admin." << endl;
    cout << "2.delete the admin." << endl;
    cout << "3.query the admin." << endl;
    cout << "4.query the book." << endl;
    cout << "5.query the user." << endl;
    cout << "*******************************" << endl;
}

int main(int argc, const char * argv[])
{
    cout << "Welcome to The Library System." << endl;
    int command;
    while(1)
    {
        menu();
        cout << "input the commad: ";
        cin >> command;
        if(command == 0)
        {
            break;
        }
        else if(command == 1)
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
                while(1)
                {
                    menuUser();
                    cout << "input the commad: ";
                    cin >> command;
                    if(command == 1)
                    {
                        it->borrow();
                    }
                    else if(command == 2)
                    {
                        it->resent();
                    }
                    else if(command == 3)
                    {
                        it->queryBook();
                    }
                    else if(command == 0)
                    {
                        break;
                    }
                }
            }
            else
            {
                cout << "do not find the user." << endl;
            }
        }
        else if(command == 2)
        {
            string number;
            cout << "please input the number: ";
            cin >> number;
            list<admin>::iterator it;
            int flag = 0;
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
                while(1)
                {
                    menuAdmin();
                    cout << "input the commad: ";
                    cin >> command;
                    if(command == 1)
                    {
                        it->addBook();
                    }
                    else if(command == 2)
                    {
                        it->delBook();
                    }
                    else if(command == 3)
                    {
                        it->modBook();
                    }
                    else if(command == 4)
                    {
                        it->queryBook();
                    }
                    else if(command == 5)
                    {
                        it->addUser();
                    }
                    else if(command == 6)
                    {
                        it->delUser();
                    }
                    else if(command == 7)
                    {
                        it->queryUser();
                    }
                    else if(command == 0)
                    {
                        break;
                    }
                }
            }
            else
            {
                cout << "do not find the administer." << endl;
            }
        }
        else if(command == 3)
        {
            string name;
            cout << "please input the library name: ";
            cin >> name;
            LibraryItem library(name);
            while(1)
            {
                menuLibrary();
                cout << "input the commad: ";
                cin >> command;
                if(command == 1)
                {
                    library.addAdmin();
                }
                else if(command == 2)
                {
                    library.delAdmin();
                }
                else if(command == 3)
                {
                    library.queryAdmin();
                }
                else if(command == 4)
                {
                    library.queryBook();
                }
                else if(command == 5)
                {
                    library.queryUser();
                }
                else if(command == 0)
                {
                    break;
                }
            }
        }
    }
    return 0;
}

