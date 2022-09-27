// https://open.kattis.com/problems/princesspeach
// Difficulty: 2.2 (Easy)

import java.util.Scanner;
import java.util.ArrayList;

public class princesspeach
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        int totalNumbers = scn.nextInt();
        int totalFound = scn.nextInt();

        ArrayList<Integer> found = new ArrayList<Integer>();
        int mistakes = 0;
        for(int i = 0; i < totalFound; i++)
        {
            int num = scn.nextInt();
            if (found.contains(num))
            {
                mistakes++;
            }
            else
            {
                found.add(num);
            }
        }

        for(int i = 0; i < totalNumbers; i++)
        {
            if (!found.contains(i))
            {
                System.out.println(i);
            }
        }

        System.out.printf("Mario got %s of the dangerous obstacles.\n", totalFound - mistakes);

        scn.close();
    }
}