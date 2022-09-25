// https://open.kattis.com/problems/fyi
// Difficulty: 1.3 (Easy)

import java.util.Scanner;

public class nsum
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        Integer.parseInt(scn.nextLine());

        int sum = 0;
        
        String[] numberLine = scn.nextLine().split(" ");

        for (int i = 0; i < numberLine.length; i++)
        {
            sum += Integer.parseInt(numberLine[i]);
        }

        System.out.println(sum);

        scn.close();
    }
}