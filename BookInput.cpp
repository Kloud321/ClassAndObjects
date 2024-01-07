//
// Created by Ivan on 7.1.2024 г..
//
#include "BookInputStream.h"
#include "Book.h"

Book BookInput:: setBook()

{
    string bookName;
    string author;
    int pages;
    double price;

    cout << "Enter book Name: ";
    getline(cin, bookName);
    cout << "Enter author: ";
    getline(cin, author);
    cout << "Enter pages: ";
    cin >> pages;
    cin.ignore(500, '\n');
    cout << "Enter price: ";
    cin >> price;
    cin.ignore(100, '\n');
    cout << endl;

    Book newBook(bookName, author, pages, price);

    return newBook;
}