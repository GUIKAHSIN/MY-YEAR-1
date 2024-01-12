//GUI KAH SIN A23CS0080
//CHUA JIA LIN A23CS0069

#include<iostream>
#include<string>
using namespace std;

const int MAX_BOOKS=100;

//prototype
void displayMainMenu();
void addBook(string [],string [],int [],int &);
void displayLibrary(string [],string [],int [],int ); 
void searchByTitle(string [],string [],int [],int );

int main()
{
    string titles[MAX_BOOKS];
    string authors[MAX_BOOKS];
    int pubYear[MAX_BOOKS];
    int choice,bookNum=0;

    do
    {   
        do
        {
            displayMainMenu();
            cout<<"Enter your choice: ";
            cin>>choice;
            cout<<endl;
        }while(choice<1||choice>4);
        
        switch(choice)
        {
            case 1:addBook(titles,authors,pubYear,bookNum);break;
            case 2:displayLibrary(titles,authors,pubYear,bookNum);break;
            case 3:searchByTitle(titles,authors,pubYear,bookNum);break;
            default:break;
        }
    }while(choice!=4);

    cout<<"Goodbye!"<<endl<<endl;
    cout<<"--------------------------------"<<endl;

    system("pause");
    return 0;
}

void displayMainMenu()
{
    cout<<"\n<<<<<Library Management System>>>>>\n\n";
    cout<<"========================================="<<endl;
    cout<<"1. Add a Book"<<endl;
    cout<<"2. Display Library"<<endl;
    cout<<"3. Search by Title"<<endl;
    cout<<"4. Quit"<<endl;
}

void addBook(string title[],string author[],int pubYear [],int &bookNum)
{
    cout<<"Enter book title: ";
    cin>>title[bookNum];
    cout<<"Enter author name: ";
    cin>>author[bookNum];
    cout<<"Enter publication year: ";
    cin>>pubYear[bookNum];
    bookNum++;
    cout<<endl<<endl;
}

void displayLibrary(string title[],string author[],int pubYear [],int bookNum)
{
    cout<<"Library Contents: "<<endl;
    cout<<"===================="<<endl;
    for(int i=0;i<bookNum;i++ )
    {
        cout<<"Title: "<<title[i]<<endl;
        cout<<"Author: "<<author[i]<<endl;
        cout<<"Year: "<<pubYear[i]<<endl;
        cout<<endl;
    }
}

void searchByTitle(string title[],string author[],int pubYear [],int bookNum)
{
    string search;
    bool found=false;
    cout<<"Enter the title to search: ";
    cin>>search;
    for(int i=0;i<bookNum;i++)
    {
        if(title[i]==search)
        {
            cout<<"\nBook found:\n";
            cout<<"===================="<<endl;
            cout<<"Title: "<<title[i]<<endl;
            cout<<"Author: "<<author[i]<<endl;
            cout<<"Year: "<<pubYear[i]<<endl;
            found=true;
        }
    }
    if(found==false)
        cout<<"\nBook not found."<<endl;
    cout<<endl<<endl;
}