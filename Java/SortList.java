/*
Sorted List Program
Made by Brandon Davidson
CPT 307 - Week 3 Assignment
Professor Pete Limon
07/27/2020 
*/

package src;
import java.util.ArrayList;
import java.util.List;
public class SortList {
    public static void main(String[] args) throws Exception {
        List<String> myGamesList = new ArrayList<>(); // Create a List ADT
        myGamesList.add("Halo");
        myGamesList.add("Destiny");
        myGamesList.add("Bioshock");
        myGamesList.add("DOOM");
        myGamesList.add("Borderlands"); // 5 Items Added
        System.out.println("Games: "+myGamesList); // Print out the contents of the original list.
        myGamesList.add(3,"Starbound"); // Added new element to list
        System.out.println("Games: "+myGamesList); // Print out the updated contents of the list.
        myGamesList.remove(1); // Removed the element at the specified position in the list.
        System.out.println("Games: "+myGamesList); // Print out the updated contents of the list.
        myGamesList.clear();
    }
}