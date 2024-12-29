#include <bits/stdc++.h>

using namespace std;
class Member {
private:
    int MemberID;
    string MemberName;
    string MemberType;

public:
    
    Member(int id, string name, string type) : MemberID(id), MemberName(name), MemberType(type) {}


    int getMemberID() { return MemberID; }
    string getMemberName() { return MemberName; }
    string getMemberType() { return MemberType; }
};


class Book {
protected:
    int BookID;
    string Title;
    string Publisher;
    string Author;
    int Edition;

public:

    Book(int id, string title, string publisher, string author, int edition)
        : BookID(id), Title(title), Publisher(publisher), Author(author), Edition(edition) {}

   
    int getBookID() { return BookID; }
    string getTitle() { return Title; }
    string getPublisher() { return Publisher; }
};


class Journal : public Book {
private:
    string Editor;
    int Volume;
    int Issue;

public:
    
    Journal(int id, string title, string publisher, string editor, int volume, int issue)
        : Book(id, title, publisher, "", 0), Editor(editor), Volume(volume), Issue(issue) {}
};


class LibraryDb {
private:
    static vector<Member> Members;
    static vector<Book> Books;
    static vector<bool> BookStatus; 
    static vector<int> BooksTaken; 

public:

    static void addMember(Member m) {
        Members.push_back(m);
        BooksTaken.push_back(0); 
    }

    static void addBook(Book b) {
        Books.push_back(b);
        BookStatus.push_back(true); 
    }


    static bool ValidateMemberEligibility(int MemberID) {
        for (size_t i = 0; i < Members.size(); i++) {
            if (Members[i].getMemberID() == MemberID) {
                return BooksTaken[i] < 3; 
            }
        }
        return false;
    }

    static bool ValidateBookAvailability(int BookID) {
        for (size_t i = 0; i < Books.size(); i++) {
            if (Books[i].getBookID() == BookID && BookStatus[i]) {
                return true; // Book is available
            }
        }
        return false; 
    }

    static void IssueBook(int MemberID, int BookID) {
        for (size_t i = 0; i < Books.size(); i++) {
            if (Books[i].getBookID() == BookID) {
                BookStatus[i] = false; 
                break;
            }
        }
        for (size_t i = 0; i < Members.size(); i++) {
            if (Members[i].getMemberID() == MemberID) {
                BooksTaken[i]++;
                break;
            }
        }
        cout << "Book issued successfully." << endl;
    }
};


vector<Member> LibraryDb::Members;
vector<Book> LibraryDb::Books;
vector<bool> LibraryDb::BookStatus;
vector<int> LibraryDb::BooksTaken;

class Transaction {
private:
    int Tid;
    Member mObj;
    Book bObj;

public:

    Transaction(int id, Member m, Book b) : Tid(id), mObj(m), bObj(b) {}

    void BorrowBook() {
        if (LibraryDb::ValidateMemberEligibility(mObj.getMemberID()) &&
            LibraryDb::ValidateBookAvailability(bObj.getBookID())) {
            LibraryDb::IssueBook(mObj.getMemberID(), bObj.getBookID());


            cout << "Borrow date: 01/01/2024" << endl;
            cout << "Return date: 15/01/2024" << endl;
        } else {
            cout << "Borrowing failed. Either member is ineligible or book is unavailable." << endl;
        }
    }
};

int main() {
 
    LibraryDb::addMember(Member(1, "Alice", "Student"));
    LibraryDb::addMember(Member(2, "Bob", "Faculty"));


    LibraryDb::addBook(Book(101, "C++ Programming", "Pearson", "Bjarne Stroustrup", 4));
    LibraryDb::addBook(Book(102, "Data Structures", "McGraw Hill", "Ellis Horowitz", 3));


    Transaction t1(1, Member(1, "Alice", "Student"), Book(101, "C++ Programming", "Pearson", "Bjarne Stroustrup", 4));
    t1.BorrowBook();

    return 0;
}

