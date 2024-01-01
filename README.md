pluralsight

c++
Kate Gregory

smart pointers : delete auto

zero abstraction cost: 
new abstraction added to cpp lib, no extract cost is guaranteed


## building 
   = compile + linking
   
   a.cpp -- (compile) -> object 
   b.cpp -- (compile) -> object2
                             ...    | -> (link) ---> exe
                             
## Fundamental types
Integers
  * short/ long / int
Real numbers
  * float/ double 
Character
  * char/ unsigned char
  char can contain only ASCII symbol. unicode use *2 space
Boolean
  * bool
Auto
  * ask compiler to deduce the type, still strongly typed

## Clion build troubleshoot
1. Problem: Compile | cannot build cache
   ````
   cd C:\Users\hanyi\CLionProjects\untitled\ rmdir /S /Q cmake-build-debug 
   
   ````
   File > Invalidate cache (will restart Clion)