#include <iostream>
#include <string>
using namespace std;

class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
    virtual ~LibraryUser() {}
};

class AdultUser : public LibraryUser {
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
        if (userAge > 12)
            cout << "You have successfully registered under an Adult Account" << endl;
        else
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
    }

    void requestBook() override {
        if (selectedBook == "Fiction")
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        else
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
    }
};

int main() {
    AdultUser member;

    member.setAge(23);
    member.registerAccount();

    member.setBookType("Fiction");
    member.requestBook();

    return 0;
}
