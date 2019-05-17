#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <string>



using namespace std;

/*
 *
 */
int Enter_date_starting_month()
{
    int month=0;
    cout<<"\x1b[32;40m Enter the date you want to start the credit : \x1b[0m"<<endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    cout<<"\x1b[32;40m Enter the Month you want to start the credit : (Exemple 8) \x1b[0m";
    cout<<" ";
    cin>>month;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    if((month>12)||(month<1))
    {
        cout<<"\x1b[31;40m The starting Month is not good try again with an other date\x1b[0m"<<endl;
        month=Enter_date_starting_month();
    }
    return month;
}

int Enter_date_starting_year()
{
    int years=0;
    cout<<"\x1b[32;40m Enter the Year you want to start the credit : (Exemple 1964)\x1b[0m";
    cout<<" ";
    cin>>years;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    if(years<0)
    {
        cout<<"\x1b[31;40m The starting Year is not good try again with an other date \x1b[0m"<<endl;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        years=Enter_date_starting_year();
    }
    return years;
}

int Enter_date_starting_month_of_today()
{
    int month=0;
    cout<<"\x1b[32;40m You will enter the date of today : \x1b[0m"<<endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    cout<<"\x1b[32;40m Enter the month of Today : (Exemple 8) \x1b[0m";
    cout<<" ";
    cin>>month;

    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    if((month>12)||(month<1))
    {
        cout<<"\x1b[31;40m The Month of today is not good try again with an other date      \x1b[0m"<<endl;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        month=Enter_date_starting_month_of_today();
    }
    return month;
}

int Enter_date_starting_year_of_today()
{
    int years=0;
    cout<<"\x1b[32;40m Enter the Year of Today : (Exemple 1964) \x1b[0m";
    cout<<" ";
    cin>>years;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    if(years<0)
    {
        cout<<"\x1b[31;40m The Year of today is not good try again with an other date \x1b[0m"<<endl;
        years=Enter_date_starting_year_of_today();
    }
    return years;
}

string enterName()
{
    string Name;
    cout<<"\x1b[32;40m Enter your Name : \x1b[0m";
    cout<<" ";
    cin>>Name;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;

    return Name;
}
string enterFirstName()
{
    string FirstName;
    cout<<"\x1b[32;40m Enter your First Name : \x1b[0m";
    cout<<" ";
    cin>>FirstName;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    return FirstName;
}

double Enter_interestrate()
{
    double InterestRate=0;
    double InterestRateinpourcentage=0;
    cout<<"\x1b[32;40m Enter the Interest rate per year you want (in %) : \x1b[0m";
    cout<<" ";
    cin>>InterestRateinpourcentage;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    InterestRate=InterestRateinpourcentage/100;
    if((InterestRate>0.1)||(InterestRate<0))
    {
        cout << "\x1b[31;40m The Interest Rate is not legal, try Again With another Interest Rate \x1b[0m" << endl;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        InterestRate = Enter_interestrate();
    }
    return InterestRate;
}

int Enter_numberofyears()
{
    int NumberOfYears=0;

    cout<<"\x1b[32;40m Enter the Number of years you want to pay your credit : \x1b[0m";
    cout<<" ";
    cin>>NumberOfYears;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    if((NumberOfYears>50)||(NumberOfYears<0))
    {
        cout<<"\x1b[31;40m The Number of Years is not legal, try Again With another Number Of Years \x1b[0m"<<endl;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        NumberOfYears=Enter_numberofyears();
    }
    return NumberOfYears;
}

double Enter_principal()
{
    double Principal=0;

    cout<<"\x1b[32;40m Enter the principal you want : \x1b[0m";
    cout<<" ";
    cin>>Principal;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    return Principal;
}

double Enter_openingbalance()
{
    double OpeningBalance=0;

    cout<<"\x1b[32;40m Enter the Opening Balance you want : \x1b[0m";
    cout<<" ";
    cin>>OpeningBalance;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    return OpeningBalance;
}

double Enter_instalment()
{
    double Instalment=0;
    cout<<"\x1b[32;40m Enter the instalment you want : \x1b[0m";
    cout<<" ";
    cin>>Instalment;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    return Instalment;

}

double Variable_Interest_Rate_mean()
{
    double IR_mean=0;
    cout<<"\x1b[32;40m Enter the Man for the Interest Rate you want : \x1b[0m";
    cout<<" ";
    cin>>IR_mean;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    if(IR_mean>5)
    {
        cout<<"\x1b[31;40m The Mean of the Interest Rate is not legal, try again \x1b[0m"<<endl;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        IR_mean=Variable_Interest_Rate_mean();
    }
    return IR_mean;

}

double Variable_Interest_Rate_StDev()
{
    double IR_stDev=0;
    cout<<"\x1b[32;40m Enter the ST_DEV you want : \x1b[0m";
    cout<<" ";
    cin>>IR_stDev;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    if(IR_stDev>5)
    {
        cout<<"\x1b[31;40m The ST_DEV of the Interest Rate is not legal, try again \x1b[0m"<<endl;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        IR_stDev=Variable_Interest_Rate_StDev();
    }
    return IR_stDev;

}

double box_muller(double margin_constant, double Variance) {
    double Unif_Value1 , Unif_Value2, Normal_value, Benchmark_rate;

        do {

            srand((unsigned)time(NULL));
            Unif_Value1 = 2.0 * ((double)rand() / (RAND_MAX)) - 1.0;
            Unif_Value2 = 2.0 * ((double)rand() / (RAND_MAX)) - 1.0;

            Normal_value = Unif_Value1 * Unif_Value1 + Unif_Value2 * Unif_Value2;
        } while (Normal_value >= 1.0);
        Normal_value = sqrt((-2.0 * log(Normal_value)) / Normal_value);
        Benchmark_rate = Unif_Value2 * Normal_value;
        Benchmark_rate=margin_constant+Benchmark_rate*Variance;



    return Benchmark_rate;
}


