#include<iostream>
#include<fstream>
#include<conio.h>
#include <stdlib.h>
#include<vector>
#include <windows.h>

using namespace std;


class product

{
    public:
    
    void purchase();
    void disp();
    void pay();
    void Credit();
    void UPI();
    union Groceries{
        string icecrream;
        string Soft_drinks;
        string chips;
        string chocolate;
    };


    union clothing{
        string pant;
        string shirt;
        string shoes;
        string accessory;
    };


    union electronic_devices {
        string phone;
        string headphones;
        string laptops;
        string calculator;

    };


     union Home_appliences {
        string dining_sets;
        string mixer_grinders;
        string kitchen_fittings;
        string lunch_boxes;

    };
    
   
};

vector<int> pro;
void initialising(vector<int> &pro)
{    
      pro.push_back(0);
      pro.push_back(40);
      pro.push_back(50);
      pro.push_back(20);
      pro.push_back(50);

      pro.push_back(400);
      pro.push_back(500);
      pro.push_back(300);
      pro.push_back(70);

      pro.push_back(40000);
      pro.push_back(50000);
      pro.push_back(30000);
      pro.push_back(1000);

      pro.push_back(3000);
      pro.push_back(2000);
      pro.push_back(2000);
      pro.push_back(600);
}



static int k = 1;
static int sum = 0;


