    /*
    Calculate Hourly Pay Program
    Made by Brandon Davidson
    CPT 307 - Week 1 Assignment
    Pete Limon
    07/13/2020 
    */

    package src;
    import java.text.NumberFormat;
    import java.util.Scanner;
    public class PayCalc {
        public static void main(String[] args) throws Exception {
            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();

            // Get Employee Name

            Scanner employeeName = new Scanner(System.in);
            System.out.print("Name: ");
            String Employee = employeeName.nextLine().trim();

            // Get Hourly Rate

            Scanner getGrossHourlyIncome = new Scanner(System.in);
            System.out.print("Hourly Rate: ");
            String grossHourlyIncome = getGrossHourlyIncome.nextLine().trim();
            double grossHourlyIncomeNum = Double.parseDouble(grossHourlyIncome);
            String finalGrossHourlyIncomeNum = NumberFormat.getCurrencyInstance().format(grossHourlyIncomeNum);

            // Get Total Hours Worked

            Scanner getTotalHours = new Scanner(System.in);
            System.out.print("Total Hours worked this week: ");
            String totalHours = getTotalHours.nextLine().trim();
            double totalHoursNum = Double.parseDouble(totalHours);

            // Resource Cleanup

            employeeName.close();
            getGrossHourlyIncome.close();
            getTotalHours.close();

            // This is to calculate overtime, even if there is no overtime it will still calculte and present 0 at the end because of the if statement. 

            double hoursOvertime = totalHoursNum - 40;
            double overtimePay = (hoursOvertime * grossHourlyIncomeNum) * 1.5;
            if (hoursOvertime < 0){
                overtimePay = 0;
                hoursOvertime = 0;
            }

            // Deductions

            double grossPay = (grossHourlyIncomeNum * (totalHoursNum - hoursOvertime)) + overtimePay;
            double deductionFederal = grossPay*0.15;
            double deductionState = grossPay*0.0307;
            double deductionMedicare = grossPay*0.0145;
            double deductionSS = grossPay*0.062;
            double deductionUnemployment = grossPay*0.0007;
            double deductionTotal = deductionFederal + deductionState + deductionMedicare + deductionSS + deductionUnemployment;
            double netPay = grossPay - deductionTotal;

            // Final Output, Cleans up the screen to display neat data first

            new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            System.out.println("Name: "+Employee);
            System.out.println("Hourly Rate: "+finalGrossHourlyIncomeNum);
            System.out.println("Total Hours: "+totalHoursNum);
            System.out.println("Overtime Hours: "+hoursOvertime);
            System.out.printf("Gross Pay: $%.2f%n",grossPay);
            System.out.printf("Tax Deductions: $%.2f%n",deductionTotal);
            System.out.printf("Net Pay: $%.2f%n",netPay);
        }
    }