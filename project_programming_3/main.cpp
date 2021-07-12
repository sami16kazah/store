#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

void cls(){
 system("cls");
}
class product
{
protected:
    int product_num;
    string product_name;
    int number_of_collection;
    int box_price;
    int number_of_product_in_box;
public:
    product(){product_num=0;product_name="";number_of_collection=0;box_price=0;number_of_product_in_box=0;}
    product(int k,string l,int r,int m,int n)
    {
        product_num=k;
        product_name=l;
        number_of_collection=r;
        box_price=m;
        number_of_product_in_box=n;
    }
    void setk(int k)
    {
        product_num=k;
    }
    int get_product_num()
    {
        return product_num;
    }
    void setl(string l)
    {
        product_name=l;
    }
    string get_product_name()
    {
        return product_name;
    }
    void setn(int n)
    {
        number_of_collection=n;
    }
    int get_number_of_collection()
    {
        return number_of_collection;
    }
    void setm(int m)
    {
        box_price=m;
    }
    int get_box_price()
    {
        return box_price;
    }
    void setr(int r)
    {
        number_of_product_in_box=r;
    }
    int get_number_of_product_in_box()
    {
        return number_of_product_in_box;
    }
    void read_info()
    {
        cout<<"enter product number"<<endl;
        cin>>product_num;
        if(product_num<0)
        {
           cout<<"the number is less than 0 ";
           return;
        }
        cout<<"enter the name of product"<<endl;
        cin>>product_name;
        cout<<"enter the collection number"<<endl;
        cin>>number_of_collection;
        if(number_of_collection<0)
        {
            cout<<"the number of collection is less than 0";
            return;
        }
        cout<<"enter the box price"<<endl;
        cin>>box_price;
        if(box_price<0)
        {
            cout<<"the price is less than 0";
            return;
        }
        cout<<"enter the number of products in box"<<endl;
        cin>>number_of_product_in_box;
        if(number_of_product_in_box<0)
        {
            cout<<"the number is less than 0 ";
            return;
        }
        cls();
    }

    void print()
    {
        cout<<"the number of product is= "<<product_num;
        cout<<"\nthe product name is= "<<product_name;
        cout<<"\nthe collection name is= "<<number_of_collection;
        cout<<"\nthe price of box= "<<box_price<<"$";
        cout<<"\nthe number of product in box is= "<<number_of_product_in_box;
        cout<<"\n===========================\n===========================\n";
            }

};


class recorder
{
protected:
    int prod_id;
    int available_amount;
public:
    recorder(){prod_id=0;available_amount=0;}
    recorder(int l,int k)
    {
        prod_id=l;
        available_amount=k;
    }
    void setl(int l)
    {
        prod_id=l;
    }
    int getl()
    {
        return prod_id;
    }
    void setk(int k)
    {
        available_amount=k;
    }
    int getk()
    {
        return available_amount;
    }
    void read_info()
    {
        cout<<"enter the product id ";
        cin>>prod_id;
        cout<<"enter the amount of the product ";
        cin>>available_amount;
    }
    void print()
    {
        cout<<"product id is "<<prod_id;
        cout<<"\nthe amount of the product is "<<available_amount;
        cout<<"\n";
    }
};

/*struct node
{
    recorder*s;
    node *next;

};*/
/*class recorder_list
{
   node *head,*tail;
recorder *s;
   public:
       recorder_list(){head=NULL;tail=NULL; s=NULL;}
       void creat(recorder *s)
       {
          head=new node;
          head->s=s;
          head->next=NULL;
          tail=head;
       }
       void insrt(recorder *s)
       {
           s=read_info();
           node *temp=new node;
           temp->s=s;
           temp->next=head;
           head=temp;
       }
       void add(recorder *s)
       {
           if(head==NULL)
            creat(recorder*s);
           else
            insrt(recorder*s);
       }
};*/


class store
{
protected:
    int store_number;
    string heading;
    int product_number;
recorder *s;
public:
    store(){store_number=0; heading="";s=NULL;product_number=0;}
    store(int l,string h,int n)
    {
        store_number=l;
        heading=h;
        product_number=n;
        s=new recorder[n];
        for(int i=0;i<n;i++)
            s[i].read_info();
    }
    void setls(int l)
    {
        store_number=l;
    }

    void seths(string h)
    {
        heading=h;
    }

 int getn()
 {
     return product_number;
 }
void setrs(int n)
{
    product_number=n;
    s=new recorder[product_number];
    for (int i=0;i<product_number;i++)
        s[i].read_info();
}
void setrecp(int p,int i)
{
    s[i].setk(p);
}
void setrea(int y,int i)
{
    s[i].setl(y);
}
/*void read_info()
{
      int getls()
    {
        return store_number;
    }
     string geths()
    {
        return heading;
    }
    recorder getrec(int i)
    {
        return s[i];
    }

}
*/
          int getls()
    {
        return store_number;
    }
     string geths()
    {
        return heading;
    }
    recorder getrec(int i)
    {
        return s[i];
    }

    void read()

    {
        cout<<"enter the store number \n";
        cin>>store_number;
        cout<<"enter the store heading \n";
        cin>>heading;
cout<<"enter the number of products in the store \n";
cin>>product_number;
s=new recorder[product_number];
for(int i=0;i<product_number;i++)
    s[i].read_info();

    }
    void print(){
    cout<<"\nthe store number "<<store_number;
    cout<<"\nthe store heading "<<heading;


    }

};


int main()
{
/*product *n;
int m;
cout<<"how many product you wants to enter"<<endl;
cin>>m;
cls();
n=new product[m];
for(int i=0;i<m;i++)
{
    cout<<"enter the product "<<i+1<<endl;
n[i].read_info();
}
cout<<"------------------------------\n";
cout<<"---------the products---------\n";
cout<<"------------------------------\n";
for(int i=0;i<m;i++)
{n[i].print();}*/
store *collect;
int k;
cout<<"how many stores we have\n";
cin>>k;
cls();
collect=new store[k];
for(int i=0;i<k;i++)
    collect[i].read();
for(int i=0;i<k;i++)
   {
     collect[i].print();
for(int j=0;j<collect[i].getn();j++)
    {cout<<"\nthe product id "<<collect[i].getrec(j).getk();
    cout<<"\nthe available amount of product is "<<collect[i].getrec(j).getl();}

   }

}