void product:: purchase()
{

    system ("CLS");
    system("Color 5D");
        cout<<"\n\n\n\n\t\t\t\t";

  cout<<"______________________________________________________________________"<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;

  cout<<"\t\t\t\t          ENJOY YOUR SHOPPING EXPERIENCE WITH US!!"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t________________________________________________________________________"<<endl;

  cout<<"\n\n\n\t\t\t\tWHAT ARE YOU LOOKING FOR??"<<endl<<endl;

  cout<<"\n\t\t\t\t          1 -> GROCERIES"<<endl<<"\n\t\t\t\t          2 -> CLOTHING"<<endl<<"\n\t\t\t\t          3 -> ELECTRONIC DEVICES"<<endl;
  cout<<"\n\t\t\t\t          4 -> HOME APPLIENCES"<<endl<<"\n\t\t\t\t          5 -> EXIT"<<endl;
   int n;
  cin>>n;

  ofstream out1;
  out1.open("test.txt", std::ios_base::app);


     if(n==1)
  {
    system ("CLS");
    
    int m;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------------\n\n";
    cout<<"\t\t\t\t\t\t\tCHOOSE FROM THE OPTIONS"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t---------------------------\n\n\n\n";

    cout<<"\t\t\t\t\t\t\t         1-> ICECREAM\n"<<endl;
    cout<<"\t\t\t\t\t\t\t         2-> SOFT DRINKS\n"<<endl;
    cout<<"\t\t\t\t\t\t\t         3-> CHIPS\n"<<endl;
    cout<<"\t\t\t\t\t\t\t         4-> CHOCOLATE\n"<<endl;
    cout<<"\t\t\t\t\t\t\t         0-> EXIT\n"<<endl;


    cin>>m;

    if(m==1)
    {

      int quan;
      cout<<"\t\t\t\t";
      cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
      cin>>quan;
      //  ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);

      out1<<k++<<" Icecream           "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();
      product d;
      d.purchase();
    }

     else if(m==2)
    {
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;
        //  ofstream out1;
        //  out1.open("test.txt", std::ios_base::app);

       out1<<k++<<" SOFT DRINKS        "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();

      product d;
      d.purchase();
    }


      else if(m==3)
    {
        // ofstream out1;
        // out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;

      out1<<k++<<" CHIPS              "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;



      sum +=pro[m]*quan;
      out1.close();
      product d;
      d.purchase();
    }


      else if(m==4)
    {
      //  ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;

      out1<<k++<<" CHOCOLATE          "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      out1.close();
      sum +=pro[m]*quan;

      product d;
      d.purchase();
    }
    else if(m == 0)
    {
        product d;
        d.purchase();
    }

      else{
        cout<<"\t\t\t\t\nINVALID INPUT"<<endl;
        product d;
        d.purchase();
      }
  }

  else if(n==2)
  {

    system ("CLS");
   
    int m;
   cout<<"\n\n\n\n\n\n\t\t\t\t---------------------------\n\n";
    cout<<"\t\t\t\tCHOOSE FROM THE OPTIONS"<<endl<<endl;
    cout<<"\t\t\t\t---------------------------\n\n";


    cout<<"\t\t\t\t          5-> PANTS"<<endl;
    cout<<"\t\t\t\t          6-> SHIRT"<<endl;
    cout<<"\t\t\t\t          7-> SHOES"<<endl;
    cout<<"\t\t\t\t          8-> ACCESSORIES"<<endl;
    cout<<"\t\t\t\t          0-> EXIT"<<endl;


    cin>>m;

    if(m==5)
    {
      //  ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
      int quan;
      cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
      cin>>quan;

      out1<<k++<<" PANTS              "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();
      product d;
      d.purchase();
    }

     else if(m==6)
    {
      // ofstream out1;
      // out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;

      out1<<k++<<" SHIRTS             "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();
      product d;
      d.purchase();
    }


      else if(m==7)
    {
      //  ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;

      out1<<k++<<" SHOES              "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();
      product d;
      d.purchase();
    }


      else if(m==8)
    {
        // ofstream out1;
        // out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;
      out1<<k++<<" ACCESSSORORY       "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();
      product d;
      d.purchase();
    }
    else if(m == 0)
    {
        product d;
        d.purchase();
    }

      else{
        cout<<"\t\t\t\t\nINVALID INPUT"<<endl;
        product d;
        d.purchase();
      }
  }


    else if (n==3)
  {
    system ("CLS");
   
    int m;
   cout<<"\n\n\n\n\n\n\t\t\t\t---------------------------\n\n";
    cout<<"\t\t\tCHOOSE FROM THE OPTIONS"<<endl<<endl;
    cout<<"\t\t\t---------------------------\n\n";

    cout<<"\t\t\t\t           9-> PHONE"<<endl;
    cout<<"\t\t\t\t           10-> HRADPHONES"<<endl;
    cout<<"\t\t\t\t           11-> LAPTOPS"<<endl;
    cout<<"\t\t\t\t           12-> CALCULATOR"<<endl;
    cout<<"\t\t\t\t           0-> EXIT"<<endl;


    cin>>m;

    if(m==9)
    {
      // ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
      int quan;
      cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
      cin>>quan;
      out1<<k++<<" PHONE              "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();
      product d;
      d.purchase();
    }

     else if(m==10)
    {
      // ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;
      out1<<k++<<" HEADPHONES        "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();
      product d;
      d.purchase();
    }


      else if(m==11)
    {
      // ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;

      out1<<k++<<" LAPTOPS           "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();
      product d;
      d.purchase();
    }


      else if(m==12)
    {
      // ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;

      out1<<k++<<" CALCULATOR        "<<quan<<"          "<<pro[m]<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=pro[m]*quan;
      out1.close();

      product d;
      d.purchase();
    }
    else if(m == 0)
    {
        product d;
        d.purchase();
    }

      else{
        cout<<"\t\t\t\t\nINVALID INPUT"<<endl;
        product d;
        d.purchase();
      }
  }



  else if(n==4)
  {

    system ("CLS");
    
    int m;
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------------\n\n";
    cout<<"\t\t\t\t\t\t\tCHOOSE FROM THE OPTIONS"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t---------------------------\n\n";



    cout<<"\t\t\t\t\t\t\t          13-> DINING SETS\n"<<endl;
    cout<<"\t\t\t\t\t\t\t          14-> MIXER AND GRINDER\n"<<endl;
    cout<<"\t\t\t\t\t\t\t          15-> KITCHEN FITTINGS\n"<<endl;
    cout<<"\t\t\t\t\t\t\t          16-> LUNCH BOXES\n"<<endl;
    cout<<"\t\t\t\t\t\t\t          0-> EXIT"<<endl;


    cin>>m;

    if(m==13)
    {
      // ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
      int quan;
      cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
      cin>>quan;

      out1<<k++<<" DINING SETS        "<<quan<<"           4000"<<"          "<<pro[m]*quan<<endl<<endl;


      sum +=4000*quan;
      out1.close();

      product d;
      d.purchase();
    }

     else if(m==14)
    {
      // ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;
      out1<<k++<<" MIXER AND GRINDER "<<quan<<"           5000"<<"          "<<pro[m]*quan<<endl<<endl;

      out1.close();

      sum +=5000*quan;
      out1.close();


      product d;
      d.purchase();
    }


      else if(m==15)
    {
      // ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;

      out1<<k++<<" KITHCHEN FITTINGS "<<quan<<"           3000"<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=3000*quan;
      out1.close();


      product d;
      d.purchase();
    }


      else if(m==16)
    {
      // ofstream out1;
      //  out1.open("test.txt", std::ios_base::app);
        int quan;
        cout<<"\t\t\t\t\nEnter the quantity: "<<endl;
        cin>>quan;

      out1<<k++<<" LUNCH BOXES       "<<quan<<"            600"<<"          "<<pro[m]*quan<<endl<<endl;

      sum +=600*quan;
        out1.close();

      product d;
      d.purchase();
    }
    else if(m == 0)
    {
        product d;
        d.purchase();
    }

      else{
        cout<<"\t\t\t\tINVALID INPUT"<<endl;
        product d;
        d.purchase();
      }
  }

  else if(n==5)
  {
    product p;
    p.disp();
  }

  out1.close();
}

