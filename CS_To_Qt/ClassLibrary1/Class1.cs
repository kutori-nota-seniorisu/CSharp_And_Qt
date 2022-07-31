using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary1
{
    public class Class1
    {
        public Class1(){}
        public int myAdd(int a, int b)
        {
            int c = a + b;
            return c;
        }
        public void mySub(int a, int b, ref int c)
        {
            c = a - b;
        }
        public void mySetText(string text)
        {
            Console.WriteLine("ClassLibrary1的类名Class1下的mySetText: {0}", text);
        }
        public void myGetText(ref string text)
        {
            text = "ClassLibrary1的类名Class1下的myGetText";
        }
    }
}