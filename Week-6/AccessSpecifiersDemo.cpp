   #include<iostream> 
using namespace std; 
class AccessSpecifierDemo{
private: 
int priVar; 
protected: 
int proVar; 
public: 
int pubVar; 
void setVar(int priValue,int proValue, int pubValue){ priVar=priValue; 
proVar=proValue; 
pubVar=pubValue; 
} 
void getVar(){ 
cout<<priVar<<endl; 
cout << proVar <<endl; 
cout << pubVar <<endl; 
} 
}; 
int main(){ 
AccessSpecifierDemo obj; 
obj.setVar(10,20,30); 
obj.getVar(); 
}