void final1()
{
  
  cout<<"\n\n\t\t\t\t________________________________________________________"<<endl;

  cout<<"\t\t\t\t            Your Order will be delivered by 31st of JULY";

  cout<<"\t\t\t\t  ___________________________________________________________"<<endl<<endl<<endl<<endl;
}



 
void final2()
{
    
    system ("CLS");
    system("Color 2A");
  

        cout<<"\n\n\n\n";
  cout<<"\t\t\t\t________________________________________________________________________"<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;

  cout<<"\t\t\t\t                THANK YOU FOR SHOPPING WITH US!!"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t________________________________________________________________________"<<endl;
  exit (0);
}




static int n;

void discounts()
{
    system("PAUSE");
    
    system ("CLS");
    system("Color 5F");
    cout<<"\n\n\n\n\t\t\t\t";
  cout<<"________________________________________________________________________"<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;

  cout<<"\t\t\t\t                       DISCOUNTS!!"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t________________________________________________________________________\n\n\n\n"<<endl;

  cout<<"\t\t\t\t IF YOUR TOTAL AMOUNT IS MORE THAN 1000  RUPEES, YOU WILL GET DISCOUNT OF 10%\n\n";
  cout<<"\t\t\t\t IF YOUR TOTAL AMOUNT IS MORE THAN 1600  RUPEES, YOU WILL GET DISCOUNT OF 15%\n\n";
  cout<<"\t\t\t\t IF YOUR TOTAL AMOUNT IS MORE THAN 5000  RUPEES, YOU WILL GET DISCOUNT OF 30%\n\n";
  
  
  if(1000<sum<1500)
  {
     n = 10;
  }
  else if(1600<sum<1700)
  {
     n = 15;
     cout<<"15\n";
  }
  else if (5000<sum<5500)
  {
     n = 30;
    cout<<"\n30";
  }
  cout<<"\t\t\t\t ENTER COUPON CODE\n\n\n\t\t\t\t";
  int x;
  cin>>x;
    char another = 'y';

  
   if( x == 1234)
   {
    cout<<"\t\t\t\tYou have sucssefully claimed discount of 15 % on  your order!\n\n"<<endl;
    n = n+15;
    system("PAUSE");
    product p ;
    p.disp();
   }  
   else{
    try{
      throw 1;
    }

    catch(int  num)
    {
       cout<<"\t\t\t\t       INVALID CODE!\n\n";
    }
    cout<<"\t\t\t\tDO YOU WANT TO TRY AGAIN?(Y/N)\n\n\n\t\t\t\t";
    char y;
    cin>>y;
    if(y == 'Y')
    {
      discounts();
    }
    else if(y == 'N'){
      product p;
      p.disp();
    }
     else{
    cout<<"\t\t\t\tINVALID INPUT\n\n\n";
    discounts();
   }
   }
  
}


void billing()

