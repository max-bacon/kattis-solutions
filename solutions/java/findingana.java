// https://open.kattis.com/problems/findingana
// Difficulty: 1.3 (Easy)

import java.util.Scanner;

public class findingana
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        String str = scn.nextLine();
        int start = str.indexOf("a");

        System.out.println(str.substring(start, str.length()));

        scn.close();
    }
}