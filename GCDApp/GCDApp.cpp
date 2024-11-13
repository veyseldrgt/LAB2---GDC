#include <iostream>
#include <iomanip>
#include "..\GCDLib\GCD.h"
#include "..\benchmark\benchmark.h"

int main()
{
	unsigned long long a, b;
	do
	{
		std::cout << "a:";
		std::cin >> a;
		std::cout << "b:";
		std::cin >> b;
		if (a > 0ULL && b > 0ULL)
		{
			unsigned long long gcdSubstraction;
			unsigned long long gcdModulo;

			Benchmark<std::chrono::nanoseconds> benchmark1;
			gcdSubstraction = GCD_subtraction(a, b);
			auto t_GCDsubstraction = benchmark1.elapsed();

			Benchmark<std::chrono::nanoseconds> benchmark2;
			gcdModulo = GCD_modulo(a, b);
			auto t_GCDmodulo = benchmark2.elapsed();

			std::cout << "GCD:" << gcdModulo << std::endl;
			std::cout << "GCD substraction : " << std::setw(12) << t_GCDsubstraction << "ns" << std::endl;
			std::cout << "GCD modulo :       " << std::setw(12) << t_GCDmodulo << "ns" << std::endl;
		}
	} while (a != 0ULL && b != 0ULL);
}