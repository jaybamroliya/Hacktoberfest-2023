import java.util.*;
public class String {
public static void main(String[] args){
    String name="SUNNY"; //here the string is declare by using litrals 
    System.out.println(name);
    String name2 =new String("hey its sunny  here "); // here the string is declare by using  string class
    System.out.println(name2);
    System.out.println(name==name2); //it will return false because both the string are declare in diffrent memory location  
    
    // enter the string on user's input


    Scanner sc = new Scanner(System.in);

    String str=sc.next();
    System.out.println(str);
    String str1=sc.nextLine();
    System.out.println(str1);

    


      
}
}