{
      system("PAUSE");
 
      int numb ,disp,sum1;
    string line;
    system ("CLS");
    system("Color 7F");
     cout<<"\n\n\n\n\t\t\t\t";
  cout<<"________________________________________________________________________"<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;

  cout<<"\t\t\t\t                                CART"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t_________________________________________________________________________\n\n\n\n"<<endl;
      ifstream in1;
  in1.open("test.txt");
  while(getline(in1,line)){
        cout<<line<<endl;
  }
  

  cout<<"\n\n\t\t\t\tTotal AMMOUNT +GST = "<<sum<<endl;
  numb = n;
  disp=(sum*numb) /100;
  sum1=sum-disp;
  cout<<"\t\t\t\tTotal AMMOUNT after applying disacount = "<<sum1<<endl;
  getch(); 
  system("PAUSE");
  product p;
  p.pay();
}




void product:: UPI()
{
    while(1)
    {
        system("cls");
                   system("Color 3E");

         cout<<"\n\n\n\n\t\t\t\t";
  cout<<"_________________________________________________________________________"<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;

  cout<<"\t\t\t\t                             UPI"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t________________________________________________________________________\n\n\n\n"<<endl;
        cout<<"\n\n\t\t\t\t\t\t\tENTER YOUR UPI ID: "<<endl<<endl;
        string UPI;
        cin>>UPI;
        int lengthupi;
        lengthupi=UPI.size();
        if(lengthupi < 8)
        {
             cout<<"\t\t\t\t\t\t\t Invalid id try again....:( "<<endl<<endl;
             getch();
        }
        else
        {
            string pin;
              cout<<"\t\t\t\t\t\t\tENTER YOUR PIN : "<<endl<<endl;
              cin>>pin;
            int pinsz;
            pinsz = pin.size();
            if(pinsz<4)
            {
                cout<<"\t\t\t\t\t\t\tInvalid Pin try again :( "<<endl<<endl;
                getch();
            }
            else
            {
                  cout<<"\t\t\t\t\t\t\tPAYMENT APPROVED :) "<<endl<<endl;
                getch();
                product p;
                p.disp();
            }
        }
    }
}
void product:: Credit()
{
    while(1)
    {
        system("cls");
           system("Color 3E");

         cout<<"\n\n\n\n";
  cout<<"\t\t\t\t_________________________________________________________________________"<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;

  cout<<"\t\t\t\t                       CREDIT CARD"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t________________________________________________________________________\n\n\n\n"<<endl;
        cout<<"\t\t\t\t\t\t\tENTER YOUR CARD NO. * * **  "<<endl<<endl;
        char cardno[16];
        cin>>cardno;
        int cardnoSz=strlen(cardno);
        if(cardnoSz<13)
        {
            cout<<"\t\t\t\t\t\t\t Invalid card no."<<endl<<endl;
            getch();
        }
        else
        {
            char Pin[4];
           cout<<"\t\t\t\t\t\t\t Enter Pin :"<<endl<<endl;
            cin>>Pin;
            int Pinsz = strlen(Pin);
            if(Pinsz < 4)
            {
                cout<<"\t\t\t\t\t\t\t Invalid Pin "<<endl<<endl;
                getch();
            }
            else
            {
                cout<<"\t\t\t\t\t\t\t Payment Approved...:) "<<endl<<endl;
                system("PAUSE");
                product p;
                p.disp();
            }
        }
    }
}

       
void product:: pay(){

    system("cls");
    system("Color 3E");


     cout<<"\n\n\n\n";

  cout<<"\t\t\t\t_________________________________________________________________________"<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;

  cout<<"\t\t\t\t                                PAYMENT"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t_________________________________________________________________________"<<endl;
    

  cout<<"\n\n\n\n\n\n\t\t\t\t---------------------------\n\n";
    cout<<"\t\t\t\t  CHOOSE FROM THE OPTIONS"<<endl<<endl;
    cout<<"\t\t\t\t---------------------------\n\n"; 
    cout<<"\n\n\t\t\t\t1-> UPI";    
    cout<<"\n\n\t\t\t\t2-> CERDIT CARD\n\n";    
    
    int c;
    cin>>c;
    switch(c)
    {
        case 1:  
            UPI();   break;
        case 2:
            Credit();   break;
        default: 
        {
          cout<<"\t\t\t\tINVALID INPUT!";
          system("PAUSE");
          product p;
          p.pay();
        };
    }
}


