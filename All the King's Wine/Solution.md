There are a few keys to this puzzle: 1) The king has to mix wine in order to isolate the single poisoned one. 2) There are 10 servants. After about 3 weeks, each one can be either dead or alive, meaning that there are 2^10 = 1024 possible outcomes. Since 1024 > 1000, it's actually possible for some scheme to work. 3) This puzzle is much easier if you have any knowledge of binary numbers

Here's the scheme: The king assigns each servant a number from 1-10. The king assigns each bottle a number from 0-999. When he labels them, though, he writes the number on the bottle in binary with ten digits, like this: 0: 000000000 1: 000000001 2: 000000010 3: 000000011 4: 000000100 5: 000000101 ... 999: 1111100111 and so on. Read this if you don't know binary: http://en.wikipedia.org/wiki/Binary_number.

Now, each servant takes a small sip from every bottle where the servant's number equals 1 in the binary number on the bottle. So, the 1st servant drinks from every other bottle. The second servant drinks from bottles 2, 3, 6, 7, 10, 11, etc.

Then based on the combination of servants that die, he can identify the poisoned bottle. For example, if none of them die, the 0th bottle was poisoned because none of them drank from it. If only servant 1 dies, then bottle 1 was poisoned, because he's the only person who drank from it. Finally, if servants 1, 2, 3, 6, 7, 8, 9, and 10 die, then the 999th bottle was poisoned (see how this matches up with 999 above).

The solution has been taken directly from http://www.mindcipher.com/puzzles/121
