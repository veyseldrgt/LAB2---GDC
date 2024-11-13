# GCD

Calculating of the greatest common divisor of two numbers using two methods:

* by subtraction - function `GCD_substraction`,
* by dividing modulo - function `GCD_modulo`.

The solution consist of three projects:
* _GCDLib_ - library containing: `GCD_substraction`, `GCD_modulo` functions,
* _GCDUnitTest_ - unit test for: `GCD_substraction`, `GCD_modulo` functions,
* _GCDApp_ - sample aplication calling: `GCD_substraction`, `GCD_modulo` functions.

## Tasks
Implement the `GCD_modulo` function that compute GCD using dividing modulo operation.
Check corectness of computation using unit tests.
Measure and compare `GCD_substraction`, `GCD_modulo` functions execution time for number:

* Implement the function `GCD_modulo` which computes the GCD using
 a modulo division operation.
* Check the correctness of calculations - using unit tests.
* Measure and compare the execution time of the function:
 `GCD_substraction`,` GCD_modulo` for the given numbers:
  * 10<sup>3</sup> and 3,
  * 10<sup>6</sup> and 3,
  * 10<sup>10</sup> and 3.