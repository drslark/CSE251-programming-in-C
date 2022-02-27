### Some of the available descriptors for printf are:

* **%f** - Floating point decimal.
* **%e** - Floating point exponential
* **%d** - Decimal
* **%s** - String
* **%c** - Character

1. A variable of type int can be printed using **%d**, but NOT **%f** or **%e**.
2. A variable of type float or double can be printed using **%f** or **%e**, but not **%d**. 
3. **%s** is only used to print strings and **%c** is only used to print characters.


### The %f descriptor is for a floating point value. Modifiers can be added between the % and the f to make a format string. These are (from left to right):

* **\-** : Left justify
* **\+** : Always put a sign (positive or negative)
* **0** : Use leading zeros
* **nn** : Some width value (one or more digit number).
* **.n** : Precision (decimal places) (one or more digit number).