void product:: disp()
{
    
    system ("CLS");
    system("Color 5D");
        cout<<"\n\n\n\n";

  cout<<"\t\t\t\t________________________________________________________________________"<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;

  cout<<"\t\t\t\t                              WELCOME!"<<endl<<endl;
  cout<<"\t\t\t\t          ENJOY YOUR SHOPPING EXPERIENCE WITH US!!"<<endl<<endl;
  cout<<"\t\t\t\t======================================================================="<<endl<<endl;
  cout<<"\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
  cout<<"\t\t\t\t________________________________________________________________________"<<endl;



   cout<<"\n\n\n\n\t\t\t\t          1-> GO SHOPPING"<<endl<<"\n\t\t\t\t          2 -> View Offers and discounts"<<endl<<"\n\t\t\t\t          3 -> GO TO CART"<<endl;
   cout<<"\n\t\t\t\t          4 ->CHECKOUT!"<<endl;
   int  n ;
   cin>>n;
  
   if(n==1)
   {
  product p;
     p.purchase();
   }

   else if(n==2)
   {
    discounts();
    
   }

   else if(n==3)
   {
     billing();
   }
    else if(n==4)
   {
     final1();
     final2();
   }

   else{
    cout<<"\t\t\t\tINVALID INPUT!"<<endl;
    product p1;
    p1.disp();
   }
   

}



class admin{
    string str;
    string USERID;
    string Password,id1,password;

public:

    admin(){
        
        Admin_login();
    }
    void add_product(){
        int n ,quantity, price ;
        string name ;
        ofstream mylogin("Stock.txt");
        mylogin<<"\n\n\n\n\t\t\t\tS.no          Name                     Quantity                      Price  \n";
        mylogin<<"\t\t\t\t1             Ice cream                12                              40rs \n";
        mylogin<<"\t\t\t\t2             Soft drink               11                              20rs \n";
        mylogin<<"\t\t\t\t3             Chocolate                12                              70rs \n";
        mylogin<<"\t\t\t\t4             Chips                    100                             30rs \n";
        mylogin<<"\t\t\t\t5             Pants                    30                              1200rs \n";
        mylogin<<"\t\t\t\t6             Shirts                   30                              516rs \n";
        mylogin<<"\t\t\t\t7             Shoes                    30                              7000rs \n";
        mylogin<<"\t\t\t\t8             Accessory                15                              70rs \n";
        mylogin<<"\t\t\t\t9             Phone                    10                              50000rs \n";
        mylogin<<"\t\t\t\t10            Headphone                10                              3000rs \n";
        mylogin<<"\t\t\t\t11            Laptop                   30                              399999rs \n";
        mylogin<<"\t\t\t\t12            Calculator               10                              659rs \n";
        mylogin<<"\t\t\t\t13            Dining set               20                              2000rs \n";
        mylogin<<"\t\t\t\t14            Mixer gringer            10                              300rs \n";
        mylogin<<"\t\t\t\t15            Kitchen fitting          1                               7000rs \n";
        mylogin<<"\t\t\t\t16            Lunch boxes              15                              600rs \n";
        //ENTERING NEW ITEM.
        cout<<"\t\t\t\tEnter the number of new item to be added:";
        cin>>n;
        for(int i=17;i<17+n;i++){
        cin>>name;
        cin>>quantity;
        cin>>price;
            mylogin<<i;
            mylogin<<"            ";
            mylogin<<name;
            mylogin<<"                     ";
            mylogin<<quantity;
            mylogin<<"                             ";
            mylogin<<price;
            mylogin<<"rs\n";
        }
    }


    void stock_details(){
      system("PAUSE");
    system("cls");
    cout<<"\n\n\n\n\t\t\t\t";
         cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
      cout<<"\t\t\t\t______________________________________________________________________________________"<<endl<<endl;
      cout<<"\t\t\t\t                                 STOCK\n\n";
      cout<<"\t\t\t\t_______________________________________________________________________________________"<<endl<<endl;
      cout<<"\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
    

       ifstream mylogin("Stock.txt");
        while (!mylogin.eof())
           {
                getline(mylogin,str);
                cout<<str<<endl;
           }
    }



