#include "Class_Customer.h"
/*--------------------------------------------------------------------------------------------------------------*/
class Admin
{
public:
    static int verify(string a,string b)
    {
        if(a=="admin@zoho.com" && b=="xyzzy")
            return 1;
        return 0;
    }
    static int login()
    {
    string email,pass;
    cout<<"Enter Email : ";
    cin>>email;
    cout<<"Enter Password : ";
    cin>>pass;

    if(verify(email,pass))
    {
        system("cls");
        cout<<"Login Successful"<<endl<<endl<<endl<<endl;
        return 1;
    }
    system("cls");
    cout<<"The Email or Password you Entered is Incorrect"<<endl<<endl<<endl<<endl;
    return 0;
    }
    static void displayLowStock()
    {
        system("cls");
        cout<<"The Following Items have Stock Below 10:"<<endl<<endl;
        for(int i=0;i<shopData.size();i++)
            if(shopData[i].stock<10)
               shopData[i].display();
    }

    static void addStock()
    {
        int id,number;
        cout<<"Enter item Id to Place Order: ";
        cin>>id;
        cout<<"Enter number of Items to Order: ";
        cin>>number;
        shopData[id-1].stock+=number;
    }
    static void adminFunction()
    {
        while(1)
        {
            int userOption;
            displayLowStock();
            cout<<endl<<"Press 1 to place Order"<<endl<<"Press 2 to exit"<<endl;
            cin>>userOption;
            switch (userOption)
            {
            case 1:
                addStock();
                break;
            default:
                return;
            }
        }
    }
};
