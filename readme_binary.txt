In order to understand how we can manipulate the bin2dec conversion, let's understand the utility of the shift!
We have 2 ways:

1/ right shift:
let's take an example to understand more, here we have 5(10), we want to operate on it the RS: 5>>1 (here I choose 1 for simplicity)
5(10)=101(2) ==> 0101>>1 ==> 0010(2) = 2(10) it's simply the division of 5 by 2.

2/ left shift:
here we will take as the previous example: 5(10), we want to operate on it the LS: 5<<1
5(10)=101(2) ==> 0101<<1 ==> 1010(2) = 10(10) it's simply the multiplication of 5 by 2.

let's now explain the 3 versions:
1st version:
here I used the struct and constexpr to assure that the result will be calculated at compile time, no personal enters are allowed.

2nd version:
an other version but same as the first one (it will be executed at compile time)

3rd version:
with this version we can enter a personal value at runtime.

for more information please contact me.
