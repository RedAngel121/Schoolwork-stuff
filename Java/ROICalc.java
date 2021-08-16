/*
Calculate Return on Investment Program
Created by Brandon Davidson
CPT 307 - Week 5 - Final Project
Professor Pete Limon
08/10/2020
*/

package src;
import java.util.*;
public class ROICalc {
    public static void main(String[] args) throws Exception {
        ArrayList<ProjectROI> roiArray = new ArrayList<ProjectROI>(); // Array for the sorting 
        System.out.println("\n\nType \"done\" for the Project Name to complete the calculations.\n"); // opening statement "TYPE DONE TO STOP" most people will probably miss this.
        String projectID, gainID, costID; // strings for the following vars
        Scanner project = new Scanner(System.in); // scanner to allow input

        while (true) { // only breaks once DONE is typed
            // Get Project Name
            System.out.print("Enter New Project Name: "); 
            projectID = project.nextLine(); // project name applied to var
            if (projectID.equals("done")) { // if done skip adding more stuff
                System.out.println("\nCalculations Complete."); // we are done now
                break; // kill the loop

            } else { // continue with the gathering of information
                // Gains and Costs
                System.out.print("Enter Total Gain of " + projectID + ": ");
                gainID = project.nextLine();

                System.out.print("Enter Total Cost of " + projectID + ": ");
                costID = project.nextLine();

                // Calculations for Return of Investment
                float convertedGain = Float.parseFloat(gainID.toString()); // converting strings to floats
                float convertedCost = Float.parseFloat(costID.toString()); // converting strings to floats
                float ROICalculation = (convertedGain - convertedCost) / convertedCost; // Calculation

                // Adding to the array
                roiArray.add(new ProjectROI(ROICalculation, projectID, convertedCost, convertedGain)); // adding to the array for sorting
                System.out.println("New Project Added!\nName: " + projectID + "\nCost: " + convertedCost + "\nGain: " + convertedGain); // info added to the array
            }
        }
        // Clean Up
        project.close();
        // Final edit for outcome of best options.
        Collections.sort(roiArray, new Sortbyoutcome()); 
        System.out.println("\nSorted by Best options:"); 
        for (int i=0; i<roiArray.size(); i++) 
            System.out.println(roiArray.get(i)); 
        System.out.println("\nProgram terminated.");
    }
}
// These are classes specifically designed to allow the sorting of the calculated items 
class ProjectROI {
    float bestOutcome, gain, cost;
    String name;
    String x = " ";
    // Clasify items and how they are used
    public ProjectROI(Float bestOutcome, String name, Float cost, Float gain) {
        this.bestOutcome = bestOutcome;
        this.name = name;
        this.gain = gain;
        this.cost = cost;
    }
    // attach each set of items together as a single string
    public String toString() {
        return this.bestOutcome + x + this.name + x + this.cost + x + this.gain;
    }
}
// It's time to sort!
class Sortbyoutcome implements Comparator<ProjectROI> {
    // Used for sorting in descending order of ROI
    public int compare(ProjectROI bad, ProjectROI good) {
        return (int)(good.bestOutcome - bad.bestOutcome);
    }
}