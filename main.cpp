#include "Book.h"
#include "BookInputStream.h"

/*Да се направи клас Книга, който съдържа информация за автор, име, година на издаване и цена.
Да се добавят гетери и сетери и да се раздели на файлове.
В мейн файла да има вектор от книги. Трябва да съдържа поне 4 книги.
Да се изведе информация коя е най-евтината или най-скъпата книга.*/

int main()
{
    vector<Book> books;
    BookInput currentBook;

    int numberOfBooks = 3;

    for (int i = 0; i < numberOfBooks; i++)
    {
        Book newBook = currentBook.setBook();
        books.push_back(newBook);
    }

    cout << "BOOK CATALOG:\n" << endl;

    for (int i = 0; i < books.size(); i++)
    {
        books.at(i).displayInfo();
    }

    double maxPrice = 0;
    double minPrice = INT_MAX;
    int indexCheapestBook = 0;
    int indexExpensiveBook = 0;

    for (int i = 0; i < books.size(); i++)
    {
        double price = books.at(i).getPrice();

        if (price > maxPrice)
        {
            maxPrice = price;
            indexExpensiveBook = i;
        }
        if (price < minPrice)
        {
            minPrice = price;
            indexCheapestBook = i;
        }
    }

    cout << "The cheapest book in the catalog costs BGN " << minPrice << ": " << endl;
    books.at(indexCheapestBook).displayInfo();

    cout << "The most expensive book in the catalog costs BGN " << maxPrice << ": " << endl;
    books.at(indexExpensiveBook).displayInfo();

    return 0;
}