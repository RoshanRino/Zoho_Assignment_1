#include "Class_ShopStock.h"
/*--------------------------------------------------------------------------------------------------------------*/
int invoiceNo=1514;
class Order
{
    int invoiceNumber;
    int id;
public:
    int total=0;
    vector <ShopStock> OrderDetails;
    Order(int curr)
    {
        id = curr;
        invoiceNumber=invoiceNo;
    }
    void display(int current)
    {
        if(OrderDetails.empty())
        {
            cout<<"Your Cart is Empty"<<endl;
            return;
        }
        cout<<"//////////////////////////////////////////////////"<<endl;
        cout<<"Invoice Number  "<<invoiceNumber<<endl;
        cout<<"Date 19-April-2022"<<endl<<endl<<endl;
        cout<<"Catagory       Brand          Model          Price"<<endl;
        for (int i=0;i<OrderDetails.size();i++)
            if(current == id)
                OrderDetails[i].displayOrder();
        cout<<endl<<endl<<endl;
        cout<<"Total Cost : "<<total<<endl;
        cout<<"//////////////////////////////////////////////////"<<endl;
        cout<<endl;
    }
    void write()
    {
        if(OrderDetails.empty())
        {
            cout<<"Your Cart is Empty"<<endl;
            return;
        }
        fileEdit.open("Invoice.txt",ios::app);
        fileEdit<<"//////////////////////////////////////////////////"<<endl;
        fileEdit<<"Invoice Number  "<<invoiceNumber<<endl;
        fileEdit<<"Date 19-April-2022"<<endl<<endl<<endl;
        fileEdit<<"Catagory       Brand          Model          Price"<<endl;
        for (int i=0;i<OrderDetails.size();i++)
            OrderDetails[i].writeOrder();
        fileEdit<<endl<<endl<<endl;
        fileEdit<<"Total Cost : "<<total<<endl;
        fileEdit<<"//////////////////////////////////////////////////"<<endl;
        fileEdit<<endl;
        fileEdit.close();
    }
    Order(const Order &t)
    {
        invoiceNumber=t.invoiceNumber;
        id = t.id;
        total=t.total;
        for(int i=0;i<t.OrderDetails.size();i++)
            OrderDetails.push_back(t.OrderDetails[i]);
    }
};
