
#include "book.h"
#include <iostream>
using namespace std;

Book::Book()
{
    
}

Book::Book(const string &num, const string &isbn, const string &write, const string &tit, const string &time, const string &address)
{
    bookNum = num;
    ISBN = isbn;
    writer = write;
    title = tit;
    publishedTime = time;
    location = address;
}

void Book::display()
{
    cout << "the book number is: " << bookNum << endl;
    cout << "the book ISBN is: " << ISBN << endl;
    cout << "the book writer is: " << writer << endl;
    cout << "the book title is: " << title << endl;
    cout << "the book publish time is: " << publishedTime << endl;
    cout << "the location of the book is: " << location << endl;
    if(library == true)
    {
        if(flag == true)
        {
            cout << "the book is avialable." << endl;
        }
        else
        {
            cout << "the book is not avialable." << endl;
        }
    }
    else
    {
        cout << "the book is personal." << endl;
    }
}

void Book::setLibrary(bool value)
{
    library = value;
}

void Book::setFlag(bool value)
{
    flag = value;
}

void Book::setLocation(const string &address)
{
    location = address;
}

string Book::getbookNum()
{
    return bookNum;
}

bool Book::getflag()
{
    return flag;
}

void Book::Init(list<Book>::iterator it)
{
    bookNum = it->bookNum;
    ISBN = it->ISBN;
    location = it->location;
    writer = it->writer;
    title = it->title;
    publishedTime = it->publishedTime;
}