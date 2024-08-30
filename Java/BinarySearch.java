public class BinarySearch {
    public static void main(String[] args){
        int[] arr = {1,32,45,67,77,88,99,100,500,675};
        int leftIndex = 0;
        int rightIndex = arr.length;
        int search_element = 17;

        while(leftIndex <= rightIndex){
            //i.e, while there is an array to serach.
            int mid = (leftIndex + rightIndex) / 2;
            if(search_element == arr[mid]){
                System.out.println("Element found at " + mid + "th index.");
                return;
            }
            else if(search_element < arr[mid])
                rightIndex = mid - 1;
            else
                leftIndex = mid + 1; 
        }
        System.out.println("Element not found!");
    }    
}
