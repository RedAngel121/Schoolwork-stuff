/*
Binary Search Program
Made by Brandon Davidson
CPT 307 - Week 1 Assignment
Pete Limon
07/13/2020 
*/

package src;
// importing utility for creating arrays
import java.util.Arrays;
public class BinarySearch {
    public static void main(String args[]){
        // Creating the array and numbers to find
        int searchThis[] = {5,10,15,20,25,30,35,40,45,50,55,60,65,70};
        int first = 17;
        // Searching with the utility that was imported ~ gets the array index number   
        int firstOut = Arrays.binarySearch(searchThis,first); 
        int second = 45;
        int secondOut = Arrays.binarySearch(searchThis,second);
        // A few IF statements to make displaying the searched array easy, shows what you searched and where it is in the array
        if (firstOut < 0)
            System.out.println("The requested number \""+first+"\" was not found!");
        else
            System.out.println("The number \""+first+"\" was found at index: "+firstOut);
        if (secondOut < 0)
            System.out.println("The requested number \""+second+"\" was not found!");
        else
            System.out.println("The number \""+second+"\" was found at index: "+secondOut);
    }
}