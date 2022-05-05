#include "Class_Order.h"
#include "users.pb.h"
/*--------------------------------------------------------------------------------------------------------------*/
class Customer;
int noOfCustomers;
vector <Customer> customerData;
class Customer
{
    int CustomerId;
    string eMail;
    string passWord;
    string name;
    string mobile;
public:
    vector <Order> history;
    Customer(string mail,string pass,string nam,string mob)
    {
        eMail=mail;
        passWord=pass;
        name=nam;
        mobile=mob;
        noOfCustomers++;
        CustomerId=noOfCustomers-1;
    }
    void print()
    {
        cout<<CustomerId<<endl;
        cout<<passWord<<endl;
        cout<<name<<endl;
        cout<<mobile<<endl;
    }
    static void encrypt(string &temp)
    {
        for(int i=0;i<temp.size()-1;i+=2)
        {
            int a=temp[i];
            temp[i]=temp[i+1];
            temp[i+1]=a;
        }
    }
    int verify(string a ,string b)
    {
        encrypt(b);
        if(eMail==a && passWord==b)
            return 1;
        return 0;
    }
    static void signUp()
    {
        string mail, pass, name, mob;
        while(1)
        {
            cout<<"Type Exit to go back"<<endl<<endl;
            cout<<"Enter your Email :";
            cin>>mail;
            if (mail=="Exit")
                return ;
            else if(checkExistance(mail))
            {
                cout<<endl<<"Email Id already Exists please Enter a different ID"<<endl<<endl;
                continue;
            }
            break;
        }
        char  temp[14];
        cin.getline(temp,14);
        while(1)
        {
            cout<<"Enter your password :";;
            cin.getline(temp,14);
            pass=temp;
            if(pass.size()<6)
            {
                cout<<"The Password Should be atleast six Character"<<endl;
                continue;
            }
            encrypt(pass);
            break;
        }
        cout<<"Enter your Name :";
        cin>>name;
        while(1)
        {
            cout<<"Enter your mobile number :";
            cin>>mob;
            int flag=1;
            for(int i=0;i<mob.size();i++)
                if(mob[i]<48 || mob[i]>57)
                    flag=0;
            if(flag && mob.size()==10)
                break;
            cout<<endl<<"Invalid Mobile Number"<<endl<<endl;
        }
        system("cls");
        cout<<"SignUp Successful"<<endl<<endl<<endl<<endl;
        customerData.push_back(Customer(mail,pass,name,mob));
    }
    static int login()
    {
        string email,pass;
        cout<<"Enter Email : ";
        cin>>email;
        if(!checkExistance(email))
        {
            cout<<endl<<"Email Does not Exist Please sign-Up"<<endl<<endl;
            return  0;
        }
        cout<<"Enter Password : ";
        cin>>pass;
        for(int i=0;i<noOfCustomers;i++)
        {
            if(customerData[i].verify(email,pass))
            {
                system("cls");
                cout<<"Login Successful"<<endl<<endl<<endl<<endl;
                return i+1;
            }
        }
        system("cls");
        cout<<"The Email or Password you Entered is Incorrect"<<endl<<endl<<endl<<endl;
        return 0;
    }

     static void Save()
    {
        
        UserData::Users userData;

        for (int i = 0; i < customerData.size(); i++)
        {
            UserData::User* u;
            u = userData.add_users();
            u->set_mail(customerData[i].eMail);
            u->set_name(customerData[i].name);
            u->set_number(customerData[i].mobile);
            u->set_password(customerData[i].passWord);
        }
        fstream output("Customer_Data.bin", ios::out | ios::trunc | ios::binary);
        userData.SerializeToOstream(&output);

        /*fileEdit.width(30);
        fileEdit.fill(' ');
        fileEdit<<left<<eMail;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<passWord;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<name;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<mobile<<endl;*/
    }
    static bool checkExistance(string b)
    {
        for(int i=0;i<customerData.size();i++)
            if(customerData[i].eMail==b)
                return true;
        return false;
    }
};
