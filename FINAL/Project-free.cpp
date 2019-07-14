#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

class Product{
    int id;
    string name;
    double unitPrice;
    int stock;
    bool status;
public:
    Product(){
    this->id=0;
    this->name=" ";
    this->unitPrice=0.00;
    this->stock=0;
    this->status=0;
    }
    Product(int id,string name,double unitPrice,int stock,bool status){
    this->id=id;
    this->name=name;
    this->unitPrice=unitPrice;
    this->stock=stock;
    this->status=status;
    }
//setters
    void setid(int id){
    this->id=id;
    }
    void setname(string name){
    this->name=name;
    }
    void setunitPrice(double unitPrice){
    this->unitPrice=unitPrice;
    }
    void setstock(int stock){
    this->stock=stock;
    }
    void setstatus(bool status){
    this->status=status;
    }
//getters
    int getid(){
    return this->id;
    }
    string getname(){
    return this->name;
    }
    double getunitPrice(){
    return this->unitPrice;
    }
    int getstock(){
    return this->stock;
    }
    bool getstatus(){
    return this->status;
    }
    bool operator==(int y){
    if (y==this->getid())
        return true;
    else
        return false;
    }

};
    list<Product> productList;

    void initializeProductList(){
    Product p;
    int id;
    string name;
    double unitPrice;
    int stock;
    bool status;

    fstream in;
    in.open("product.dat"/*,ios::in|ios::binary*/);
    while(in>>id && in>>name &&in>>unitPrice &&in>>stock &&in>>status){
        p.setid(id);
        p.setname(name);
        p.setunitPrice(unitPrice);
        p.setstock(stock);
        p.setstatus(status);
        productList.push_back(p);
    }
    in.close();
    }

    Product* searchById(int y){
    list<Product>::iterator It;
    It = productList.begin();
    Product *ptr;
    while (It!= productList.end()){
        if (y==It->getid()){
    ptr=&*It;
    return ptr;
    break;
    It++;
        }
        else return 0;
    }
}

void save(){
    fstream out("product.dat"/*,ios::out|ios::binary*/);
    list<Product>::iterator It;
    It = productList.begin();
    while (It!= productList.end())
    {
    out<<It->getid()<<"\t"<<out<<It->getname()<<"\t\t"<<out<<It->getunitPrice()<<"\t\t"<<out<<It->getstock()<<"\t"<<out<<It->getstatus()<<endl;
    It++;
    }
    out.close();
}
void addNewProduct(Product p){
     list<Product>::iterator It;
    It = productList.begin();
    while (It!= productList.end())
    {
      if(p.getid()>It->getid()){
        productList.push_back(p);
        cout<<"Product Added Successfully!";
        cout<<endl;
        break;
        It++;
        }
        else{
            cout<<"Cannot Enter Two Product with same ID"<<endl;
            break;
            It++;
            }
        }
    save();
}

void editProduct(Product* p,string name/*,double unitPrice,int stock,bool status*/){
    cout<<"Enter New Name For Product: "<<endl;
    p->setname(name);
    //p->setunitPrice(unitPrice);
    //p->setstock(stock);
    //p->setstatus(status);
    cout<<"Product Edited Successfully! ";
    cout<<endl;
    save();
}

void deleteProduct(Product* p){
    list<Product>::iterator It;
    It = productList.begin();
    while (It!= productList.end()){
    if (p->getid()==It->getid()){
        It=productList.erase(It);
        cout<<"Product Deleted Successfully!";
        cout<<endl;
        break;
        }
    It++;
    }
    save();
}

void printProduct(Product* p){
    if(p==0){
        cout<<"Product Not Found"<<endl;
        cout<<endl;
    }
    else {
    cout<<"Id: "<<p->getid()<<endl;
    cout<<"Name: "<<p->getname()<<endl;
    cout<<"Unit Price: "<<p->getunitPrice()<<endl;
    cout<<"Stock: "<<p->getstock()<<endl;
    cout<<"Status: "<<p->getstatus()<<endl;
    cout<<endl;
    }
    save();
}

void printAllProducts(){
    list<Product>::iterator It;
    It = productList.begin();
    cout<<"Id:\t"<<"Name:"<<"\t\t"<<"Unit Price:\t"<<"Stock:\t"<<"Status:"<<endl;
    while (It != productList.end())
    {
    cout<<It->getid()<<"\t"<<It->getname()<<"\t\t"<<It->getunitPrice()<<"\t\t"<<It->getstock()<<"\t"<<It->getstatus()<<"\t"<<endl;
    It++;
    }
    //save();
}

int main(){
    Product p;
    Product *p1;
    //p1= new Product();
    int x;
    int choice;
    int id;
    string name;
    double unitPrice;
    int stock;
    bool status;

    initializeProductList();
ui:
    cout<<"===================="<<endl;
    cout<<"1. Search Product"<<endl;
    cout<<"2. View All Products"<<endl;
    cout<<"3. Add new Products"<<endl;
    cout<<"4. Edit Product"<<endl;
    cout<<"5. Delete Product"<<endl;
    cout<<"6. Clear Screen"<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"==================="<<endl;
    cout<<endl;
    cout<<"Enter Your Choice Here:"<<endl;

    cin>>choice;

    switch(choice){
case 1:
    cout<<"--------------------"<<endl;
    cout<<"Showing Product Detail:"<<endl;
    cin>>x;
    p1=searchById(x);
    printProduct(p1);
    break;
case 2:
    printAllProducts();
    cout<<endl;
    save();
    break;
case 3:
    cout<<"Enter Product ID: ";
    cin>>id;
    p.setid(id);
    cout<<"Enter Product Name: ";
    cin>>name;
    p.setname(name);
    cout<<"Enter Product Unit Price: ";
    cin>>unitPrice;
    p.setunitPrice(unitPrice);
    cout<<"Enter Product Quantity: ";
    cin>>stock;
    p.setstock(stock);
    cout<<"Enter Product Status: ";
    cin>>status;
    p.setstatus(status);
    cout<<"===================="<<endl;
    addNewProduct(p);
    //save();
    break;
case 4:
    cout<<"Enter Product ID: ";
    cin>>x;
    p1=searchById(x);
    cout<<"Enter Product New Name: ";
    cin>>name;
        //p1->setname(name);
        //cout<<"Enter Product New Unit Price: ";
        //cin>>unitPrice;
        //p1->setunitPrice(unitPrice);
        //cout<<"Enter Product New Quantity: ";
        //cin>>stock;
       //p1->setstock(stock);
        //cout<<"Enter Product New Status: ";
        //cin>>status;
        //p1->setstatus(status);
    cout<<"===================="<<endl;
    editProduct(p1,name/*,unitPrice,stock,status*/);
    //save();
    break;
case 5:
    cout<<"Enter Product ID: ";
    cin>>x;
    p1=searchById(x);
    cout<<"===================="<<endl;
    deleteProduct(p1);
    //save();
    break;
case 6:
    system("CLS");
    break;
case 7:
    exit(0);
    initializeProductList();
    save();
    break;
default:
   exit(1);
    }
    cout<<endl;
    goto ui;
    return 0;
}

