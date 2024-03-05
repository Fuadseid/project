#include <iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int bank_list(int bank);
int room(int num);
struct person{
string name;	
int pin;
};
int main ()
{
//in our sample of code the hotel has only 8 class for this we use the concept of Array
     ofstream fout;
     fout.open("detail.txt");
   person info;
    int bed_room_need;
    string bedroom_choice[2] ={"1.For one bedroom it is 900 birr:","2.For family bedroom it is 2000 birr:"};
    int again = 1;
    char see ='*';
    int bank;
    int num;
    int price;
    int n;
    int get;
    string username;
    int userPassword;
    int loginAttempt = 0;
    float phonenumber;
    int room[10]={11,12,13,14,15,16,17,18,19,20};
    string Name = info.name;
    int pass = info.pin;
   cout<<"-----Welcome to our Hotel Enter Your Phone number to start----"<<endl;
 cin>>phonenumber;
 fout<<phonenumber<<endl;
 cout<<"Enter The Your Name"<<endl;
 cin>>Name;
 fout<<Name<<endl;
 cout<<"Enter the PIN You want"<<endl;
 cin>>pass;
 fout<<pass<<endl;
 cout<<"Please keep the pin it is useful latter"<<endl;
 cout<<"Choose the bank you want to pay with "<<endl;

do{	
     bank_list(bank);
      fout<<bank; 
    cout<< "Press any number to continue other than 1"<<endl;
    cout<<"Press 1 to see again"<<endl;
    cin>>again;

}while(again == 1);
    
		 
    cout<<" What type of bed room do you want ?"<<endl;
   
	do{
		 for(int i=0;i<2;i++){
		cout<<bedroom_choice[i]<<endl;
	}
  cin>>bed_room_need;
    if(bed_room_need==1){
   cout<<" 1.For one bed room"<<endl;{
cout<<"Dear Customer Pay The Price To Get The service"<<endl;
        cin>>price;
         if(price==900)
        cout<<"You pay successfully"<<endl;
        
       if(price < 900){
   cout<<"It is not enough Try again"<<endl;
     
 }else if(price > 900) { for(int i=0;i<2;i++){
		cout<<bedroom_choice[i]<<endl;
	}

    cout<<"It is too Much Try again"<<endl;
   
}  

}
 } else if(bed_room_need==2){
cout<<" 2.For Family bedroom"<<endl;{
cout<<"Dear Customer Pay The Price To Get The service"<<endl;
cin>>price;
if(price==2000)
cout<<"You pay successfully"<<endl;
         
      
if(price < 2000){
cout <<" That isn't enough Try again"<<endl;
 
 }else if(price > 2000) {

    cout<<"It is too Much Try again"<<endl;
    
}  
  fout<<bedroom_choice<<endl;
 }
}else if(bed_room_need!=1||bed_room_need!=2){

    cout<<"Incorrect number You choose to try again enter 1"<<endl;


}
cout<<"Enter any character to continue other than * "<<endl;
cout<<"Enter * To see again"<<endl;
cin>>see;

}while(see=='*'); 
 //We use while looping to get five chance in registration
  if(n==bed_room_need){
    while (loginAttempt < 5)
    {  
               
       cout<< "Please enter your name: ";
        cin>>username;
         cout<< "Please enter PIN That you set On first : ";
        cin>>userPassword;

        if (username == Name && userPassword == pass)
        {
        
            cout<< "Welcome To Our Hotel MR. "<<Name<<" Your Room is "<<endl;
		for(int s=0;s<1;s++){
			cout<<room[s]<<"  ";
			cout<<endl;
			}
    
  break;
     
        }
        else
        {
             cout<< "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout<< "Too many login attempts! The program will now terminate.";
           get;
    }

    cout << " Thank you for Choosing our Hotel.\n";
  }else {
    cout<<"Finish the above first"<<endl;
}
    return 0;
    fout.close();
   }
    
    int bank_list(int bankaccount_choice){
		string choice[3]={"1.CBE","2.Abisinya","3.Awash"};
		
		
	 for(int q =0;q<3;q++){
   cout<<choice[q]<<endl;}
    cin>>bankaccount_choice;
    if(bankaccount_choice == 1){
  cout<<"CBE"<<endl;
 }else if(bankaccount_choice == 2){
    cout<<"Abisinya"<<endl;
}else if(bankaccount_choice== 3){
    cout<<"Awash"<<endl;
}else{
    cout<<"Try again enter 1 to do it again"<<endl;
}	return bankaccount_choice;
	}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


    