import java.util.*;
public class week4_1{
    static void printarr(int arr[]){
        for(int i=0; i<arr.length; i++){
            System.err.print(arr[i] + " ");
        }
    }
    static void inputarr(int arr[], int SIZE){
        Scanner sc = new Scanner(System.in);
        System.out.println("input elements of array");
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
    }
    static void merge(int arr[], int s, int m, int e){
        int temparr[] = new int[e-s+1]; // new temporary array to store elements immediately after comparison
        int i=s, j=(m+1), k=0; // i to track the left subarray, j to track the right subarray, k to traverse the new temporary array
    
        while(i<=m && j <=e){ 
            if(arr[i] < arr[j]){ // if the element in the left subarray smaller than corresponding right element, add it to the new temporary array
                temparr[k] = arr[i];
                i++; // move forward on the left array (since element has been moved)
            }else{
                temparr[k] = arr[j];
                j++;
            }
            k++; // move forward on the temporary array
        }
    
        // if either of the two subarrays, is left untraveresed, travel through it
        while(i<=m){
            temparr[k++] = arr[i++];
        }
        while(j<=e){
            temparr[k++] = arr[j++];
        }
    
        // assign elements of temporary array to main array
    
        for(i=s, k=0; k<temparr.length; i++, k++){
            arr[i] = temparr[k];
        }
    }
    
    static void mergesort(int arr[], int si, int ei){
        // if the starting index is anything but less than the ending index, return;
        if(si >= ei){
            return;
        }

        // divide the array from the middle to create subarrays
        int mid = si + (ei-si)/2;

        mergesort(arr, si, mid); // apply merge sort on the left subarray
        mergesort(arr, mid+1, ei); // apply merge sort on the right subarray
        merge(arr, si, mid, ei); // merge both sides (conditions applied)
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("input size of array");
        int SIZE = sc.nextInt();
        int arr[] = new int[SIZE];
        inputarr(arr, SIZE);
        mergesort(arr, 0, SIZE-1); // pass index, not size
        printarr(arr);
    }
}