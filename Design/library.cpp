#include <bits/stdc++.h>
using namespace std;
enum AccountStatus
{
    ACTIVE,
    BLOCKED,
    CLOSED
};

enum BookStatus
{

    AVAILABLE,
    RESERVED,
    LOANED,
    LOST
};

enum ReservationStatus
{

    PENDING,
    CANCELLED,
    NONE

};

class Address
{

private:
    string street;
    string city;
    string state;
    string zip;
    string country;
};

class Person
{
private:
    string name;
    Address address;
    string email;
    string phone;
};

class Consta
{
    public:
   
};

class Account
{

private:
    string userID, password;
    AccountStatus account;
    Person person;
    

    virtual bool resetPassword() = 0;

    public:
    const int MAX_BOOKS_ISSUED_TO_A_USER = 5;
    const int MAX_LENDING_DAYS = 10;

};

class Date{

    int day,month,year;

}
class Librarian : public Account
{

    bool addBookItem(BookItem bookItem);
    bool blockMember(Member member);
    bool unBlockMember(Member member);
};

class Member : public Account
{
private:
    Date dateOfMembership;
   int totalBooksCheckedout;
   void incrementTotalBooksCheckedout();

   public:
    int getTotalBooksCheckedout();

    bool reserveBookItem(BookItem bookItem);


    bool checkoutBookItem(BookItem bookItem) {
    if (getTotalBooksCheckedOut() >= MAX_BOOKS_ISSUED_TO_A_USER) {
      ShowError("The user has already checked-out maximum number of books");
      return false;
    }
    BookReservation bookReservation = BookReservation.fetchReservationDetails(bookItem.getBarcode());
    if (bookReservation != null && bookReservation.getMemberId() != this.getId()) {
      // book item has a pending reservation from another user
      ShowError("This book is reserved by another member");
      return false;
    } else if (bookReservation != null) {
      // book item has a pending reservation from the give member, update it
      bookReservation.updateStatus(ReservationStatus.COMPLETED);
    }

    if (!bookItem.checkout(this.getId())) {
      return false;
    }

    this.incrementTotalBooksCheckedout();
    return true;
  

};

int main()
{
    return 0;
}