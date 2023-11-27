# Mastermind
This is a project that will be able to be improved and worked upon if needed.
There are six colors to choose from red (R), magenta (M), blue (B), 
cyan (C), yellow (Y), and green (G). You, the code breaker, are to 
guess the colors in the correct order, you have a chance to try 12 times.  
When you are prompted to guess, you will type a pattern like "R G Y B", 
and once you finish typing in the combination, check the scoreboads on the right.
0 - right color, wrong space
1 - right color, right space
x - wrong color, wrong space
If you type in "R G Y B" and the correct pattern is "R G C P", then the scoreboard will print:
*******
*1   x*
*1   x*
*******
If you type in another pattern like "G Y C R" and the correct pattern is "R G C P", then the scoreboard will print:
*******
*x   0*
*0   1*
*******
**WARNING**: The placement in the scoreboard is NOT what you think!! :)
