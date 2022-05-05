#include "Class_Admin.h"
/*--------------------------------------------------------------------------------------------------------------*/
void loadData()
{    
    KartData::Products products;
    fstream input("Shop_Data.bin", ios::in | ios::binary);
    products.ParseFromIstream(&input);
    for (auto iter = products.product().begin(); iter != products.product().end(); iter++)
    {
        ShopStock temp(iter->catagory(), iter->brand(), iter->model(), iter->price(), iter->stock());
        shopData.push_back(temp);
    }

    UserData::Users userData;
    fstream input2("Customer_Data.bin", ios::in | ios::binary);
    userData.ParseFromIstream(&input2);
    for (auto iter = userData.users().begin(); iter != userData.users().end(); iter++)
    {
        Customer temp(iter->mail(),iter->password(),iter->name(),iter->number());
        customerData.push_back(temp);
    }
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
    Order temp(currentCustomer);
    while(1)
    {
        int input,item;
        cout<<"Press 1 To Check Mobiles"<<endl;
        cout<<"Press 2 To Check Laptop"<<endl;
        cout<<"Press 3 To Check Tablet"<<endl;
        cout<<"Press 4 To CheckOut"<<endl;
        cout<<"Press 5 To check Previous Orders"<<endl;
        cout<<"Press 6 To LogOut"<<endl;
        cin>>input;
        switch(input)
        {
        case 1:
            displayMobiles();
            cout<<"Enter the ItemNumber to add to cart";
            cin>>item;
            if(shopData[item-1].stock>0)
            {
                temp.OrderDetails.push_back(shopData[item-1]);
                temp.total+=shopData[item-1].price;
                shopData[item-1].stock--;
            }
            else
                cout<<endl<<"Sorry The Product is currently out of Stock"<<endl<<endl<<endl;
            break;
        case 2:
            displayLaptop();
            cout<<"Enter the ItemNumber to add to cart";
            cin>>item;
            if(shopData[item-1].stock>0)
            {
                temp.OrderDetails.push_back(shopData[item-1]);
                temp.total+=shopData[item-1].price;
                shopData[item-1].stock--;
            }
            else
                cout<<endl<<"Sorry The Product is currently out of Stock"<<endl<<endl<<endl;
            break;
        case 3:
            displayTablet();
            cout<<"Enter the ItemNumber to add to cart";
            cin>>item;
            if(shopData[item-1].stock>0)
            {
                temp.OrderDetails.push_back(shopData[item-1]);
                temp.total+=shopData[item-1].price;
                shopData[item-1].stock--;
            }
            else
                cout<<endl<<"Sorry The Product is currently out of Stock"<<endl<<endl<<endl;
            break;
        case 4:
            int a;
            temp.display(currentCustomer);
            cout<<"Press 1 to continue Shopping"<<endl;
            cout<<"Press 2 to purchase";
            cin>>a;
            if(a==2)
            {
                system("cls");
                cout<<"Order placed Successfully"<<endl;
                temp.write();
                invoiceNo++;
                customerData[currentCustomer-1].history.push_back(temp);
                return;
            }
            break;
        case 5:
                system("cls");
                if(!customerData[currentCustomer-1].history.size())
                    cout<<"You have no previous Orders"<<endl<<endl<<endl;
            for(int i=0;i<customerData[currentCustomer-1].history.size();i++)
                customerData[currentCustomer-1].history[i].display(currentCustomer);
             break;
        case 6:
            for (int j=0;j<temp.OrderDetails.size();j++)
                    shopData[temp.OrderDetails[j].itemId].stock--;
            return;
        default:
            break;
        }
    }
}
void writeData()
{
    Customer::Save();
    ShopStock::Save();
}
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
