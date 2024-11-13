template<typename T>
T GCD_subtraction(T a, T b)
{
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}

template<typename T>
T GCD_modulo(T a, T b)
{
	while (b != 0) {
		T temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}