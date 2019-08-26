
This repository is an extention of the talk "Turning 'wat' into 'why'" by Katie McLaughlin given at the PyCon 2019

## printf buffer (C)

`printf` works by storing the processed version of the string it is given and only print them when its buffer contain a '\n' or when the buffer is flushed.
This is done to prevent multiple call to the `write` syscall

## function to string (js)

the toString() value of a Js function is the source code of the function.

`console.log + {}` has some interesting result

## module to string (Js)

Same as above, the string value of a module (or class in ES6) is the source of this module

## console.log buffer (Browser side Js)

To avoid costly print operation, the browser does not print the result of a console.log immediatly on browser side.

As a result, if you update an object after logging its raw value, the updated version may show up
