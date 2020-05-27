Hello everyone & welcome to this program :D


In order to understand how the list of Fibonacci works, let me explain the basic behind this, I can call it, philosophical function, or in simple terms, I used the Recursion that I will explain by moving forward.
We all know that the use of templates is a benefit (it gives us the possibility of making generic programming paradigm etc..).

Now let's take a look on the 1st version:
We all know that using templates is going to be excecuted at compile time, so you cannot give or enter any number at runtime, templates don't support that. so, if someone of you going to enter, without the use of template, a number at runtime, the small numbers will give, let me say, a fast output on the screen or in simple terms a fast execution. (maybe from 0 to 10 something like that according to your CPU frequency, I won't enter into this detail right now, maybe in other episodes). The idea now is to generate at compile time the entire Fibonnaci list from 0 to 46, why I've choosed until this value (46), simply because 47 will cause an overflow and this is up to your architecture (I use a 64-bit A). So with the keyword "const", the function will be executed at compile time then we can enter our magic number (I mean we can enter and use the global object cin from std). Yeah, I'll explain why I used 'std::make_index_sequence'. It represents a compile-time sequence of integers. When used as an argument to a function template. let's review what was refered in the last sentence: 'used as an argument to a function template', so it can help us to pass it to a function template and then generating a sequence of integer at compile time and pick up one at runtime. That's why I provided the <utility> header file. I hope it's clear.


What about the 2nd version:
The second one is easy and tricky, I invite you to take a look at 'binet formula', it will make things easy. Using "const" will help us at compile time. Moving forward, I used the compact version of if statement. Notice that I've used the static cast because simply, with the root square we will have a double so we have to static cast it to have the right result.

Moving to the 3rd version:
It's really simple to understand, it's a regular function that I've added a struct to make it available only at compile time.
Here you have really the choice between adding the struct or not, it's up to you and what you want to achieve.



N.B.: I provided only the header file, you have just to use one of those functions in main function with intelligence