string frequency()
{
    string Frequence;
    cout<<"\x1b[32;40m Enter the Frequency you want pay your credit? (yearly/semi-annually/quarterly/monthly) \x1b[0m";
    cout<<" ";
    cin>>Frequence;
    if((Frequence=="yearly")||(Frequence=="Yearly")||(Frequence=="YEARLY"))
    {
        Frequence="yearly";


    }
    if((Frequence=="semi-annually")||(Frequence=="Semi-annually")||(Frequence=="Semi-Annually")||(Frequence=="semi-Annually")||(Frequence=="semi annually")||(Frequence=="Semi Annually")||(Frequence=="Semi annually")||(Frequence=="semi Annually")||(Frequence=="SEMI ANNUALLY")||(Frequence=="SEMI-ANNUALLY"))
    {
        Frequence="semi-annually";


    }
    if((Frequence=="quarterly")||(Frequence=="Quarterly")||(Frequence=="QUARTERLY"))
    {
        Frequence="quarterly";


    }
    if((Frequence=="monthly")||(Frequence=="Monthly")||(Frequence=="MONTHLY"))
    {
        Frequence="monthly";


    }
    if((Frequence!="monthly")&&(Frequence!="Monthly")&&(Frequence!="MONTHLY")&&(Frequence!="quarterly")&&(Frequence!="Quarterly")&&(Frequence!="QUARTERLY")&&(Frequence!="yearly")&&(Frequence!="Yearly")&&(Frequence!="YEARLY")&&(Frequence!="semi-annually")&&(Frequence!="Semi-annually")&&(Frequence!="Semi-Annually")&&(Frequence!="semi-Annually")&&(Frequence!="semi annually")&&(Frequence!="Semi Annually")&&(Frequence!="Semi annually")&&(Frequence!="semi Annually")&&(Frequence!="SEMI ANNUALLY")&&(Frequence!="SEMI-ANNUALLY"))
    {
        cout<<"\x1b[31;40m We can't read what you write you need try again \x1b[0m"<<endl;
        frequency();
    }
    return Frequence;

}



int final_number_i(int NumberOfYears,string Frequence)
{
    if(Frequence=="semi-annually")
    {

        NumberOfYears=NumberOfYears*2;

    }
    else if(Frequence=="quarterly")
    {
        NumberOfYears=NumberOfYears*4;

    }
    else if(Frequence=="monthly")
    {
        NumberOfYears=NumberOfYears*12;

    }
    return NumberOfYears;

}

double frequency_Interest_rate(double InterestRate,string Frequence)
{


    if(Frequence=="semi-annually")
    {

        InterestRate=InterestRate/2;

    }
    else if(Frequence=="quarterly")
    {
        InterestRate=InterestRate/4;

    }
    else if(Frequence=="monthly")
    {
        InterestRate=InterestRate/12;

    }
    else
    {
        InterestRate=InterestRate;
    }
    return InterestRate;

}

