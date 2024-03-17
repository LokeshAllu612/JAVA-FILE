import java.lang.*; 
class AccessSpecifierDemo{ 
//private: 
private int priVar; 
//protected: 
protected int proVar; 
public int pubVar; 
public void setVar(int priValue,int proValue, int pubValue){ 
priVar=priValue; 
proVar=proValue; 
pubVar=pubValue; 
} 
public void getVar(){ 
System.out.println(priVar); 
System.out.println(proVar); 
System.out.println(pubVar); 
} 
public static void main(String[] args){ 
AccessSpecifierDemo obj =new AccessSpecifierDemo(); obj.setVar(10,20,30); 
obj.getVar(); 
} 
}