     void Admin_login(){
          system("PAUSE");
    
    system ("CLS");
    system("Color 3E");
        cout<<"\n\n\n\n\t\t\t\t";
         cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
      cout<<"\t\t\t\t______________________________________________________________________________________"<<endl<<endl;
      cout<<"\t\t\t\t                                 ADMIN LOGIN \n\n";
      cout<<"\t\t\t\t_______________________________________________________________________________________"<<endl<<endl;
      cout<<"\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl<<endl;

    cout << "\t\t\t\tEnter the User id\n\t\t\t\t" << endl;
    cin >> USERID;

    cout << "\t\t\t\tEnter the Password\n\t\t\t\t" << endl;
    cin >> Password;
    // oping file
    ifstream my("Adminlogin.txt");
    // cheaking if the user id and password is correct or not
    while (!my.eof())
    {
        getline(my, id1);
        getline(my, password);

        if ( USERID==id1)
        {
            if (password == Password)
            {

                break;
            }
            else
            {
                cout << "\t\t\t\tEntered Password is wrong" << endl;
                Admin_login();
            }
        }
        }

    // if wrong recalling the constructer
    if (id1 != USERID)
    {
        cout << "\t\t\t\tEnter USER ID is wrong" << endl;
        Admin_login();


    }

    int n;
    while(1){
      system("PAUSE");
      system("cls");
       cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------------\n\n";
    cout<<"\t\t\t\t\t\t\tCHOOSE FROM THE OPTIONS"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t---------------------------\n\n\n\n";   
    cout<<"\t\t\t\t1 -> TO CHEAK STOCK"<<endl<<"\t\t\t\t2 -> EXIT\n\n";
    cin>>n;
   if(n==1){
        stock_details();
    }
    else if(n==2){
        final2();
    }
    
    else 
        break;
    }
    my.close();
     }
     };


            //customer class

    class customer{
        string moible,USERID,Password;
        int USERCH;  

    public:
        void customer_loginold()
{
      system("PAUSE");
    
    system ("CLS");
    system("Color 3A");

    string id, password;
        cout<<"\n\n\n\n\t\t\t\t";
        
      cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
      cout<<"\t\t\t\t___________________________________________________________________________________"<<endl<<endl;
      cout<<"\t\t\t\t                                LOGIN \n\n";
      cout<<"\t\t\t\t____________________________________________________________________________________"<<endl<<endl;
      cout<<"\t\t\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl<<endl;

    cout << "\t\t\t\tEnter the User id\n\t\t\t\t";
    cin >> USERID;

    cout << "\t\t\t\tEnter the Password\n\t\t\t\t";
    cin >> Password;
    // oping file
    
    ifstream mylogin("Userlogin.txt");
    // cheaking if the user id and password is correct or not
    while (!mylogin.eof())
    {

        getline(mylogin, id);
        getline(mylogin, password);
        if (USERID == id)
        {
            if (password == Password)
            {

               cout<<"\t\t\t\tYou have been sucsessfully loged in"<<endl;
               system("PAUSE");
               product d;
               d.disp();
            }
            else
            {
                cout << "\t\t\t\tenter Password is wrong" << endl;
                customer_loginold();
            }
        }
    }
}
        void customer_login()
        {
              system("PAUSE");
    
    system ("CLS");
    system("Color 5F");

    // opening file to put the data of users
    fstream mylogin("Userlogin.txt", ios::app);
      cout<<"\n\n\n\n\t\t\t\t";
 
      cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
      cout<<"\t\t\t\t____________________________________________________________________________________"<<endl<<endl;
      cout<<"\t\t\t\t                             WELCOME TO SALES MANAGEMENT SYSTEM \n\n";
      cout<<"\t\t\t\t____________________________________________________________________________________"<<endl<<endl;
      cout<<"\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl<<endl;
    cout << "\t\t\t\tEnter the mobile Number" << endl<<"\t\t\t\t";
    cin >> moible;

    while (moible.length() != 10)
    {

        cout << "\t\t\t\tRe-enter the mobile Number Enter mobile Number is wrong" << endl<<"\t\t\t\t";
        cin >> moible;
    };

    cout << "\t\t\t\tEnter the User id\t\t\t\t" << endl<<"\t\t\t\t";
    cin >> USERID;

    // cheaking if the user id is all ready present or not
    while (1)
    {
        int same = useridknown(USERID);

        if (same == 1)
        {

            cout << "\t\t\t\tEnter User id already present choose diffrent user id" << endl<<"\t\t\t\t";
            cin >> USERID;
        }

        else
        {
            break;
        }
    }

    cout << "\t\t\t\tEnter the Password\t\t\t\t" << endl<<"\t\t\t\t";
    cin >> Password;

    mylogin << USERID << endl;
    mylogin << Password << endl;
    
    product d;
    d.disp();
}

int useridknown(string USERID)
{

    string id;
    string password;
    // opening file
    fstream mylogin("Userlogin.txt");

    while (!mylogin.eof())
    {

        getline(mylogin, id);
        getline(mylogin, password);

        if (USERID == id)
        {

            mylogin.close();
            return 1;
        }
    }

    mylogin.close();
    return 0;
}
        
};
    void display()
{
    
    system ("CLS");
    system("Color 1C");
        cout<<"\n\n\n\n";

        cout<<"\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
        cout<<"\t\t\t\t___________________________________________________________________________________________"<<endl<<endl;
        cout<<"\t\t\t\t                                     WELCOME!!!"<<endl<<endl<<endl;
        cout<<"\t\t\t\t                                                                Project by:-  AARYA SINGH"<<endl;
        cout<<"\t\t\t\t                                                                              AAROHI GOEL"<<endl;
        cout<<"\t\t\t\t                                                                             ADITYA KHANNA"<<endl;
        cout<<"\t\t\t\t                                                                             SHREYASH TRIPATHI"<<endl<<endl;
        cout<<"\t\t\t\t___________________________________________________________________________________________"<<endl<<endl;
        cout<<"\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
        ofstream out1;
  out1.open("test.txt", std::ios_base::app);
  out1<<"PRODUCT NAME     "<<"QUANTITY"<<"     MRP"<<"   "<<"TOTAL PRICE"<<endl<<endl;
  out1.close();
}


