 #include<iostream> 
using namespace std; 
class sample{ 
public : 
int a,b; 
void sample1(int first,int last){ 
a=first; 
b=last; 
} 
void operator=(sample &obj){ 
a=obj.a; 
b=obj.b; 
} 
void display(){ 
cout<<"the value of a is" << a<<endl; 
cout<<"the value of b is" << b<<endl; 
} 

 };
int main(){ 
sample obj1; 
obj1.sample1(2,3); 
sample obj2 =obj1; 
obj1.display(); 
}
