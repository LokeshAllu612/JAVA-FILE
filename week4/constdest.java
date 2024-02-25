import java.lang.*; 
public class Student{ 
String fullName; 
int rollNum; 
double semPercentage; 
String collegeName; 
int collegeCode; 
Student(){ 
fullName="Cherry";
  rollNum=77; 
semPercentage=95; 
collegeName="MVGR"; 
collegeCode=2345; 
} 
void display(){ 
System.out.println("The student details are : "); System.out.println(fullName); 
System.out.println(rollNum); 
System.out.println(semPercentage); 
System.out.println(collegeName); 
System.out.println(collegeCode); 
} 
public static void main(String args[]){ 
Student obj=new Student(); 
obj.display(); 
} 
}
