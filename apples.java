public class AppleCostCalculator {
    public static void main(String[] args) {
        // Constants for the cost of green and red apples
        final int GREEN_APPLE_COST = 31;
        final int RED_APPLE_COST = 26;

        // Quantities of green and red apples bought by John, Peter, and Ann
        int johnGreenApples = 36;
        int peterGreenApples = 41;
        int annGreenApples = 6;
        int johnRedApples = 13;
        int peterRedApples = 16;
        int annRedApples = 21;

        // Calculate the total cost for each person
        int johnCost = (johnGreenApples * GREEN_APPLE_COST) + (johnRedApples * RED_APPLE_COST);
        int peterCost = (peterGreenApples * GREEN_APPLE_COST) + (peterRedApples * RED_APPLE_COST);
        int annCost = (annGreenApples * GREEN_APPLE_COST) + (annRedApples * RED_APPLE_COST);

        // Output the results
        System.out.println("John's cost: " + johnCost + " ksh");
        System.out.println("Peter's cost: " + peterCost + " ksh");
        System.out.println("Ann's cost: " + annCost + " ksh");
    }
}