import java.util.Scanner;
import java.lang.Math;   
import java.util.Random;   
class test {
    public static void main(String[] args) {
    	
    	int min=1;
    	Random random = new Random();
    	int max=4;
    	
        double a;
        for(int i=0;i<50;i++){
        	a= random.nextInt(3)+1; 
        System.out.println("the number is: " + a);
        }

    }
}