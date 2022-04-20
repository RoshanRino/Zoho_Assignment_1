#include<iostream>
using namespace std;
#include <vector>
#include <fstream>
int numberOfItems,noOfCustomers,invoiceNo=1514;

/*--------------------------------------------------------------------------------------------------------------*/
/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/
class shopStock
{
    public:
    int itemId;
    string brand;
    string model;
    int stock;
    int price;
    string catagory;
    shopStock(string cat,string bd,string mod,int cost,float number)
    {
        itemId=numberOfItems++;
        catagory=cat;
        brand=bd;
        model=mod;
        price=cost;
        stock=number;
    }
    shopStock(const shopStock &t)
    {
        itemId=t.itemId;
        catagory=t.catagory;
        brand=t.brand;
        model=t.model;
        price=t.price;
        stock=t.stock;
    }
    void display()
    {
        cout<<"Item Id:"<<itemId+1;
        cout<<"   "<<"Brand:"<<brand;
        cout<<"   "<<"Model:"<<model;
        cout<<"   "<<"Price:"<<price;
        cout<<"   "<<"In Stock:"<<stock<<endl<<endl;
    }
    void displayOrder()
    {
        cout.width(15);
        cout.fill(' ');
        cout<<left<<catagory;
        cout.width(15);
        cout.fill(' ');
        cout<<brand;
        cout.width(15);
        cout.fill(' ');
        cout<<model;
        cout.width(15);
        cout.fill(' ');
        cout<<price<<endl;
    }

};
/*--------------------------------------------------------------------------------------------------------------*/

vector <shopStock> shopData;
class order
{
    int invoiceNumber;
public:
    int total=0;
    vector <shopStock> orderDetails;
    order()
    {
        invoiceNumber=invoiceNo;
    }
    void display()
    {
        if(orderDetails.empty())
        {
            cout<<"Your Cart is Empty"<<endl;
            return;
        }
        cout<<"Invoice Number  "<<invoiceNumber<<endl;
        cout<<"Date 19-April-2022"<<endl<<endl<<endl;
        cout<<"Catagory       Brand          Model          Price"<<endl;
        for (int i=0;i<orderDetails.size();i++)
            orderDetails[i].displayOrder();
        cout<<endl<<endl<<endl;
        cout<<"Total Cost : "<<total<<endl;
        cout<<"//////////////////////////////////////////////////"<<endl;
    }
    order(const order &t)
    {
        invoiceNumber=t.invoiceNumber;
        total=t.total;
        for(int i=0;i<t.orderDetails.size();i++)
            orderDetails.push_back(t.orderDetails[i]);
    }
};
/*--------------------------------------------------------------------------------------------------------------*/

class customer
{
    int customerId;
    string eMail;
    string passWord;
    string name;
    string mobile;
public:
    vector <order> history;
    customer(string mail,string pass,string nam,string mob)
    {
        eMail=mail;
        passWord=pass;
        name=nam;
        mobile=mob;
        noOfCustomers++;
        customerId=noOfCustomers-1;
    }
    void print()
    {
        cout<<customerId<<endl;
        cout<<passWord<<endl;
        cout<<name<<endl;
        cout<<mobile<<endl;
    }
    int verify(string a ,string b)
    {
        if(eMail==a && passWord==b)
            return 1;
        return 0;
    }
};
/*--------------------------------------------------------------------------------------------------------------*/

class Admin
{
    string email="admin@zoho.com";
    string pass="xyzzy";
public:
    verify(string a,string b)
    {
        if(email==a && pass==b)
            return 1;
        return 0;
    }
};
/*--------------------------------------------------------------------------------------------------------------*/
/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/
ifstream shop("z-kart_db.txt");
ifstream cust("zusers_db.txt");
vector <customer> customerData;
Admin admin;

/*--------------------------------------------------------------------------------------------------------------*/
void loadData()
{
    string shop_cat,shop_brand,shop_model;
    string cust_mail,cust_pass,cust_name,cust_mob;
    int shop_price,shop_stock;
    while(shop>>shop_cat>>shop_brand>>shop_model>>shop_price>>shop_stock)
    {
       shopData.push_back(shopStock(shop_cat,shop_brand,shop_model,shop_price,shop_stock));
    }
    while(cust>>cust_mail>>cust_pass>>cust_name>>cust_mob)
    {
       customerData.push_back(customer(cust_mail,cust_pass,cust_name,cust_mob));
    }
}
/*--------------------------------------------------------------------------------------------------------------*/

