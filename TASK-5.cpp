#include<iostream>

using namespace std;

class BOOKS{
    string title;
    string author;
    string ISBN;
    bool checkedout;
    int duedate;

public:
    BOOKS(){

    }
    BOOKS(string title, string author, string ISBN, bool checkedout, int duedate){
        this->title = title;
        this->author =author;
        this->ISBN = ISBN;
        this->checkedout = checkedout;
        this->duedate = duedate;
    }
    string gettitle(){
        return title;
    }
    string getauthor(){
        return author;
    }
    string getISBN(){
        return ISBN;
    }
    bool ischeckedout(){
        return checkedout;
    }
    int getduedate(){
        return duedate;
    }

    string searchbook(const BOOKS &ob){
        char choice;
        cout<<" Type in book search type: "<<endl<<"('I' FOR ISBN, 'T' FOR TITLE, 'A' FOR AUTHOR)"<<endl;
        cin>> choice;

        switch(choice){
            case 'T':{
                cout<<"Enter TITLE: "<<endl;
                cin>>title;

                if(title == ob.title ){
                    cout<<"TITLE: "<<gettitle()<<endl;
                    cout<<"ISBN: "<<getISBN()<<endl;
                    cout<<"Author: "<<getauthor()<<endl;
                    break;
                }
            }
            case 'I':{
                cout<<"Enter ISBN: "<<endl;
                cin>>ISBN;

                if(ISBN == ob.ISBN){    
                    cout<<"ISBN: "<<getISBN()<<endl;
                    cout<<"TITLE: "<<gettitle()<<endl;
                    cout<<"Author: "<<getauthor()<<endl;
                    break;
                }
            }
            case 'A':{
                
                cout<<"Enter Author: "<<endl;
                cin>>author;

                if(author == ob.author){
                    cout<<"TITLE: "<<gettitle()<<endl;
                    cout<<"ISBN: "<<getISBN()<<endl;
                    cout<<"Author: "<<getauthor()<<endl;
                    break;
                }
            }
            default:{
                cout<<"Invalid choice! "<<endl;
                break;
            }
        }
        return " ";

    }
    void bookcheckout() {
        if (!checkedout) {
            checkedout = true;
            cout << "Book '" << title << "' checked out.\n";
        } else {
            cout << "Book '" << title << "' is already checked out.\n";
        }
    }
    void returnbook() {
        if (checkedout) {
            checkedout = false;
            cout << "Book '" << title << "' returned.\n";
        } else {
            cout << "Book '" << title << "' is not checked out.\n";
        }
    }
    void overdue() {
        if (checkedout && duedate <= 0) {
            cout << "Book '" << title << "' is overdue.\n";
        } else {
            cout << "No overdue books.\n";
        }
    }
    void passDay() {
        if (checkedout) {
            duedate--;
        }
    }

};

int main(){
    BOOKS ob1;
    
    ob1 = BOOKS("The Kite Runner ", "Khaled Hosseini ", "12345678", true, 7);
    
    BOOKS ob2;

    ob2 = BOOKS(" The Target", " David Baldacci", "87654321", true, 7);
    
    
    
    int option;
do{
    cout<<"Welcome to Library Management System: "<<endl
        <<"1. Search books"<<endl
        <<" 2. Book checkout"<<endl
        <<" 3. Return book"<<endl
        <<" 4. Overdue "<<endl
        <<" 5. EXIT "<<endl
        <<"Enter your choice: ";
    cin>>option;

    switch(option){
        case 1:{
            ob1.searchbook(ob1);
            break;
        }
        case 2:{
            ob1.bookcheckout();
            break;
        }
        case 3:{
            ob1.returnbook();
            break;
        }
        case 4:{
            ob1.overdue();
            break;
        }
        case 5:{
            cout<<"Exiting!!"<<endl;
            break;
        }
        default:{
            cout << "Invalid option!\n";
            break;
        }
    }
}while(option != 5);


    return 0;
}