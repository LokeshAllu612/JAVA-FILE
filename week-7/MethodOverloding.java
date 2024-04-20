import java.lang.*; 
class marks{
 void maths(int internal,int external){
 System.out.println("Cherry got "+(internal+external) +" marks "); 
}
 }
 class MethOverloadInherit extends marks
{
 void maths(int internal,int external,int PBL)
{
 System.out.println("Joy got "+ (internal+external+PBL) + " marks ");
 }
 public static void main(String[] args) 
{
 MethOverloadInheritobj=new MethOverloadInherit();
 obj.maths(25,50); 
obj.maths(20,30,10); 
}
 } 
