/***********************************************************************
 Current reading(units)                           Charges(Rs.)                          Tax 
>1 & <100                                             .80 paise per unit                     2%
>100 & <300                                         Rs. 1 per unit                           5%
>300 & < 500                                        Rs. 1.20 per unit                      7%
>500 & <800                                         Rs. 2 per unit                           11%
>800 & <1200                                       Rs. 2.50 per unit                      15%
>1200                                                    Rs. 3.40 per unit                      18%

Meter rent is fixed at rs. 50

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string name,add;
    long mob;
    float c_reading,o_reading,n_reading,meter;
    double charge,tax;
    cout<<"Enter Your Name-->";
    getline(cin,name);
    cout<<"Enter Your Adress-->";
    getline(cin,add);
    cout<<"Enter your contact no.-->";
    cin>>mob;
    cout<<"Enter your meter no.-->";
    cin>>meter;
    cout<<"Enter your old reading.-->";
    cin>>o_reading;
    cout<<"Enter your new reading.-->";
    cin>>n_reading;
    int unit=c_reading=n_reading-o_reading;
    if(unit>=1 && unit<100)
    {
        charge=unit*0.8;
        tax=charge*0.02;
    }
    else if(unit>=100 && unit<300)
    {
        charge=unit*1;
        tax=charge*0.05;
    }
    else if(unit>=300 && unit<500)
    {
        charge=unit*1.2;
        tax=charge*0.07;
    }
    else if(unit>=500 && unit<800)
    {
        charge=unit*2;
        tax=charge*0.11;
    }
    else if(unit>=800 && unit<1200)
    {
        charge=unit*2.5;
        tax=charge*0.15;
    }
    else if(unit>=1200)
    {
        charge=unit*3.4;
        tax=charge*0.18;
    }
    else
    {
        cout<<"You Enter wrong meter reading";
        return 0;
    }
    
    cout<<endl<<endl<<endl;
    
    cout<<"Name : "<<name<<endl;
    cout<<"Adress : "<<add<<endl;
    cout<<"Contact No. : "<<mob<<endl;
    cout<<"Meter No. : "<<meter<<endl;
    cout<<"Consume unit : "<<unit<<endl;
    cout<<"taxes : "<<tax<<endl;
    cout<<"Total amount for pay : "<<charge+tax+50;
    return 0;
}

