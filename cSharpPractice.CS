
using System.IO;
using System;

// Instead of #include C# uses using directives. This is one I added so that the lists would work
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        
        // Strings in C#
        
        // Method 
        Console.WriteLine("Hello, World!");
        
        //Variables/Strings
        string friend = "Bill";
        
        Console.WriteLine(friend);
        
        friend = "Gio";
        
        Console.WriteLine("Hello, " + friend);
        
        string fred = "FREDS";
        int numberOfFreds = 3;
        
        // .Length property
        Console.WriteLine($"Are all {numberOfFreds} of you {fred.Length} here today?" );
        
        string gioThemeSong = "My name is Gioooooo, yeeeeehawww";
        
        // .Contains property returns a boolean value
        Console.WriteLine(gioThemeSong.Contains("yeeeeehawww"));
        
        // Assignment to bool value 
        bool answer = gioThemeSong.Contains("Chicken nuggets");
        
        Console.WriteLine(answer);
        
        
        // Numbers in C#
        
        int a = 18;
        int b = 6;
        int c = a + b;
        Console.WriteLine(c);
        
        int correct_answer = 5;
        
        int aa = 2;
        int bb = 2;
        int cc = 1;
        
        int myanswer = (aa * bb) + cc;
        
        // Conditional 
        if(correct_answer == myanswer)
        {
            Console.WriteLine("Good job");
        }
        else
        {
             Console.WriteLine("NO");
        }
        
        
        int ddd = (a + b) - 6 * c + (12 * 4) / 3 + 12;
        
        Console.WriteLine(ddd);
        
        
        // Iterative loops:
        
        // While loops are similiar to C++
        
        int counter = 0;
        while (counter < 10)
        {
             Console.WriteLine($"Hello World! The counter is {counter}");
                 counter++;
        }
        
        Console.WriteLine("        ");
      
        for(int counter2 = 0; counter2 < 10; counter2++)
        {
             Console.WriteLine($"Hello World! The counter is {counter2}");
        }
        
        // Creating a list is generally the same
        
        
         Console.WriteLine("        ");
         
         
List<int> cabbages = new List<int>();

cabbages.Add(4);
cabbages.Add(7);
cabbages.Add(5);

List<int> ducks = new List<int>();

ducks.Add(4);
ducks.Add(4);
ducks.Add(5);

Console.WriteLine(ducks[1]);



        
    }
}
