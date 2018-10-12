package Exercises;

import java.util.Random;
import java.util.Scanner;
public class RockPaperScissor {

	public static void main(String[] args) {
		
		int userInput,computerInput;
		Random ran = new Random(); 		  
		computerInput = ran.nextInt(2); 
		System.out.println(computerInput);
		Scanner input=new Scanner (System.in);
		System.out.println("Enter the number between 0-scissor,1-rock and 2-paper");
		userInput=input.nextInt();
		if(userInput==0 && computerInput==1) {
			System.out.println("Computer wins");
		}else if(userInput==1 && computerInput==0) {
			System.out.println("User wins");
		}else if(userInput==1 && computerInput==2) {
			System.out.println("Computer wins");
		}else if(userInput==2 && computerInput==1) {
			System.out.println("User wins");
		}else if(userInput==2 && computerInput==0) {
			System.out.println("Computer wins");
		}else if(userInput==0 && computerInput==2) {
			System.out.println("User wins");
		}else {
			System.out.println("Its a tie");
		}
	}

}
