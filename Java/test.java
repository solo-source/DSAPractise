import java.util.Scanner;

/**
 * test
 */
public class test {

    public static void main(String[] args) {
        int no_of_turns = 0;
        
        Scanner sc = new Scanner(System.in);
        no_of_turns = sc.nextInt();
        
        int arr[];
        String resultArray[];
        arr = new int[no_of_turns];
        resultArray = new String[no_of_turns];

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        int j = 0; 
        while (j < no_of_turns) {
            if (arr[j] == 6) {
                resultArray[j] = "Yes";
            } else {
                resultArray[j] = "No";
            }
            j++;
        }
        
        for (int i = 0; i < resultArray.length; i++) {
            System.out.println(resultArray[i]);
        }

        sc.close();
    }
}