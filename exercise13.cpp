#include<iostream>
#include<stdlib.h>
using namespace std;

void line(){
   cout << "+-----------------------------------------------+" << endl;
}
int main() {    
   int i,o;  
   string pass_input;  
   
   cout << "+-----------------------------------------------+" << endl;
   cout << "|                  SECRET CODE                  |" << endl;
   cout << "+-----------------------------------------------+" << endl;
   cout << "                 Enter your PIN\n";  
       
   string pin = "32198";    
   string login = "block";    
   i = 1; 
   o = 4;   
   
   do {        
       cout << "PIN = "; cin>>pass_input;        
       if (pass_input == pin) {    
	   	   system("cls");        
           line();          
           cout << "\t\t| PIN VERIFED |" << endl;            
           cout << " \n";                     
           cout << "\t\t|   WELCOME   |" << endl;            
           cout << " \n";          
		   line();     
           login = "succeed";        
           goto exit;
           } 
       else {            
           line();           
           cout << "  PIN wrong! Please try again ("<< o <<"x Chance)\n";
		   line();            
           i = i +1;
           o--;
       }   
    } while (i <= 5);
	
    if(login != "succeed"){
       cout<<"Limit Expired !\n";  
       exit:     
       cout<<"Exit The Program, Thank You....\n\n";      
	} 
  
   return 0;
}