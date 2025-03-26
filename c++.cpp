#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    bool isBorrowed;
    
    Book(string t, string a) : title(t),
    class Library {
private:
    vector<Book> books;
public:
    void addBook(const string &title, const string &author) {
        books.push_back(Book(title, author));    