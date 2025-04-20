#include <iostream>
#include <vector>
#include <string>

using name space std;

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
			cout << "Book already borrowed!\n";
		} else {
			books[bookIndex - 1].isBorrowed = true;
			cout << "Book borrowed:" << books[bookIndex - 1].title << endl; 
		}
	}
	
		void returnBook(size_t bookIndex) {
			if (bookIndex < 1 || bookIndex > books.size()){
				cout <<  "Invalid book index!\n";
				return;
			}
			if (!books[bookIndex - 1].isBorrowed) {
				cout << "Book wasn't borrowed!\n";
			} else {
				books[bookIndex - 1].isBorrowed = 
			}
	};

 int main() {
    Library library;
    int choice;
    int main() {
    Library library;
    int choice;
    do {
    	
    cout << "\nLibrary Menu:\n";
        cout << "1. Add Book\n2. Display Books\n3. Borrow Book\n4. Return Book\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
      switch (choice) {
        case 1: {
            string title, author;
            cout << "Enter book title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, tittle);
            library.addBook(title, author);
        	break;
   		}
   		case 2:
   			lib
        
    
    