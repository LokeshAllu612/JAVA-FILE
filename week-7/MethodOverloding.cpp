 #include<iostream> 
using namespace std; 
class doctor{ 
int tab,fee,receipt; 
public: 
void patient(int tablets,int cost){ 
tab=tablets; 
fee=cost; 
cout<< tab*fee<<" rupees "<<endl; 
} 
void patient(int tablets,int cost,int report){ 
tab=tablets; 
fee=cost; 
receipt=report; 
cout<< (tab*fee)<< " rupees with "<<receipt<<"reciept "<<endl; 
} 
void display(){ 
cout<<"**/patient discharged/**"<<endl; 
}
}; 
int main(){ 
doctor obj; 
obj.patient(5,100); 
obj.patient(10,200,1); 
obj.display(); 
}

