// https://open.kattis.com/problems/classy
// Difficulty: 4.0 (Medium)

import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class classy
{
    private static class Person
    {
        public String name;
        public ArrayList<Integer> data = new ArrayList<Integer>(); 

        Person(String newData)
        {
            name = newData.substring(0, newData.indexOf(":", 0));

            newData = newData.substring(newData.indexOf(": ", 0) + 2, newData.length());
            newData = newData.replace(" class", "");

            ArrayList<String> tempData = new ArrayList<String>();
            String[] tempStr = newData.split("-");
            for(int i = 0; i < tempStr.length; i++)
            {
                tempData.add(tempStr[i]);
            }

            Collections.reverse(tempData);

            for(int i = 0; i < tempData.size(); i++)
            {
                String a = tempData.get(i);

                int add = 2;
                if (a.equals("upper"))
                {
                    add = 3;
                }
                else if(a.equals("lower"))
                {
                    add = 1;
                }

                data.add(add);
            }


            for(int i = data.size(); i < 10; i++)
            {
                data.add(i, 2);
            }
        }
    }

    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);

        Comparator<Person> comp = new Comparator<Person>() {
            @Override
            public int compare(Person a, Person b) {
                for(int i = 0; i < 10; i++)
                {
                    if (a.data.get(i) == b.data.get(i))
                    {
                        continue;
                    }
                    else if (a.data.get(i) > b.data.get(i))
                    {
                        return -1;
                    }
                    else if (a.data.get(i) < b.data.get(i))
                    {
                        return 1;
                    }
                }

                return a.name.compareTo(b.name);
            }
        };

        int testCases = scn.nextInt();
        for(int testCase = 0; testCase < testCases; testCase++)
        {
            int peopleCount = scn.nextInt();

            ArrayList<Person> list = new ArrayList<Person>();
            scn.nextLine();
            for(int i = 0; i < peopleCount; i++)
            {  
                
                list.add(new Person(scn.nextLine()));
                

            }

            list.sort(comp);

            for(int i = 0; i < list.size(); i++)
            {
                System.out.println(list.get(i).name);
            }

            System.out.println("==============================");
        }

        scn.close();
    }
}