int login()
{
    string email,pass;
    cout<<"Enter Email : ";
    cin>>email;
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
/*--------------------------------------------------------------------------------------------------------------*/

void signUp()
{
    string mail, pass, name, mob;
    cout<<"Enter your Email :";
    cin>>mail;
    cout<<"Enter your password :";
    cin>>pass;
    cout<<"Enter your Name :";
    cin>>name;
    cout<<"Enter your mobile number :";
    cin>>mob;
    system("cls");
    cout<<"SignUp Successful"<<endl<<endl<<endl<<endl;
    customerData.push_back(customer(mail,pass,name,mob));
}
/*--------------------------------------------------------------------------------------------------------------*/

int userInput()
{
    int a;
    cout<<"Press 1 For Login"<<endl;
    cout<<"Press 2 For Sign up"<<endl;
    cout<<"Press 3 For Admin Login"<<endl;
    cout<<"press 4 To Exit"<<endl;
    cin>>a;
    return a;
}
/*--------------------------------------------------------------------------------------------------------------*/

int adminLog()
{
    string email,pass;
    cout<<"Enter Email : ";
    cin>>email;
    cout<<"Enter Password : ";
    cin>>pass;

    if(admin.verify(email,pass))
    {
        system("cls");
        cout<<"Login Successful"<<endl<<endl<<endl<<endl;
        return 1;
    }
    system("cls");
    cout<<"The Email or Password you Entered is Incorrect"<<endl<<endl<<endl<<endl;
    return 0;
}
/*--------------------------------------------------------------------------------------------------------------*/
void displayMobiles()
{
    system("cls");
    cout<<"Enter ItemId to Add to cart"<<endl<<endl;
    for (int i=0;i<numberOfItems;i++)
    {
        if(shopData[i].catagory=="Mobile")
            shopData[i].display();
    }
}
 /*--------------------------------------------------------------------------------------------------------------*/

void displayTablet()
{
    system("cls");
    cout<<"Enter ItemId to Add to cart"<<endl<<endl;
    for (int i=0;i<numberOfItems;i++)
    {
        if(shopData[i].catagory=="Tablet")
            shopData[i].display();
    }
}
/*--------------------------------------------------------------------------------------------------------------*/

void displayLaptop()
{
    system("cls");
    cout<<"Enter ItemId to Add to cart"<<endl<<endl;
    for (int i=0;i<numberOfItems;i++)
    {
        if(shopData[i].catagory=="Laptop")
            shopData[i].display();
    }
}
/*--------------------------------------------------------------------------------------------------------------*/
void displayOptions(int currentCustomer)
{
    order temp;
    while(1)
    {
        int input,item;
        cout<<"Press 1 To Check Mobiles"<<endl;
        cout<<"Press 2 To Check Laptop"<<endl;
        cout<<"Press 3 To Check Tablet"<<endl;
        cout<<"Press 4 To CheckOut"<<endl;
        cout<<"Press 5 To check Previous orders"<<endl;
        cout<<"Press 6 To LogOut"<<endl;
        cin>>input;
        switch(input)
        {
        case 1:
            displayMobiles();
            cout<<"Enter the ItemNumber to add to cart";
            cin>>item;
            temp.orderDetails.push_back(shopData[item-1]);
            temp.total+=shopData[item-1].price;
            break;
        case 2:
            displayLaptop();
            cout<<"Enter the ItemNumber to add to cart";
            cin>>item;
            temp.orderDetails.push_back(shopData[item-1]);
            temp.total+=shopData[item-1].price;
            break;
        case 3:
            displayTablet();
            cout<<"Enter the ItemNumber to add to cart";
            cin>>item;
            temp.orderDetails.push_back(shopData[item-1]);
            temp.total+=shopData[item-1].price;
            break;
        case 4:
            int a;
            temp.display();
            cout<<"Press 1 to continue Shopping"<<endl;
            cout<<"Press 2 to purchase";
            cin>>a;
            if(a==2)
            {
                system("cls");
                cout<<"Order placed Successfully"<<endl;
                invoiceNo++;
                customerData[currentCustomer-1].history.push_back(temp);
                for (int j=0;j<temp.orderDetails.size();j++)
                    shopData[temp.orderDetails[j].itemId].stock--;
                return;
            }
            break;
        case 5:
                system("cls");
                if(!customerData[currentCustomer-1].history.size())
                    cout<<"You have no previous Orders"<<endl<<endl<<endl;
            for(int i=0;i<customerData[currentCustomer-1].history.size();i++)
                customerData[currentCustomer-1].history[i].display();
             break;
        case 6:
            return;
        default:
            break;
        }
    }
}
/*--------------------------------------------------------------------------------------------------------------*/

void displayLowStock()
{
    system("cls");
    cout<<"The Following Items have Stock Below 10:"<<endl<<endl;
    for(int i=0;i<shopData.size();i++)
        if(shopData[i].stock<10)
           shopData[i].display();
}
/*--------------------------------------------------------------------------------------------------------------*/

void addStock()
{
    int id,number;
    cout<<"Enter item Id to Place Order: ";
    cin>>id;
    cout<<"Enter number of Items to Order: ";
    cin>>number;
    shopData[id-1].stock+=number;
}
/*--------------------------------------------------------------------------------------------------------------*/

void adminFunction()
{
    while(1)
    {
        int userOption;
        displayLowStock();
        cout<<endl<<"Press 1 to place order"<<endl<<"Press 2 to exit"<<endl;
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
/*--------------------------------------------------------------------------------------------------------------*/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
