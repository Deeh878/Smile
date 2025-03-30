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
public:
    void addBook(const string &title, const string &author) {
        books.push_back(Book(title, author));
        cout << "Book added: " << title << endl;
    }
	
	    void displayBooks() {
        cout << "\nAvailable Books:\n";
        for (size_t i = 0; i < books.size(); ++i) {
            cout << i + 1 << ". " << books[i].title << " by " << books[i].author
                 << (books[i].isBorrowed ? " [Borrowed]" : " [Available]") << endl;
        }
    }
	
	  void borrowBook(size_t bookIndex) {
        if (bookIndex < 1 || bookIndex > books.size()) {
            cout << "Invalid book index!\n"; 
			return;
		}
		if (books[bookIndex - 1].isBorrowed) {
			cout << "Book already borrowed!\n";
		} else {
			books[bookIndex - 1].isBorrowed = true;
			cout << "Book borrowed:" << books[bookIndex 
	
		  