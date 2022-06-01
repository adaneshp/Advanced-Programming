# The Party's in Dolores's Driveway

- This program was developed in February, 2015

Time Limit: 1 Second    Memory Limit: 32768 KB

Dolores's house has an unusual semi-circular driveway that can accommodate 26 cars in a single file, with exits at the front and the back. This is nice because when she hosts a party because everyone can park in the driveway. However, it causes complications when a guest wants to leave, because other guests with cars blocking that person must move their cars temporarily. Her guests take this in stride, and make a game out of the nuisance. When someone leaves, those cars that must move return to the driveway in reverse order. Since there are two ways for the leaving car to exit (through the front or rear exit), the cars on the shorter path to an exit must move (and return in reverse order). If the car that wants to leave is exactly in the middle, the front cars (on the left) must move.

For example, suppose the initial driveway configuration is represented as ABCDEFG. Suppose further that the owner of car E decides to leave. Then the owners of cars F and G must move (since they're on the shorter path to an exit) to make room for E to leave, and then return to the driveway in reverse order. The new driveway configuration will be ABCDGF. Suppose now C wants to leave. Here, A and B have to move (since they're on the shorter path to an exit) , with the resulting configuration BADGF. Let's say that now D wants to leave. In this case, B and A must move (since both exit paths are of equal length, and A and B are on the path to the front exit). The resulting configuration is ABGF.

Write a program to simulate this party game.

## Input
Each data set begins with a line containing only a string of uppercase letters, representing the initial order of cars in the driveway as described above. The string will contain at least one letter, and no letter is duplicated. The next line contains an integer n >= 0. The next n lines each contain only a single uppercase letter, indicating the next car to leave the party; this letter is guaranteed to represent one of the remaining cars at the party. Your program should stop processing data sets when it reaches an initial driveway order of STOP.

## Output
Begin the output for each data set by indicating the data set number and the initial order of cars in the driveway. As each car leaves, output the new car order. Follow the output format indicated in the Sample Output. Leave a blank line between the output for different data sets.

## Sample Input
```
ABCDEFG
3
E
C
D
HIWORLD
1
H
STOP
```
## Sample Output
```
Dataset #1:  The initial order is ABCDEFG.
After E leaves, the order is ABCDGF.
After C leaves, the order is BADGF.
After D leaves, the order is ABGF.
 
Dataset #2:  The initial order is HIWORLD.
After H leaves, the order is IWORLD.
```

This problem is from: https://sharecode.io/section/problemset/problem/1324
