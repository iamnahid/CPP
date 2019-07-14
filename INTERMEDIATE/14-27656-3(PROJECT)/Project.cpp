
#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <cstdlib>

    using namespace std;

    class Products
    {
        int id;
        string name;
        double unitPrice;
        int stock;
        bool status;
public:

        Products()
        {
            this->id=0;
            this->name="";
            this->unitPrice=0.0;
            this->stock=0;
            this->status=0;
        }

        void setid(int id)
        {
            this->id=id;
        }
        void setname(string name)
        {
            this->name=name;
        }
        void setunitPrice(double unitPrice)
        {
            this->unitPrice=unitPrice;
        }
        void setstock(int stock)
        {
            this->stock=stock;
        }
        void setstatus(bool status)
        {
            this->status=status;
        }
        int getid()
        {
            return this->id;
        }
        string getname()
        {
            return this->name;
        }
        double getunitPrice()
        {
            return this->unitPrice;
        }
        int getstock()
        {
            return this->stock;
        }
        bool getstatus()
        {
            return this->status;
        }

            bool operator==(int n)
            {
                if(n== this->getid())
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

    };

    list<Products> ProductList;
    list<Products>::iterator it;
    ifstream i;
    ofstream o;

    void initializeProductList()
    {
        i.open("Products.dat");
        int id;
        string name;
        double unitPrice;
        int stock;
        bool status;
        Products p;

            while(i>>id && i>>name && i>>unitPrice && i>>stock && i>>status)
            {
            p.setid(id);
            p.setname(name);
            p.setunitPrice(unitPrice);
            p.setstock(stock);
            p.setstatus(status);
            ProductList.push_back(p);
            }



        i.close();
    }

    void save()
    {
        o.open("Products.dat");

        for(it=ProductList.begin();it!=ProductList.end();it++)
        {
            o<<it->getid()<<"\t\t"<<it->getname()<<"\t\t"<<it->getunitPrice()<<"\t\t"<<it->getstock()<<"\t\t"<<it->getstatus()<<endl;
        }
        o.close();
    }

    Products *searchById(int r)
    {
        Products *p;
        for(it=ProductList.begin();it!=ProductList.end();it++)
        {
            if(r == it->getid())
            {
                p=&*it;

                    return p;
                    break;
            }
            else
                {
                    return 0;
                }
        }
    }


    void addProduct(Products p)
    {
        for(it=ProductList.begin();it!=ProductList.end();it++)
        {
            if(p.getid() > it->getid())
            {
                ProductList.push_back(p);
                cout<<"-----------------------------------"<<endl;
                cout<<"PRODUCT ADDED SUCCESSFULLY!"<<endl;
                break;
            }
            else
                {
                    cout<<"A PRODUCT WITH THIS ID EXISTS!"<<endl;
                    break;
                }
        }
        save();
    }
    void editProduct(Products* p,string name)
    {
         cout<<"EDIT COMPLETED!"<<endl;
        save();

    }
    void deleteProduct(Products* p)
    {
        for(it=ProductList.begin();it!=ProductList.end();it++)
        {
            if(p->getid() == it->getid())
            {
                it=ProductList.erase(it);
                cout<<"DELETE COMPLETED!"<<endl;
                break;
            }
            else
                {
                    cout<<"YOU ENTERED WRONG ID"<<endl;
                    break;
                }
        }
        save();

    }
    void printAllProducts()
    {
        for(it=ProductList.begin();it!=ProductList.end();it++)
        {
            cout<<"ID: "<<it->getid()<<"\t"<<"NAME: "<<it->getname()<<"\t"<<"UNITPRICE: "<<it->getunitPrice()<<"STOCK: "<<"\t"<<it->getstock()<<"\t"<<"STATUS: "<<it->getstatus()<<endl;

        }
    }
    void printProduct(Products* p)
    {

        cout<<"ID: "<<p->getid()<<"\t"<<"NAME: "<<p->getname()<<"\t"<<"UNITPRICE: "<<p->getunitPrice()<<"\t"<<"STOCK: "<<p->getstock()<<"\t"<<"STATUS: "<<p->getstatus()<<endl;

    }


    int main ()
    {
        Products* p;
        Products p1;
        p=new Products;
        int x,y,z;
        int id;
        string name;
        double unitPrice;
        int stock;
        bool status;

        initializeProductList();

UI:
    cout<<"===================="<<endl;
    system("Color 0A");
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
    cin>>x;

    switch(x)
    {

        case 1:

                system("Color 0B");
                cout<<"Enter ID:_ "<<endl;
                cin>>z;
                p=searchById(z);
                cout<<"SHOWING DETAILS: "<<endl;
                printProduct(p);
                break;

        case 2:
                system("Color 0C");
                printAllProducts();
                cout<<endl;
                break;

        case 3:
                system("Color 1B");
                cout<<"Enter ID:_ "<<endl;
                cin>>id;
                p1.setid(id);
                cout<<"Enter NAME:_ "<<endl;
                cin>>name;
                p1.setname(name);
                cout<<"Enter UNITPRICE:_ "<<endl;
                cin>>unitPrice;
                p1.setunitPrice(unitPrice);
                cout<<"Enter STOCK:_ "<<endl;
                cin>>stock;
                p1.setstock(stock);
                cout<<"Enter STATUS:_ "<<endl;
                cin>>status;
                p1.setstatus(status);
                addProduct(p1);
                break;

        case 4:
                system("Color 2C");
                cout<<"Enter ID:_ "<<endl;
                cin>>z;
                p=searchById(z);
                cout<<"NEW NAME:_ ";
                cin>>name;
                p->setname(name);
                editProduct(p,name);
                break;

        case 5:
                system("Color 5E");
                cout<<"Enter ID:_ "<<endl;
                cin>>z;
                p=searchById(z);
                deleteProduct(p);
                break;

        case 6:
                system("Color 1B");
                system("CLS");
                break;

        case 7:
                system("Color 0a");
                exit(0);
                save();
                break;

        default:
                system("Color 0C");
                exit(1);
                break;
    }

    goto UI;
        return 0;

    }

