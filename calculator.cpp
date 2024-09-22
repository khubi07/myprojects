# include <iostream>
using namespace std ;
int main(){
    int n1;
    cin>>n1;
    char op ;
    cin>> op ;
    int n2;
    cin>> n2;
    switch(op){//jiska bhi kaam hai usko switch me likho
       case '+':
         cout<< n1+n2<<endl;
         break;
       case '-':
        cout<< n1-n2<<endl;
         break;
       case '*':
        cout<< n1*n2<<endl;
         break;
       case '/':
        cout<< n1/n2<<endl;
         break;
       default:
        cout<<"invalid"<<endl;
    }    
}  

      

