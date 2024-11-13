using System;

namespace GCDLib
{
    public class GCDCalculator
    {
        // Method using subtraction
        public static int CalculateGCDUsingSubtraction(int num1, int num2)
        {
            while (num2 != 0)
            {
                if (num1 > num2)
                    num1 -= num2;
                else
                    num2 -= num1;
            }
            return num1;
        }

        // Method using modulo division
        public static int CalculateGCDUsingModulo(int num1, int num2)
        {
            while (num2 != 0)
            {
                int temp = num2;
                num2 = num1 % num2;
                num1 = temp;
            }
            return num1;
        }
    }
}
