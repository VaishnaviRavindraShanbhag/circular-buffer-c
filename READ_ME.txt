 This is a basic implimentation of the Circular Buffer in C

There are 2 ways of writting a Circular buffer code
1] overwrite the data
2] clear the buffer

You over write the data when new data is more significant as compared to the data it over wrote.
In cases where it is important to read every data written into the buffer:clearing the buffer is a safer practice.

Embedded Systems utilize circular buffer cause more often than not, these systems are in some way time dependent.

This code practices clearing the buffer. It also accepts data = maxlen - 1, and uses this as a sure shot way to difffrenciate
between an empty and a full buffer.