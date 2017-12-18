Random String Generator
-----------------------
The purpose of this project is to provide library functions that generate arbitrary length random 
strings one-at-a-time or in batches. When batched, the list is shuffled before it is returned. 
These outputs have uses in performance tests of sorting algorithms and unique sorted data 
structures like `std::set` and `std::map`. They can also be used for password generation.

Caveat
------
The batch function does no input range checking. Do not requested more unique strings than 
are possible for the given key_width. If you do the function will go into endless recursion 
attempting to find more unique keys than exist within the input constraints.