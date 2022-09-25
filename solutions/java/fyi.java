// https://open.kattis.com/problems/fyi
// Difficulty: 1.3 (Easy)

import java.util.Scanner;

public class fyi
{
    public static void main(String[] args)
    {
        String target = "555";

        Scanner scn = new Scanner(System.in);

        String str = scn.nextLine();

        if (str.substring(0, 3).equals(target))
        {
            System.out.println(1);
        }
        else
        {
            System.out.println(0);
        }

        scn.close();
    }
}