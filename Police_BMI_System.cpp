#include<iostream>
using namespace std;
 
int main()
{
int members ,Ob=0,Ov=0,No=0,Un=0;
float bmi,w,h; //w=weight , h=height
bool more = true;
string answer,depart;
cout<<"### Welcome to RMP BMI program ###"<<endl;
cout<<"\n";
    while (more){
        cout<<"Enter which police department: ";
        cin>>depart;
        cout<<"Enter the number of members in " <<depart <<" department: ";
        cin>>members;
        for (int i=1 ;i<=members;i++){
            cout<<"\nPlease enter the weight in (kg) for #"<<i<<" person: ";
            cin>>w;
            cout<<"Please enter the height in (m) for #"<<i<<" person: ";
            cin>>h;
            bmi=(w)/(h*h);
            cout<<"Your BMI is : "<<bmi<<endl;
            if(bmi>30){
                cout<<"Result is Obese"<<endl;
                Ob+=1;
            }
            else if(bmi<=29.9 && bmi>=25){
                cout<<"Result is Overweight"<<endl;
                Ov+=1;
            }
            else if (bmi <= 24.9 && bmi>=18.5){
                cout<<"Result is Normal"<<endl;
                No+=1;
            }
            else{
                cout<<"Result is Underweight"<<endl;
                Un+=1;
            }
        }
        cout<<"\n\n-----------Full report on the "<<depart<<" department: -----------"<<endl;
        if (Ob>0)
            cout<<Ob<<" members that are in obese state"<<endl;
        if (Ov>0)
            cout<<Ov<<" members that are in overweight state"<<endl;
        if (No>0)
            cout<<No<<" members that are in normal state"<<endl;
        if (Un>0)
            cout<<Un<<" members that are in underweight state"<<endl;
    
        cout << "\n\nEnter for other police department ? (yes/no) :";
        cin>>answer;
        cout<<"\n";
        if(answer =="no"){
            cout<<"Thank you for using RMP BMI program !"<<endl;
            more= false;
        }
        else 
            continue;
        
        

return 0;

    }
}