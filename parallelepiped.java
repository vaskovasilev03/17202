import java.util.Scanner;
class calcParallelepiped{
     public static void main(String[] args){
       double a,b,c,S,V;
       Scanner sc = new Scanner(System.in);
       System.out.print("Enter value of a: ");
       a = sc.nextDouble();
       System.out.print("Enter value of b: ");
       b = sc.nextDouble();
       System.out.print("Enter value of c: ");
       c = sc.nextDouble();
       if(a <= 0 || b <= 0 || c <= 0){
       System.out.println("Invalid parallelepiped!");
       return;
       }
       S = 2 * (a * c + b * c);
       V = a * b * c;
       System.out.format("The parallelepiped's area is %.2f!\n", S);
       System.out.format("The parallelepiped's volume %.2f!\n", V);
     }          
}
