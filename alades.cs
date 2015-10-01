/*http://br.spoj.com/problems/ALADES/*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{

    class Program
    {

        static int h2m(int min)
        {
            return min *= 60;
        }

        static void Main(string[] args)
        {
            
            int h1, m1, h2, m2;
            h1=h2=m1=m2=1;

            while (h1 > 0 || h2 > 0 || m1 > 0 || m2 > 0)
            {
                //descarte
                /*
                hora1 = Console.ReadLine();
                minutos1 = Console.ReadLine();
                hora2 = Console.ReadLine();
                minutos2 = Console.ReadLine();
                
                h1 = Int32.Parse(hora1);
                h2 = Int32.Parse(hora2);
                m1 = Int32.Parse(minutos1);
                m2 = Int32.Parse(minutos2);
                
                h1 = Convert.ToInt32(Console.ReadLine());
                m1 = Convert.ToInt32(Console.ReadLine());
                h2 = Convert.ToInt32(Console.ReadLine());
                m2 = Convert.ToInt32(Console.ReadLine());
             
                h1 = Int32.Parse(Console.ReadLine());
                m1 = Int32.Parse(Console.ReadLine());
                h2 = Int32.Parse(Console.ReadLine());
                m2 = Int32.Parse(Console.ReadLine());

                Console.WriteLine("{0} {1} {2} {3}\n", h1, m1, h2, m2);
                */
                //descartei essa parte 

                string[] dados = Console.ReadLine().Split(' ');

                h1 = int.Parse(dados[0]);
                m1 = int.Parse(dados[1]);
                h2 = int.Parse(dados[2]);
                m2 = int.Parse(dados[3]);

                if (h1 != 0 || h2 != 0 || m1 != 0 || m2 != 0)
                {

                    if (h1 > 0) m1 += h2m(h1);
                    if (h2 > 0) m2 += h2m(h2);

                    if (h1 == 0) m1 += h2m(24);
                    if (h2 == 0) m2 += h2m(24);

                    if (m2 < m1 && h2 <= h1) m2 += h2m(24);

                    if (m2 > m1) Console.WriteLine("{0}", m2 - m1);
                    if (m1 > m2) Console.WriteLine("{0}", m2 - m1 + h2m(24));
                }
            }

            Environment.Exit(0);
        }
    }
}

