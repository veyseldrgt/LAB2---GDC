using System;
using System.Diagnostics;
using GCDLib;

namespace GCDApp
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] testValues = { 103, 106, 48, 54 };
            foreach (var value in testValues)
            {
                MeasureGCD(value);
            }
        }

        static void MeasureGCD(int number)
        {
            Stopwatch stopwatch = new Stopwatch();

            // Measure GCD by subtraction
            stopwatch.Start();
            var gcdSubtraction = GCDCalculator.CalculateGCDUsingSubtraction(number, 3);
            stopwatch.Stop();
            Console.WriteLine($"GCD by subtraction of {number} and 3 is {gcdSubtraction}, Time: {stopwatch.ElapsedTicks} ticks");

            // Measure GCD by modulo
            stopwatch.Restart();
            var gcdModulo = GCDCalculator.CalculateGCDUsingModulo(number, 3);
            stopwatch.Stop();
            Console.WriteLine($"GCD by modulo of {number} and 3 is {gcdModulo}, Time: {stopwatch.ElapsedTicks} ticks");
        }
    }
}
