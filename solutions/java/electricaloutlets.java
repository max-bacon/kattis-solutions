// https://open.kattis.com/problems/electricaloutlets
// Difficulty: 1.3 (Easy)

import java.util.Scanner;

public class electricaloutlets
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        int testCases = Integer.parseInt(scn.nextLine());

        for(int i = 0; i < testCases; i++)
        {
            int sum = 0;
            String data = scn.nextLine();

            String[] array = data.split(" ");

            for(int j = 1; j < array.length; j++)
            {
                sum += Integer.parseInt(array[j]);
            }

            System.out.println(sum + 1 - Integer.parseInt(array[0]));
        }

        scn.close();
    }
}