void login()
{
      system("PAUSE");
    system("Color 1C");
    cout<<"\t\t\t\t\t\t\t---------------------------\n\n";
    cout<<"\t\t\t\t\t\t\t  CHOOSE FROM THE OPTIONS"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t---------------------------\n\n";           
    cout << "\n\n\t\t\t\t\t\t\t       1->Customer\n\t\t\t\t\t\t\t       2->Admin\n\t\t\t\t\t\t\t       3->Exit" << endl;
        int logintype;
        cin >> logintype;
        if (logintype == 1)
        {
          system("cls");
          cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------------\n\n";
          cout<<"\t\t\t\t\t\t\tCHOOSE FROM THE OPTIONS"<<endl<<endl;
          cout<<"\t\t\t\t\t\t\t---------------------------\n\n";   
            cout<<endl<<endl<<"\t\t\t\t\t\t\t          1 -> New User "<<endl<<"\n\t\t\t\t\t\t\t          2 -> Login"<<endl<<"\n\t\t\t\t\t\t\t          3 -> exit"<<"\n\t\t\t\t";
            char x;
            cin>>x;
            cout<<endl;
           

            while(1)
            { customer a;
            if(x=='1')
            {
                a.customer_login();
            }
            else if(x=='2')
            {
                a.customer_loginold();
            }
            else if(x=='3')
            {
             login();
            }
            else{             //EXCEPTIONAL HANDLING
                
                try{
                     if(x>3)
                     throw 1;
                }

                catch(int n)
                { 
                    cout<<"\t\t\t\tINVALID INPUT"<<endl;
                    cout<<"\t\t\t\tKINDLY RE-ENTER YOUR CHOICES!"<<endl<<endl;
                    login();

                }
            }
            }
           
        }

         if (logintype == 2) 
        {
            admin a;
        }
        if (logintype == 3)
        {
            final2();
        }

        else{
        cout<<endl<<endl<<endl<<"\t\t\t\tINVALID INPUT!!"<<endl;
        login();
        }
    }



int main()
{
  initialising(pro); 
   display();
   login();
   return 0;
}