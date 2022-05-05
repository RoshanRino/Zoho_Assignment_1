#include<iostream>
using namespace std;
#include <vector>
#include <fstream>
#include <string.h>
#include "kart.pb.h"
fstream fileEdit;
/*--------------------------------------------------------------------------------------------------------------*/
class ShopStock;
int numberOfItems;
vector <ShopStock> shopData;
class ShopStock
{
    public:
    int itemId;
    string brand;
    string model;
    int stock;
    int price;
    string catagory;
    ShopStock(string cat,string bd,string mod,int cost,int number)
    {
        itemId=numberOfItems++;
        catagory=cat;
        brand=bd;
        model=mod;
        price=cost;
        stock=number;
    }
    ShopStock(const ShopStock &t)
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
    void writeOrder()
    {
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<left<<catagory;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<brand;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<model;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<price<<endl;
    }
    static void Save()
    {
        KartData::Products shopStock;
        for (int i = 0; i < shopData.size(); i++)
        {
            KartData::Product* p;
            p=shopStock.add_product();
            p->set_brand(shopData[i].brand);
            p->set_catagory(shopData[i].catagory);
            p->set_model(shopData[i].model);
            p->set_price(shopData[i].price);
            p->set_stock(shopData[i].stock);
        }
        fstream output("Shop_Data.bin", ios::out | ios::trunc | ios::binary);
        shopStock.SerializeToOstream(&output);
          

        /*fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<left<<catagory;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<brand;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<model;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<price;
        fileEdit.width(15);
        fileEdit.fill(' ');
        fileEdit<<stock<<endl;*/
    }
};
