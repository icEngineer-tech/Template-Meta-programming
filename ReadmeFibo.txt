Hello everyone & welcome to this program :D


in order to understand how the list of Fibonacci works, let me explain the basic behind this, I can call it, philosophical function, or in simple terms, I used the Recursion that I will explain by moving forward.
we all know that the use of templates is a benefit (it gives us the possibility of making generic programming paradigm etc..).

now let's take a look on the 1st version:
we all know that using templates is going to be excecuted at compile time, so you cannot give or enter any number at runtime, templates don't support that. so, if someone of you going to enter, without the use of template, a number at runtime, the small numbers will give, let me say, a fast output on the screen or in simple terms a fast execution. (maybe from 0 to 10 something like that according to your CPU frequency, I won't enter into this detail right now, maybe in other episodes). The idea now is to generate at compile time the entire Fibonnaci list from 0 to 46, why I've choosed until this value (46), simply because 47 will cause an overflow and this is up to your architecture (I use a 64-bit A)
