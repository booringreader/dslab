import java.util.Scanner; 
public class w61{
    static class stack {
        // static size is shared by all the objects as a common member, it shouldn't be static, so that we can initialize it differently for each object
        static int size, tail, head;
        public stack(int size){ // constructor takes size of array/stack as input
            this.size = size;
            this.head = -1; // tracks the beginning of the stack (closed end)
            this.tail = 0; // tracks the end of the stack (open end)
        }
        static int arr[] = new int[size];
        
        public boolean isEmpty(){ // checks if the stack is empty by returning the whether the length of the array is 0
            return head==-1 && tail==0;
        }
        public boolean isFull(){ // checks if the stack is full by returning the position of tail & length of the array
            return tail==arr.length-1;
        }
        
        public
         void push(int data){
            if(isFull()){
                System.out.println("stack is full");
                return;
            }
            arr[tail++] = data;
            head=0;
        }

        public int pop(){
            if(isEmpty()){
                System.out.println("stack is empty");
                return -1;
            }
            return arr[tail--];
        }

        public int peek(){
            if(isEmpty()){
                System.err.println("stack is empty");
                return -1;
            }
            return arr[tail];
        }

        public int size(){
            if(isEmpty()){
                return 0;
            }
            if(isFull()){
                return size;
            }
            return tail-head;
        }

        public void display(){
            for(int i=0; i<=tail; i++){
                int temp = head;
                System.out.print(arr[temp++] + "->");
            }
            System.out.print("NULL");
        }

        public int peek(int idx){
            if(isEmpty()){
                System.out.println("stack is empty");
                return -1;
            }
            return arr[idx];
        }
    }
    
    public static void main(String args[]){
        stack st = new stack(5);
        System.out.println(st.size());




        
        // st.push(0);
        // st.push(1);
        // st.push(2);
        // st.push(3);
        // st.push(4);

        // st.display();
        // System.err.println("st.peek(): " + st.peek());
        // System.err.println("st.pop(): " + st.pop());
        // System.err.println("st.peek(): " + st.peek());
        // System.out.println("st.peek(idx): " + st.peek(3));
    }
}
