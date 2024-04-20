#include<iostream>
using namespace std; 
class job{ 
public: 
void work() { 
cout<<("Doing some job")<<endl; 
}; 
}; 
class Mechanic : public job { 
public: 
void work() { 
cout<<("Mechanical repairs the vehicles")<<endl; 
}; 
}; 
class Teacher : public Mechanic { 
public: 
void work() { 
cout<<("Teacher teaches to students")<<endl; 
}; 
}; 
int main(){ 
Teacher sir; 
Mechanic Mechanischer; 
sir.work(); 
Mechanischer.work(); 
}