void Fixed_OpeningBalance_InterestRate_Principal(double OpeningBalance,double InterestRate,double Principal,int Month,int Year,string Frequence)
{


    ofstream outData;
    outData.open("Final Project.csv",ios::app);
    outData<<endl;
    outData<<endl;
    /* First I create all variable I need on the Programm*/

    int NumberOfYears=0;
    double Interest=0;
    double Instalment=0;
    double ClosingBalance=0;
    double SumPrincipal=0;

    /* I search How many time the person will need to pay*/

    NumberOfYears=OpeningBalance/Principal;
    NumberOfYears=final_number_i(NumberOfYears,Frequence);
    InterestRate=frequency_Interest_rate(InterestRate,Frequence);
    /* I Create the array*/

    outData<<";"<<"#"<<";"<<"Date"<<";"<<" Opening Balance "<<";"<<"Principal "<<";"<<" Interest Rate "<<";"<<" Interest "<<";"<<" Instalment "<<";"<<" Closing Balance "<<endl;
    outData<<";"<<"i"<<";"<<"D"<<";"<<"PVi-1"<<";"<<"Pi"<<";"<<"Ri"<<";"<<"INTi"<<";"<<"PMTi"<<";"<<"PVi"<<endl;


    /* I calculate year by year How many the person will need to pay*/

    for(int i=1;i<NumberOfYears+1;i++)
    {
        Interest=OpeningBalance*InterestRate;
        Instalment=Principal+Interest;
        ClosingBalance=OpeningBalance-Principal;
        SumPrincipal=Principal+SumPrincipal;

        /* I Display the array*/

        outData<<";"<<i<<";"<<Month<<"/"<<Year<<";"<<OpeningBalance<<";"<<Principal<<";"<<InterestRate<<";"<<Interest<<";"<<Instalment<<";"<<ClosingBalance<<endl;
        OpeningBalance=ClosingBalance;
        if(Frequence=="semi-annually")
        {
            if(Month<=6)
            {
                Month=Month+6;
            }
            else
            {
                Month=Month+6-12;
                Year=Year+1;
            }



        }
        else if(Frequence=="quarterly")
        {
            if(Month<=8)
            {
                Month=Month+3;
            }
            else
            {
                Month=Month+3-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="monthly")
        {
            if(Month<12)
            {
                Month=Month+1;
            }
            else
            {
                Month=Month+1-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="yearly")
        {
            Year=Year+1;
        }
    }


    outData<<";;;;"<<SumPrincipal<<endl;
    outData<<endl;
}

/* This program is for a Fixed Opening Balance, a Fixed Interest Rate and a Fixed Number Of Years*/
void Fixed_OpeningBalance_InterestRate_NumberOfYears(double OpeningBalance,double InterestRate,int NumberOfYears,int Month,int Year,string Frequence)
{
    ofstream outData;
    outData.open("Final Project.csv",ios::app);
    outData<<endl;
    outData<<endl;
    /* First I create all variable I need on the Programm*/

    double Instalment=0;
    double Interest=0;
    double Principal=0;
    double ClosingBalance=0;
    double SumPrincipal=0;

    /* I search the Principal*/

    Principal=OpeningBalance/NumberOfYears;

    /* I Create the array*/

    outData<<";"<<"#"<<";"<<"Date"<<";"<<" Opening Balance "<<";"<<"Principal "<<";"<<" Interest Rate "<<";"<<" Interest "<<";"<<" Instalment "<<";"<<" Closing Balance "<<endl;
    outData<<";"<<"i"<<";"<<"D"<<";"<<"PVi-1"<<";"<<"Pi"<<";"<<"Ri"<<";"<<"INTi"<<";"<<"PMTi"<<";"<<"PVi"<<endl;

    /* I calculate year by year How many the person will need to pay*/

    for(int i=1;i<NumberOfYears+1;i++)
    {

        Interest=OpeningBalance*InterestRate;
        Instalment=Principal+Interest;
        ClosingBalance=OpeningBalance-Principal;
        SumPrincipal=Principal+SumPrincipal;

        /* I Display the array*/

        outData<<";"<<i<<";"<<Month<<"/"<<Year<<";"<<OpeningBalance<<";"<<Principal<<";"<<InterestRate<<";"<<Interest<<";"<<Instalment<<";"<<ClosingBalance<<endl;
        OpeningBalance=ClosingBalance;
        if(Frequence=="semi-annually")
        {
            if(Month<=6)
            {
                Month=Month+6;
            }
            else
            {
                Month=Month+6-12;
                Year=Year+1;
            }



        }
        else if(Frequence=="quarterly")
        {
            if(Month<=8)
            {
                Month=Month+3;
            }
            else
            {
                Month=Month+3-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="monthly")
        {
            if(Month<12)
            {
                Month=Month+1;
            }
            else
            {
                Month=Month+1-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="yearly")
        {
            Year=Year+1;
        }
    }
    outData<<";;;;"<<SumPrincipal<<endl;
    outData<<endl;
}

/* This program is for a Fixed Principal, a Fixed Interest Rate and a Fixed Number Of Years*/
void Fixed_Principal_InterestRate_NumberOfYears(double Principal, double InterestRate, int NumberOfYears,int Month,int Year,string Frequence)
{
    ofstream outData;
    outData.open("Final Project.csv",ios::app);
    outData<<endl;
    outData<<endl;
    /* First I create all variable I need on the Programm*/

    double Instalment=0;
    double Interest=0;
    double OpeningBalance=0;
    double ClosingBalance=0;
    double SumPrincipal=0;

    /* I search the Principal*/

    OpeningBalance=Principal*NumberOfYears;

    /* I Create the array*/

    outData<<";"<<"#"<<";"<<"Date"<<" Opening Balance "<<";"<<"Principal "<<";"<<" Interest Rate "<<";"<<" Interest "<<";"<<" Instalment "<<";"<<" Closing Balance "<<endl;
    outData<<";"<<"i"<<";"<<"D"<<";"<<"PVi-1"<<";"<<"Pi"<<";"<<"Ri"<<";"<<"INTi"<<";"<<"PMTi"<<";"<<"PVi"<<endl;

    /* I calculate year by year How many the person will need to pay*/

    for(int i=1;i<NumberOfYears+1;i++)
    {
        Interest=OpeningBalance*InterestRate;
        Instalment=Principal+Interest;
        ClosingBalance=OpeningBalance-Principal;
        SumPrincipal=Principal+SumPrincipal;

        /* I Display the array*/

        outData<<";"<<i<<";"<<Month<<"/"<<Year<<";"<<OpeningBalance<<";"<<Principal<<";"<<InterestRate<<";"<<Interest<<";"<<Instalment<<";"<<ClosingBalance<<endl;
        OpeningBalance=ClosingBalance;
        if(Frequence=="semi-annually")
        {
            if(Month<=6)
            {
                Month=Month+6;
            }
            else
            {
                Month=Month+6-12;
                Year=Year+1;
            }



        }
        else if(Frequence=="quarterly")
        {
            if(Month<=8)
            {
                Month=Month+3;
            }
            else
            {
                Month=Month+3-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="monthly")
        {
            if(Month<12)
            {
                Month=Month+1;
            }
            else
            {
                Month=Month+1-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="yearly")
        {
            Year=Year+1;
        }
    }
    outData<<";;;;"<<SumPrincipal<<endl;
    outData<<endl;

}

/* The different program are whith an inconstant Interest and an inconstant Prncipal */

/* This program is for a Fixed Opening Balance, a Fixed Interest Rate and a Fixed Instalment*/
void Fixed_OpeningBalance_InterestRate_Instalment(double OpeningBalance,double InterestRate,double Instalment,int Month,int Year,string Frequence)
{
    ofstream outData;
    outData.open("Final Project.csv",ios::app);
    outData<<endl;
    outData<<endl;
    /* First I create all variable I need on the Programm*/

    int NumberOfYears=0;
    double Principal=0;
    double Interest=0;
    double ClosingBalance=0;
    double i=1;
    double SumPrincipal=0;

    outData<<";"<<"#"<<";"<<"Date"<<" Opening Balance "<<";"<<"Principal "<<";"<<" Interest Rate "<<";"<<" Interest "<<";"<<" Instalment "<<";"<<" Closing Balance "<<endl;
    outData<<";"<<"i"<<";"<<"D"<<";"<<"PVi-1"<<";"<<"Pi"<<";"<<"Ri"<<";"<<"INTi"<<";"<<"PMTi"<<";"<<"PVi"<<endl;

    /* I calculate year by year How many the person will need to pay*/

    for(OpeningBalance=OpeningBalance;OpeningBalance>Instalment;OpeningBalance=OpeningBalance-Principal)
    {
        Interest=OpeningBalance*InterestRate;
        Principal=Instalment-Interest;
        ClosingBalance=OpeningBalance-Principal;
        SumPrincipal=Principal+SumPrincipal;
        outData<<";"<<i<<";"<<Month<<"/"<<Year<<";"<<OpeningBalance<<";"<<Principal<<";"<<InterestRate<<";"<<Interest<<";"<<Instalment<<";"<<ClosingBalance<<endl;
        i=i+1;
        if(Frequence=="semi-annually")
        {
            if(Month<=6)
            {
                Month=Month+6;
            }
            else
            {
                Month=Month+6-12;
                Year=Year+1;
            }



        }
        else if(Frequence=="quarterly")
        {
            if(Month<=8)
            {
                Month=Month+3;
            }
            else
            {
                Month=Month+3-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="monthly")
        {
            if(Month<12)
            {
                Month=Month+1;
            }
            else
            {
                Month=Month+1-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="yearly")
        {
            Year=Year+1;
        }


    }
    NumberOfYears=i;
    outData<<";;;;"<<SumPrincipal<<endl;
    outData<<endl;



}

/* This program is for a Fixed Number Of Years, a Fixed Interest Rate and a Fixed Instalment*/










void Fixed_NumberOfYears_InterestRate_Instalment(double NumberOfYears,double InterestRate,double Instalment,int Month,int Year,string Frequence)
{
    ofstream outData;
    outData.open("Final Project.csv",ios::app);
    outData<<endl;
    outData<<endl;
    /* First I create all variable I need on the Programm*/


    double Principal=0;
    double Interest=0;
    double ClosingBalance=0;
    double SumPrincipal=0;

    outData<<";"<<"#"<<";"<<"Date"<<" Opening Balance "<<";"<<"Principal "<<";"<<" Interest Rate "<<";"<<" Interest "<<";"<<" Instalment "<<";"<<" Closing Balance "<<endl;
    outData<<";"<<"i"<<";"<<"D"<<";"<<"PVi-1"<<";"<<"Pi"<<";"<<"Ri"<<";"<<"INTi"<<";"<<"PMTi"<<";"<<"PVi"<<endl;

    /* I calculate the Opening Balance */

    double OpeningBalance=Instalment/(InterestRate*(1+(1/(pow(1+InterestRate,NumberOfYears)-1))));


    /* I calculate year by year How many the person will need to pay*/

    for(int i=1;i<NumberOfYears+1;i++)
    {
        Interest=OpeningBalance*InterestRate;
        Principal=Instalment-Interest;
        ClosingBalance=OpeningBalance-Principal;
        SumPrincipal=Principal+SumPrincipal;
        outData<<";"<<i<<";"<<Month<<"/"<<Year<<";"<<OpeningBalance<<";"<<Principal<<";"<<InterestRate<<";"<<Interest<<";"<<Instalment<<";"<<ClosingBalance<<endl;
        OpeningBalance=ClosingBalance;
        if(Frequence=="semi-annually")
        {
            if(Month<=6)
            {
                Month=Month+6;
            }
            else
            {
                Month=Month+6-12;
                Year=Year+1;
            }



        }
        else if(Frequence=="quarterly")
        {
            if(Month<=8)
            {
                Month=Month+3;
            }
            else
            {
                Month=Month+3-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="monthly")
        {
            if(Month<12)
            {
                Month=Month+1;
            }
            else
            {
                Month=Month+1-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="yearly")
        {
            Year=Year+1;
        }
    }
    outData<<";;;;"<<SumPrincipal<<endl;
    outData<<endl;

}

void Fixed_Instalment_NumberOfYears_OpeningBalance(double NumberOfYears,double OpeningBalance, double Instalment,int Month,int Year,string Frequence)
{
    ofstream outData;
    outData.open("Final Project.csv",ios::app);
    outData<<endl;
    outData<<endl;
    /* First I create all variable I need on the Programm*/

    double Interest=0;
    double Principal=0;
    double ClosingBalance=0;
    double SumPrincipal=0;
    double ST_DEV=Variable_Interest_Rate_StDev();
    double MEAN=Variable_Interest_Rate_mean();

    /* I search the Principal*/

    Principal=OpeningBalance/NumberOfYears;

    /* I Create the array*/

    outData<<";"<<"#"<<";"<<"Date"<<" Opening Balance "<<";"<<"Principal "<<";"<<"Floating Rate"<<";"<<"Periodic Interest Rate"<<";"<<" Interest "<<";"<<" Instalment "<<";"<<" Closing Balance "<<endl;
    outData<<";"<<"i"<<";"<<"D"<<";"<<"PVi-1"<<";"<<"Pi"<<";"<<"Ri"<<";"<<"INTi"<<";"<<"Bi"<<";"<<"PMTi"<<";"<<"PVi"<<endl;

    /* I calculate year by year How many the person will need to pay*/

    for(int i=1;i<NumberOfYears+1;i++)
    {

        double FloatingRate=box_muller(MEAN,ST_DEV);
        double InterestRate=FloatingRate+MEAN;


        Interest=OpeningBalance*InterestRate;
        Instalment=Principal+Interest;
        ClosingBalance=OpeningBalance-Principal;
        SumPrincipal=Principal+SumPrincipal;

        /* I Display the array*/

        outData<<";"<<i<<";"<<Month<<"/"<<Year<<";"<<OpeningBalance<<";"<<Principal<<";"<<InterestRate<<";"<<FloatingRate<<";"<<Interest<<";"<<Instalment<<";"<<ClosingBalance<<endl;
        OpeningBalance=ClosingBalance;
        if(Frequence=="semi-annually")
        {
            if(Month<=6)
            {
                Month=Month+6;
            }
            else
            {
                Month=Month+6-12;
                Year=Year+1;
            }



        }
        else if(Frequence=="quarterly")
        {
            if(Month<=8)
            {
                Month=Month+3;
            }
            else
            {
                Month=Month+3-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="monthly")
        {
            if(Month<12)
            {
                Month=Month+1;
            }
            else
            {
                Month=Month+1-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="yearly")
        {
            Year=Year+1;
        }
    }
    outData<<";;;;"<<SumPrincipal<<endl;
    outData<<endl;

}



void Fixed_OpeningBalance_NumberOfYears_Principal(double NumberOfYears,double Principal, double OpeningBalance,int Month,int Year,string Frequence)
{
    ofstream outData;
    outData.open("Final Project.csv",ios::app);
    outData<<endl;
    outData<<endl;
    /* First I create all variable I need on the Programm*/

    double Interest=0;
    double Instalment=0;
    double ClosingBalance=0;
    double SumPrincipal=0;
    double ST_DEV=Variable_Interest_Rate_StDev();
    double MEAN=Variable_Interest_Rate_mean();





    /* I Create the array*/

    outData<<";"<<"#"<<";"<<"Date"<<" Opening Balance "<<";"<<"Principal "<<";"<<"Floating Rate"<<";"<<"Periodic Interest Rate"<<";"<<" Interest "<<";"<<" Instalment "<<";"<<" Closing Balance "<<endl;
    outData<<";"<<"i"<<";"<<"D"<<";"<<"PVi-1"<<";"<<"Pi"<<";"<<"Ri"<<";"<<"INTi"<<";"<<"Bi"<<";"<<"PMTi"<<";"<<"PVi"<<endl;

    /* I calculate year by year How many the person will need to pay*/

    for(int i=1;i<NumberOfYears+1;i++)
    {

        double FloatingRate=box_muller(MEAN,ST_DEV);
        double InterestRate=FloatingRate+MEAN;


        Interest=OpeningBalance*InterestRate;
        Instalment=Principal+Interest;
        ClosingBalance=OpeningBalance-Principal;
        SumPrincipal=Principal+SumPrincipal;

        /* I Display the array*/

        outData<<";"<<i<<";"<<Month<<"/"<<Year<<";"<<OpeningBalance<<";"<<Principal<<";"<<InterestRate<<";"<<FloatingRate<<";"<<Interest<<";"<<Instalment<<";"<<ClosingBalance<<endl;
        OpeningBalance=ClosingBalance;
        if(Frequence=="semi-annually")
        {
            if(Month<=6)
            {
                Month=Month+6;
            }
            else
            {
                Month=Month+6-12;
                Year=Year+1;
            }



        }
        else if(Frequence=="quarterly")
        {
            if(Month<=8)
            {
                Month=Month+3;
            }
            else
            {
                Month=Month+3-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="monthly")
        {
            if(Month<12)
            {
                Month=Month+1;
            }
            else
            {
                Month=Month+1-12;
                Year=Year+1;
            }


        }
        else if(Frequence=="yearly")
        {
            Year=Year+1;
        }
    }
    outData<<";;;;"<<SumPrincipal<<endl;
    outData<<endl;

}








void Introduction()
{
    cout<<"\x1b[92;100m    Hello my name is JARVIS I am a program helping you to calculate your bank loan. \x1b[0m"<<endl;
    cout<< "\x1b[32;40m                     I will do my best to guide you through the process             \x1b[0m"<<endl;
    cout<<endl;
    cout<<"                  ";

}


int All_Step()
{

    /* First Step */

    string Name, FirstName, Sure;
    int monthofcredit, yearofcredit,monthoftoday, yearoftoday, NotunderstandSure=0;

    cout<<"\x1b[37;44m                  First step you have to answer some question  :) \x1b[0m"<<endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;

    Name=enterName();
    FirstName=enterFirstName();
    monthoftoday=Enter_date_starting_month_of_today();
    yearoftoday=Enter_date_starting_year_of_today();
    monthofcredit=Enter_date_starting_month();
    yearofcredit=Enter_date_starting_year();

    if(yearoftoday>yearofcredit)
    {
        cout<<"\x1b[31;40m it's impossible to do the credit enter an other year for starting the credit \x1b[0m"<<endl;
        yearofcredit=Enter_date_starting_year();
    }
    else if((yearoftoday==yearofcredit)&&(monthoftoday>monthofcredit))
    {
        cout<<"\x1b[31;40m it's impossible to do the credit enter an other month for starting the credit \x1b[0m"<<endl;
        monthofcredit=Enter_date_starting_month();
    }

    cout<<"\x1b[32;40m The information you have entered is : \x1b[0m"<<endl;
    cout<<"\x1b[37;40m Name                         : "<<Name <<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m FirstName                    : "<<FirstName<<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m Date of Today                : "<<monthoftoday<<"/"<<yearoftoday<<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m Date You want Start The Loan : "<<monthofcredit<<"/"<<yearofcredit<<"\x1b[0m"<<endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;

    while(NotunderstandSure==0)
    {
        cout << "\x1b[32;40m Do you agree with the information you have given us  (Yes/No) : \x1b[0m"<<" ";
        cin >> Sure;
        if ((Sure == "Yes") || (Sure == "yes") || (Sure == "YES"))
        {
            NotunderstandSure = 1;

        }
        else if ((Sure == "No") || (Sure == "no") || (Sure=="NO"))
        {
            int Wichinformation=0;
            cout << "\x1b[32;40m  Let's Start Again :)  \x1b[0m"<<endl;
            cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
            cout<< "\x1b[32;40m  what information do you want to change (Enter 1, 2, 3 or 4) \x1b[0m"<<endl;
            cout<<"\x1b[37;40m 1) Name                         : \x1b[0m"<<endl;
            cout<<"\x1b[37;40m 2) FirstName                    : \x1b[0m"<<endl;
            cout<<"\x1b[37;40m 3) Date of Today                : \x1b[0m"<<endl;
            cout<<"\x1b[37;40m 4) Date You want Start The Loan : \x1b[0m"<<endl;
            cout<< "\x1b[32;40m Enter : \x1b[0m";
            cout<<" ";
            cin>>Wichinformation;
            cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;


            if(Wichinformation==1)
            {
                Name = enterName();
            }
            else if(Wichinformation==2)
            {
                FirstName=enterFirstName();
            }
            else if(Wichinformation==3)
            {
                monthoftoday=Enter_date_starting_month_of_today();
                yearoftoday=Enter_date_starting_year_of_today();

            }
            else if(Wichinformation==4)
            {
                monthofcredit=Enter_date_starting_month();
                yearofcredit=Enter_date_starting_year();
            }


        }
        else
        {

            cout << "\x1b[32;40m Can you repeat please?  \x1b[0m" << endl;

        }
    }

    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    cout<<"\x1b[32;40m The information The information you have entered are : \x1b[0m"<<endl;
    cout<<"\x1b[37;40m Name                         : "<<Name <<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m FirstName                    : "<<FirstName<<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m Date of Today                : "<<monthoftoday<<"/"<<yearoftoday<<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m Date You want Start The Loan : "<<monthofcredit<<"/"<<yearofcredit<<"\x1b[0m"<<endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;

    ofstream outData;
    outData.open("Final Project.csv",ios::app);

    outData<<endl;
    outData<<";"<<"Name"<<";"<<Name<<endl;
    outData<<";"<<"First Name"<<";"<<FirstName<<endl;
    outData<<";"<<"Today"<<";"<<monthoftoday<<"/"<<yearoftoday<<endl;
    outData<<";"<<"Start Month"<<";"<<monthofcredit<<"/"<<yearofcredit<<endl;



    /* Second Step */
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    cout<<"\x1b[37;44m                   Second Step                   \x1b[0m"<<endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    int NotunderstandSure2 =0;
    int SecondVariableDifferent=0;
    int ThirdVariableDifferent = 0;
    int FirstVariable =10;
    int SecondVariable=10;
    int ThirdVariable  = 10;
    int NewVariable;
    int Number_corresponding_to_variable[5] = {1, 2, 3, 4, 5};
    int VariableChoose[3] = {0, 0, 0};
    string Variables[5] = {"Interest Rate.", "Number Of Years", "Principal.", "Instalment.", "Opening Balance."};





    cout << "\x1b[32;40m You will have the choice between the different variable : \x1b[0m" << endl;
    cout << "       " << "\x1b[37;40m Interest Rate. \x1b[0m" << "       " << "\x1b[37;40m Number Of Years. \x1b[0m"<< endl;
    cout << "       " << "\x1b[37;40m Principal      \x1b[0m" << "       " << "\x1b[37;40m Instalment.      \x1b[0m"<< endl;
    cout << "       " << "\x1b[37;40m             Opening Balance             \x1b[0m" << endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    cout << "\x1b[32;40m You only need to choose 3 of these variables \x1b[0m" << endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;

    while ((FirstVariable > 4) || (FirstVariable < 0))
    {
        cout << "\x1b[32;40m What first variable do you choose? \x1b[0m" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "\x1b[37;40m" << Number_corresponding_to_variable[i] << ")" << Variables[i] << "\x1b[0m" << endl;
        }
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        cout << "\x1b[32;40m Enter the number corresponding to the variable (Enter 1, 2 , 3 , 4 or 5): \x1b[0m" << " ";
        cin >> FirstVariable;
        FirstVariable = FirstVariable - 1;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        if ((FirstVariable > 4) || (FirstVariable < 0))
        {
            cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
            cout << "\x1b[31;40m You can not enter this number thanks for starting again \x1b[0m" << endl;
            cout << endl;

        }
    }

    while ((SecondVariableDifferent == 0) || (SecondVariable > 4) || (SecondVariable < 0))
    {
        cout << "\x1b[32;40m What second variable do you choose? \x1b[0m" << endl;
        for (int i = 0; i < 5; i++)
        {
            if (i != FirstVariable)
            {
                cout << "\x1b[37;40m" << Number_corresponding_to_variable[i] << ")" << Variables[i] << "\x1b[0m"<< endl;
            }
        }
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        cout << "\x1b[32;40m Enter the number corresponding to the variable (Enter 1, 2 , 3 , 4 or 5): \x1b[0m" << " ";
        cin >> SecondVariable;
        SecondVariable = SecondVariable - 1;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        if ((SecondVariable == FirstVariable) || (SecondVariable > 4) || (SecondVariable < 0))
        {
            cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
            cout << "\x1b[31;40m You can not enter this number thanks for starting again \x1b[0m" << endl;
            cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        }
        else
        {
            SecondVariableDifferent = 1;
        }
    }


    while ((ThirdVariableDifferent == 0) || (ThirdVariable > 4) || (ThirdVariable < 0))
    {
        cout << "\x1b[32;40m What third variable do you choose? \x1b[0m" << endl;
        for (int i = 0; i < 5; i++)
        {
            if ((i != FirstVariable) && (i != SecondVariable))
            {
                cout << "\x1b[37;40m" << Number_corresponding_to_variable[i] << ")" << Variables[i] << "\x1b[0m"<< endl;
            }
        }
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        cout << "\x1b[32;40m Enter the number corresponding to the variable (Enter 1, 2 , 3 , 4 or 5): \x1b[0m" << " ";
        cin >> ThirdVariable;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        ThirdVariable = ThirdVariable - 1;
        if ((ThirdVariable == FirstVariable) || (ThirdVariable == SecondVariable) || (ThirdVariable > 4) || (ThirdVariable < 0))
        {
            cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
            cout << "\x1b[31;40m You can not enter this number thanks for starting again \x1b[0m" << endl;
            cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        }
        else
            {
            ThirdVariableDifferent = 1;
            }
    }

    VariableChoose[0] = FirstVariable;
    VariableChoose[1] = SecondVariable;
    VariableChoose[2] = ThirdVariable;
    string Sure2;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    cout << "\x1b[32;40m The Variable you have entered are : : \x1b[0m" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\x1b[37;40m" << Variables[VariableChoose[i]] << "\x1b[0m" << endl;
    }
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;

    while (NotunderstandSure2 == 0)
    {
        NewVariable = 6;
        cout << "\x1b[32;40m Do you agree with the information you have given us  (Yes/No) : \x1b[0m";
        cout<<" ";
        cin >> Sure2;
        if ((Sure2 == "Yes") || (Sure2 == "yes") || (Sure2 == "YES"))
        {
            NotunderstandSure2 = 1;
        }
        else if ((Sure2 == "No") || (Sure2 == "NO") || (Sure2 == "no"))
        {
            int Wichinformation2 = 6;
            cout << "\x1b[32;40m  Let's Start Again :)  \x1b[0m" << endl;
            cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;

            while ((Wichinformation2 > 2) || (Wichinformation2 < 0))
            {

                cout << "\x1b[32;40m  what information do you want to change (Enter 1, 2 or 3) \x1b[0m" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << "\x1b[37;40m" << i + 1 << ")" << Variables[VariableChoose[i]] << "\x1b[0m" << endl;
                }

                cin >> Wichinformation2;
                Wichinformation2 = Wichinformation2 - 1;
            }


            if (Wichinformation2 == 0)
            {
                while ((NewVariable > 4) || (NewVariable < -1))
                {
                    cout << "\x1b[37;40m Enter the variable by which you want to replace "
                         << Variables[VariableChoose[0]] << " :\x1b[0m" << endl;
                    for (int i = 0; i < 5; i++) {
                        if ((i != VariableChoose[0]) && (i != VariableChoose[1]) && (i != VariableChoose[2]))
                        {

                            cout << "\x1b[37;40m" << i + 1 << ")" << Variables[i] << "\x1b[0m" << endl;
                        }


                    }

                    cin >> NewVariable;
                    NewVariable = NewVariable - 1;
                    if ((NewVariable < 4) || (NewVariable > -1) || (NewVariable != VariableChoose[1]) || (NewVariable != VariableChoose[2]))
                    {
                        VariableChoose[0] = NewVariable;
                    }
                    else
                        {
                        cout << "\x1b[32;40m Can you repeat please?  \x1b[0m" << endl;
                        }

                }


            } else if (Wichinformation2 == 1) {
                while ((NewVariable > 4) || (NewVariable < -1)) {
                    cout << "\x1b[37;40m Enter the variable by which you want to replace "
                         << Variables[VariableChoose[1]] << " :\x1b[0m" << endl;
                    for (int i = 0; i < 5; i++) {
                        if ((i != VariableChoose[0]) && (i != VariableChoose[1]) && (i != VariableChoose[2])) {

                            cout << "\x1b[37;40m" << i + 1 << ")" << Variables[i] << "\x1b[0m" << endl;
                        }


                    }

                    cin >> NewVariable;
                    NewVariable = NewVariable - 1;
                    if ((NewVariable < 4) || (NewVariable > -1) || (NewVariable != VariableChoose[0]) || (NewVariable != VariableChoose[2])) {
                        VariableChoose[0] = NewVariable;
                    } else {
                        cout << "\x1b[32;40m Can you repeat please?  \x1b[0m" << endl;
                    }

                }


            } else if (Wichinformation2 == 2) {
                while ((NewVariable > 4) || (NewVariable < -1))
                {
                    cout << "\x1b[37;40m Enter the variable by which you want to replace "<< Variables[VariableChoose[2]] << " :\x1b[0m" << endl;
                    for (int i = 0; i < 5; i++)
                    {
                        if ((i != VariableChoose[0]) && (i != VariableChoose[1]) && (i != VariableChoose[2]))
                        {

                            cout << "\x1b[37;40m" << i + 1 << ")" << Variables[i] << "\x1b[0m" << endl;
                        }


                    }

                    cin >> NewVariable;
                    NewVariable = NewVariable - 1;
                    if ((NewVariable < 4) || (NewVariable > -1) || (NewVariable != VariableChoose[0]) ||(NewVariable != VariableChoose[1]))
                    {
                        VariableChoose[0] = NewVariable;
                    }
                    else
                        {
                        cout << "\x1b[32;40m Can you repeat please?  \x1b[0m" << endl;
                        }

                }

            }


        }
        else
            {

            cout << "\x1b[32;40m Can you repeat please?  \x1b[0m" << endl;

            }
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        cout << "\x1b[32;40m The Variable you have entered are :  \x1b[0m" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "\x1b[37;40m" << Variables[VariableChoose[i]] << "\x1b[0m" << endl;
        }
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    }
    cout<<"\x1b[37;44m                   Third Step                    \x1b[0m"<<endl;

    double Value_of_Variable[3]={0,0,0};
    for(int i=0;i<3;i++)
    {
        if(VariableChoose[i]==0)
        {
            Value_of_Variable[i]=Enter_interestrate();
        }
        if(VariableChoose[i]==1)
        {
            Value_of_Variable[i]=Enter_numberofyears();
        }
        if(VariableChoose[i]==2)
        {
            Value_of_Variable[i]=Enter_principal();
        }
        if(VariableChoose[i]==3)
        {
            Value_of_Variable[i]=Enter_instalment();
        }
        if(VariableChoose[i]==4)
        {
            Value_of_Variable[i]=Enter_openingbalance();
        }

    }

    cout << "\x1b[32;40m The values of your variables are therefore \x1b[0m" << endl;
    for(int i=0;i<3;i++)
    {
        cout << "\x1b[37;40m" << Variables[VariableChoose[i]]<<" : "<<Value_of_Variable[i]<<"\x1b[0m" << endl;

    }
    int NotunderstandSure3=0;
    string Sure3;
    while(NotunderstandSure3==0)
    {
        cout << "\x1b[32;40m Do you agree with the information you have given us  (Yes/No) : \x1b[0m"<<" ";
        cin >> Sure3;
        if ((Sure3 == "Yes") || (Sure3 == "yes") || (Sure2 == "YES"))
        {
            NotunderstandSure3 = 1;

        }
        else if ((Sure3 == "No") || (Sure3 == "no") || (Sure3 =="NO")) {
            int Wichinformation3 = 6;
            cout << "\x1b[32;40m  Let's Start Again :)  \x1b[0m" << endl;
            cout << endl;

            while ((Wichinformation3 > 2) || (Wichinformation3 < 0)) {

                cout << "\x1b[32;40m  what information do you want to change (Enter 1, 2 or 3) \x1b[0m" << endl;
                for (int i = 0; i < 3; i++) {
                    cout << "\x1b[37;40m" << i + 1 << ")" << Variables[VariableChoose[i]] << "\x1b[0m" << endl;
                }

                cin >> Wichinformation3;
                Wichinformation3 = Wichinformation3 - 1;
            }
            if((Wichinformation3<3)||(Wichinformation3>0)) {
                for (int j = 0; j < 3; j++) {
                    if (Wichinformation3 == VariableChoose[j]) {
                        if (VariableChoose[j] == 0) {
                            Value_of_Variable[j] = Enter_interestrate();
                        }
                        if (VariableChoose[j] == 1) {
                            Value_of_Variable[j] = Enter_numberofyears();
                        }
                        if (VariableChoose[j] == 2) {
                            Value_of_Variable[j] = Enter_principal();
                        }
                        if (VariableChoose[j] == 3) {
                            Value_of_Variable[j] = Enter_instalment();
                        }
                        if (VariableChoose[j] == 4) {
                            Value_of_Variable[j] = Enter_openingbalance();
                        }
                    }
                }
            }
            else
                    {

                        cout << "\x1b[32;40m Can you repeat please?  \x1b[0m" << endl;

                    }

                }

        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        cout << "\x1b[32;40m The values of your variables are therefore \x1b[0m" << endl;
        for(int i=0;i<3;i++)
        {
            cout << "\x1b[37;40m" << Variables[VariableChoose[i]]<<" : "<<Value_of_Variable[i]<<"\x1b[0m" << endl;

        }
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;



            }
    cout<<"\x1b[37;44m                   fourth step                   \x1b[0m"<<endl;

    double InterestRate=0;
    int NumberOfYears=0;
    double Principal =0;
    double OpeningBalance=0;
    double Instalment=0;
    for(int i=0;i<3;i++) {
        if (VariableChoose[i] == 0) {
            InterestRate = Value_of_Variable[i];
        }
        if (VariableChoose[i] == 1) {
            NumberOfYears =(int) Value_of_Variable[i];
        }
        if (VariableChoose[i] == 2) {
            Principal = Value_of_Variable[i];
        }
        if (VariableChoose[i] == 3) {
            Instalment = Value_of_Variable[i];
        }
        if (VariableChoose[i] == 4) {
            OpeningBalance = Value_of_Variable[i];
        }
    }



    double NumberOfPeriod=0;
    string Frequence=frequency();
    NumberOfPeriod=final_number_i(NumberOfYears,Frequence);
    InterestRate=frequency_Interest_rate(InterestRate,Frequence);

    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    cout<<"\x1b[32;40m The information The information you have entered are : \x1b[0m"<<endl;
    cout<<"\x1b[37;40m Frequence                    : "<<Frequence <<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m Number of Period             : "<<NumberOfPeriod<<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m Interest Rate by Period      : "<<InterestRate<<"\x1b[0m"<<endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;

    int NotunderstandSure4=0;
    string Sure4;
    while(NotunderstandSure4==0)
    {
        cout << "\x1b[32;40m Do you agree with the information you have given us  (Yes/No) : \x1b[0m"<<" ";
        cin >> Sure4;
        if ((Sure4 == "Yes") || (Sure4 == "yes") || (Sure4 == "YES"))
        {
            NotunderstandSure4 = 1;

        }
        else if ((Sure4 == "No") || (Sure4 == "no") || (Sure4 =="NO"))
        {
            string Frequence=frequency();
            NumberOfPeriod=final_number_i(NumberOfYears,Frequence);
            InterestRate=frequency_Interest_rate(InterestRate,Frequence);
        }
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
        cout<<"\x1b[32;40m The information The information you have entered are : \x1b[0m"<<endl;
        cout<<"\x1b[37;40m Frequence                    : "<<Frequence <<"\x1b[0m"<<endl;
        cout<<"\x1b[37;40m Number of Period             : "<<NumberOfPeriod<<"\x1b[0m"<<endl;
        cout<<"\x1b[37;40m Interest Rate by Period      : "<<InterestRate<<"\x1b[0m"<<endl;
        cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;

    }

    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;
    cout<<"\x1b[32;40m The information The information you have entered are : \x1b[0m"<<endl;
    cout<<"\x1b[37;40m Frequence                    : "<<Frequence <<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m Number of Period             : "<<NumberOfPeriod<<"\x1b[0m"<<endl;
    cout<<"\x1b[37;40m Interest Rate by Period      : "<<InterestRate<<"\x1b[0m"<<endl;
    cout<<"\x1b[32;40m                                                                  \x1b[0m"<<endl;



    outData<<";"<<"Frequency"<<";"<<Frequence<<endl;

    double InterestRate2=InterestRate*100;

        if(OpeningBalance==0)
        {
            outData<<";"<<"Opening Balance "<<";"<<"/"<<endl;
        }
        else
        {
            outData<<";"<<"Opening Balance "<<";"<<OpeningBalance<<endl;
        }
        if(InterestRate==0)
        {
            outData<<";"<<"Interest Rate "<<";"<<"/"<<endl;
        }
        else
        {
            outData<<";"<<"Interest Rate "<<";"<<InterestRate2<<"%"<<endl;
        }
        if(NumberOfYears==0)
        {
            outData<<";"<<"Number of Years"<<";"<<"/"<<endl;
        }
        else
        {
            outData<<";"<<"Number of Years"<<";"<<NumberOfYears<<endl;
        }
        if(Principal==0)
        {
            outData<<";"<<"Principal"<<";"<<"/"<<endl;
        }
        else
        {
            outData<<";"<<"Principal"<<";"<<Principal<<endl;
        }
        if(Instalment==0)
        {
            outData<<";"<<"Instalment"<<";"<<"/"<<endl;
        }
        else
        {
            outData<<";"<<"Instalment"<<";"<<Instalment<<endl;
        }



    if((OpeningBalance!=0)&&(InterestRate!=0)&&(NumberOfYears!=0))
    {

        Fixed_OpeningBalance_InterestRate_NumberOfYears(OpeningBalance,InterestRate,NumberOfPeriod,monthofcredit,yearofcredit,Frequence);
    }
    else if((InterestRate!=0)&&(NumberOfYears!=0)&&(Instalment!=0))
    {

        Fixed_NumberOfYears_InterestRate_Instalment(NumberOfPeriod,InterestRate,Instalment,monthofcredit,yearofcredit,Frequence);
    }
    else if((Principal!=0)&&(InterestRate!=0)&&(NumberOfYears!=0))
    {
        Fixed_Principal_InterestRate_NumberOfYears(Principal,InterestRate,NumberOfPeriod,monthofcredit,yearofcredit,Frequence);
    }
    else if((InterestRate!=0)&&(OpeningBalance!=0)&&(Principal!=0))
    {
        Fixed_OpeningBalance_InterestRate_Principal(OpeningBalance,InterestRate,Principal,monthofcredit,yearofcredit,Frequence);
    }
    else if((OpeningBalance!=0)&&(InterestRate!=0)&&(Instalment!=0))
    {
        Fixed_OpeningBalance_InterestRate_Instalment(OpeningBalance,InterestRate,Instalment,monthofcredit,yearofcredit,Frequence);
    }
    else if((OpeningBalance!=0)&&(NumberOfYears!=0)&&(Instalment!=0))
    {
        Fixed_Instalment_NumberOfYears_OpeningBalance(NumberOfPeriod,OpeningBalance,Instalment,monthofcredit,yearofcredit,Frequence);
    }
    else if((OpeningBalance!=0)&&(NumberOfYears!=0)&&(Principal!=0))
    {
        Fixed_OpeningBalance_NumberOfYears_Principal(NumberOfYears,Principal,OpeningBalance,monthofcredit,yearofcredit,Frequence);
    }
    outData<<";;;;;;;;;;;;;;;;;;;;;;;;;;"<<endl;
    cout<<endl;
    cout<<"\x1b[32;40m We managed to calculate your loan, thanks for using Jarvis. :) \x1b[0m"<<endl;



}





















































































void Passworld()
{
    string passworld;
    cout<<"\x1b[32;40m Enter the passworld : \x1b[0m";
    cout<<" ";
    cin>>passworld;
    cout<<endl;
    if(passworld!="GDCB")
    {
        cout<<"\x1b[31;40m Wrong passworld fucking Bastard \x1b[0m"<<endl;
        cout<<endl;
        Passworld();
    }

}


















int main(int argc, char** argv)
{

All_Step();

}
