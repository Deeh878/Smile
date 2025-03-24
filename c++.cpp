#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    bool isBorrowed;
    
    Book(string t, string a)