#include <iostream>
#include <string>
using namespace std;

class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
    virtual ~LibraryUser() {}
};

class KidUsers : public LibraryUser {
private:
    int userAge;
    string selectedBook;

public:
    void setAge(int age) {
        userAge = age;
    }

    void setBookType(string book) {
        selectedBook = book;
    }

    void registerAccount() override {
        if (userAge < 12)
            cout << "You have successfully registered under a Kids Account" << endl;
        else
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
    }

    void requestBook() override {
        if (selectedBook == "Kids")
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        else
            cout << "Oops, you are allowed to take only kids books" << endl;
    }
};

int main() {
    KidUsers child;

    child.setAge(10);
    child.registerAccount();

    child.setBookType("Kids");
    child.requestBook();

    return 0;
}
