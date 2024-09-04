public class PatternQuestions {
    public static void main(String[] args) {
        patternOne(4);
        System.out.println();
        patternTwo(5);
        System.out.println();
        patternThree(5);
        System.out.println();
        patternFour(5);
        System.out.println();
        patternFive(5);
        System.out.println();
        patternSix(5);
    }

    static void patternOne(int n){
        for (int row = 1; row <= n; row++) {
            //for every row run the column
            for (int col = 1; col <= row; col++) {
                //now what do you need to print
                System.out.print("* ");
            }
            //when one line is printed we need to add a new line
            System.out.println();
        }
    }
    
    static void patternTwo(int n){
        for (int row = 1; row <= n; row++) {
            //for every row, run the column
            for (int col = 1; col <= n; col++) {
                //what do we need to print
                System.out.print("* ");
            }               
            //after one row completes go to the next row
            System.out.println();
        }
    }

    static void patternThree(int n){
        //outer loop controls the no of rows.
        for (int rows = 1; rows <= n; rows++) {
            //for every row, run the column
            for (int col = 1; col <= n-rows+1; col++) {
                //what do we want to print
                System.out.print("* ");
            }
            //after one row completes go to the next one
            System.out.println();
        }
    }

    static void patternFour(int n){
        //outer loop controls the no of rows.
        for (int rows = 1; rows <= n; rows++) {
            //for every row, run the column
            for (int col = 1; col <= rows; col++) {
                //what do we want to print
                System.out.print(col);
            }
            //after one row completes go to the next one
            System.out.println();
        }
    }

    static void patternFive(int n){
        //outer loop controls the no of rows.
        for (int rows = 1; rows <= n; rows++) {
            //for every row, run the column
            for (int col = 1; col <= n-rows+1; col++) {
                //what do we want to print
                System.out.print(col);
            }
            //after one row completes go to the next one
            System.out.println();
        }
    }

    static void patternSix(int n){
        for (int row = 1; row <= 2*n-1; row++) {
            //for every row run the column
            if(row <= n){
                for (int col = 1; col <= row; col++) {
                    //now what do you need to print
                    System.out.print("* ");
                }
            } else{
                for (int col = 1; col <= 2*n-row; col++) {
                    System.out.print("* ");
                }
            }
            //when one line is printed we need to add a new line
            System.out.println();
        }
    }
}
