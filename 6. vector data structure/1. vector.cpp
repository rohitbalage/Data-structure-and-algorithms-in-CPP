/*
1. vectors are sequence "containers" representing arrays that can
change the size.
2. just like arrays, vectors use contiguous storage locations for their elements, which means that their
elements can also be accessed directly in O(1) time.

3. but unlike arrays, their size can change dynamically, with theier storage being handled automatically
by the container.

![](1. vector.cp\ed2b4fd0-1bb7-e365-e16f-cdfede29a095.svg)

1. How? --->  fundamentals

2. Use?  -----> problems


if vector = {1,2,3,4} and you want to add 5.

so now new vector is created with new memory location and old one get deleted.

vector2 = { 1,2,3,4,5}

and it will do the same doubling itself when you add a new element.

complexity of push-back(data): O(1)

but in some cases = O(n)


*/
