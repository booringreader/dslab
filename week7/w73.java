import java.util.LinkedList;
import java.util.Stack;
import java.util.Scanner;
public class w73{
    public static void checkStr(String s, String t){
        Stack<Character> st1 = new Stack<>();
        Stack<Character> st2 = new Stack<>();

        // if(s.length() != t.length()){
        //     System.out.println("false");
        // }

        for(int i=0; i<s.length(); i++){
            if(s.charAt(i) == '#'){
                // if(q1.isEmpty()){
                //     continue;
                // }
                st1.pop();
            }else 
                st1.push(s.charAt(i));
        }

        for(int i=0; i<t.length(); i++){
            if(t.charAt(i) == '#'){
                if(st2.isEmpty()){
                    continue;
                }else
                    st2.pop();
            }else 
                st2.push(t.charAt(i));
        }

        char c, m;
        for(int i=0; i<t.length(); i++){
            c = st1.pop();
            m = st2.pop();
            if(c != m)
                System.out.println("false");
        }
        System.out.println("true");
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String S = sc.nextLine();
        String T = sc.nextLine();
        
        checkStr(S, T);

    }
}
