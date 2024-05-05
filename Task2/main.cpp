#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    float sum=0;
    while(true)
    {
        cout<<"Welcome to our Pizza restaurant!!! "<<endl;
        cout<<"Please select one of items"<<endl;
        cout<<"1- SUPER SUPREME - S=50 /M=75.5/ L=100"<<endl;
        cout<<"2- CHICKEN SUPREME - S=45/ M=73.88/ L=97.99"<<endl;
        cout<<"3- MARGHERITA - S=35/ M=70/ L=95"<<endl;
        cout<<"4- CHEESE LOVERS - S=60.96/ M=87.75/ L=113.16"<<endl;
        cout<<"5- SEA FOOD LOVERS - S= 64.47/ M=94.30/ L=123.25"<<endl;
        int x,q;
        string d,t;
        string top;
        char Size;
        cin>>x;
        if(x==1)
        {
            const float S1= 50, M1=75.5,L1=100;
            cout<<"You select SUPER SUPREME "<<endl;
            cout<<"Enter your quantity"<<endl;
            cin>>q;
            cout<<"Enter Size"<<endl;
            cin>>Size;
            if (Size=='S'||Size=='s')
            {
                sum =sum+50*q;
            }
            else if (Size=='M'||Size=='m')
            {
                sum=sum+75.5*q;
            }
            else if (Size=='L'||Size=='l')
            {
                sum=sum+100*q;
            }
            cout<<"Do you want extra topping ?"<<endl;
            cin >>d;
            if (d=="yes"||d=="Yes")
            {
                cout<<"Please select one ( mushroom = 10, onion = 5 , sausage = 10)"<<endl;
                cin>>top;
                if (top=="mushroom")
                {
                    sum+=10;
                }
                else if (top=="onion")
                {
                    sum+=5;
                }
                else if (top=="sausage")
                {
                    sum+=10;
                }
            }
        }
        else if(x==2)
        {
            const float S=45, M=73.88,L=97.99 ;
            cout<<"You select CHICKEN SUPREME"<<endl;
            cout<<"Enter your quantity"<<endl;
            cin>>q;
            cout<<"Enter Size"<<endl;
            cin>>Size;
            if (Size=='S'||Size=='s')
            {
                sum = sum+45*q;
            }
            else if (Size=='M'||Size=='m')
            {
                sum=sum+73.88*q;
            }
            else if (Size=='L'||Size=='l')
            {
                sum=sum+97.99*q;
            }
            cout<<"Do you want extra topping ?"<<endl;
            cin >>d;
            if (d=="yes"||d=="Yes")
            {
                cout<<"Please select one ( mushroom = 10, onion = 5 , sausage = 10)"<<endl;
                cin>>top;
                if (top=="mushroom")
                {
                    sum+=10;
                }
                else if (top=="onion")
                {
                    sum+=5;
                }
                else if (top=="sausage")
                {
                    sum+=10;
                }
            }
        }
        else if(x==3)
        {
            const float S=35, M=70,L=97;
            cout<<"You select MARGHERITA "<<endl;
            cout<<"Enter your quantity"<<endl;
            cin>>q;
            cout<<"Enter Size"<<endl;
            cin>>Size;
            if (Size=='S'||Size=='s')
            {
                sum = sum+35*q;
            }
            else if (Size=='M'||Size=='m')
            {
                sum=sum+70*q;
            }
            else if (Size=='L'||Size=='l')
            {
                sum=sum+95*q;
            }
            cout<<"Do you want extra topping ?"<<endl;
            cin >>d;
            if (d=="yes"||d=="Yes")
            {
                cout<<"Please select one ( mushroom = 10, onion = 5 , sausage = 10)"<<endl;
                cin>>top;
                if (top=="mushroom")
                {
                    sum+=10;
                }
                else if (top=="onion")
                {
                    sum+=5;
                }
                else if (top=="sausage")
                {
                    sum+=10;
                }
            }
        }

        else if (x==4)
        {
            const float S=60.96,M=87.75,L=113.16;
            cout<<"You select CHEESE LOVERS"<<endl;
            cout<<"Enter your quantity"<<endl;
            cin>>q;
            cout<<"Enter Size"<<endl;
            cin>>Size;
            if (Size=='S'||Size=='s')
            {
                sum = sum+60.96*q;
            }
            else if (Size=='M'||Size=='m')
            {
                sum=sum+87.75*q;
            }
            else if (Size=='L'||Size=='l')
            {
                sum=sum+113.16*q;
            }
            cout<<"Do you want extra topping ?"<<endl;
            cin >>d;
            if (d=="yes"||d=="Yes")
            {
                cout<<"Please select one ( mushroom = 10, onion = 5 , sausage = 10)"<<endl;
                cin>>top;
                if (top=="mushroom")
                {
                    sum+=10;
                }
                else if (top=="onion")
                {
                    sum+=5;
                }
                else if (top=="sausage")
                {
                    sum+=10;
                }
            }
        }


        else if (x==5)
        {
            const float S=64.47, M=94.30,L=123.25;
            cout<<"You select SEA FOOD LOVERS "<<endl;
            cout<<"Enter your quantity"<<endl;
            cin>>q;
            cout<<"Enter Size"<<endl;
            cin>>Size;
            if (Size=='S'||Size=='s')
            {
                sum = sum+64.47*q;
            }
            else if (Size=='M'||Size=='m')
            {
                sum=sum+94.30*q;
            }
            else if (Size=='L'||Size=='l')
            {
                sum=sum+123.25*q;
            }
            cout<<"Do you want extra topping ?"<<endl;
            cin >>d;
            if (d=="yes"||d=="Yes")
            {
                cout<<"Please select one ( mushroom = 10, onion = 5 , sausage = 10)"<<endl;
                cin>>top;
                if (top=="mushroom")
                {
                    sum+=10;
                }
                else if (top=="onion")
                {
                    sum+=5;
                }
                else if (top=="sausage")
                {
                    sum+=10;
                }
            }
        }
        cout<<"Do you want another item?"<<endl;
        cin>>t;
        if(t=="yes"||t=="Yes")
        {
            continue;
        }
        else
        {
            cout<<"Thank you for using our application your bill ="<<sum<<endl;
            break;
        }
    }
    return 0;
}
