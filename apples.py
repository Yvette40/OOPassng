def main():
    # Constants for the cost of green and red apples
    GREEN_APPLE_COST = 31
    RED_APPLE_COST = 26

    # Quantities of green and red apples bought by John, Peter, and Ann
    johnGreenApples = 36
    peterGreenApples = 41
    annGreenApples = 6
    johnRedApples = 13
    peterRedApples = 16
    annRedApples = 21

    # Calculate the total cost for each person
    johnCost = (johnGreenApples * GREEN_APPLE_COST) + (johnRedApples * RED_APPLE_COST)
    peterCost = (peterGreenApples * GREEN_APPLE_COST) + (peterRedApples * RED_APPLE_COST)
    annCost = (annGreenApples * GREEN_APPLE_COST) + (annRedApples * RED_APPLE_COST)

    # Output the results
    print("John's cost:", johnCost, "ksh")
    print("Peter's cost:", peterCost, "ksh")
    print("Ann's cost:", annCost, "ksh")


if __name__ == "__main__":
    main()
