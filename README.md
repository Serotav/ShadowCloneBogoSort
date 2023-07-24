# ShadowCloneBogoSort: were sorting calls upon the shadows 

Welcome, brave traveler, to a new depth in the world of algorithmic absurdity, where we laugh in the face of efficiency and perform an act of coding that will redefine your understanding of the word 'garbage.' This is where light bends and warps into a peculiar kind of darkness, where genius gives way to madness. If you've experienced the likes of quick sort or merge sort, you're about to embark on a wild ride that is their antithesis. 

The halls of sorting algorithm history echo with the tales of infamous bad sorts. We have marvelled at the stubborn persistence of BogoSort, the leisurely pace of SlowSort, and the drowsy attitude of SleepSort. These, my friend, were just the tip of the chaotic iceberg. When the developers hit the wall of their intentionally disastrous potential, they began to think bigger...much bigger. Enter MiracleSort, born of the desperate pleas to divine intervention when all hope was lost.

Yet, the relentless thirst for creating something ineffably inefficient was still unquenched. So, back to the drawing board they went, delving into the chilling depths of physics to spawn the abomination that is QuantumBogoSort.

Today, I intend to eclipse these masterpieces of inefficiency. I present to you the ShadowCloneBogoSort, a glorious concoction inspired by the infamous BogoSort and Naruto's famed Shadow Clone technique.

BogoSort, the grandfather of inefficient sorts, works by tirelessly permuting the initial array and checking if the permutation equals a sorted version. But isn't that too much effort? I mean, who likes to do things the hard way? 

Here's where things get fun. Instead of swapping every single element, we'll just swap two random ones. You might be wondering, "But what if we move an element that was already in the right place?" Excellent point, dear reader. We do, after all, want to make progress here. 

So, let's play a game of chance. We'll swap the elements... and also not swap them. We'll create two versions of the array: one with swapped elements, the other untouched. It's the best of both worlds, where we let the fates decide which path leads to sorted glory.

With this cunning strategy in place, it's time to really let loose. We keep picking an array, check if it's sorted, and if not, swap two elements. Then we add both the swapped and the original array to a queue. Rinse and repeat until a sorted version is born (or until we run out of RAM, whichever comes first). 

![ShadowCloneBogoSort_shadow_expation](https://media.tenor.com/cQ6IPcvA4EkAAAAd/naruto-shadow-clone.gif)

You've heard of Jesus multiplying bread and fish, but in the world of inefficiency, I'm multiplying arrays like there's no RAM constrains. 

Welcome to the chaotic joy of ShadowCloneBogoSort. Enjoy the ride, and remember: it's not about efficiency, it's about how gloriously inefficient you can be!


## So, Just How Epicly Inefficient Is This?
Let's don the hat of 'science' for a moment, and delve into the brutal reality of the computational monstrosity that is the ShadowCloneBogoSort. Each time we select an array, swap two elements, and add both the original array and the swapped version to the queue, we're effectively increasing the number of arrays by one with each iteration. To illustrate this point, refer to the following schematic:

                                                          original array
                                                      1° iteration: original array, 1_swapped
                                                      2° iteration: 1_swapped, original array, 2_swapped
                                                      3° iteration: original array, 2_swapped, 1_swapped, 1_1swapped

Computationally speaking, as we need to go through a staggering number of combinations before hitting the jackpot (the sorted array), the more elements in the array, the more combinations to test. With each increase in the array size by one, we amplify the number of possible permutations by (n-1)*n. Consequently, the time complexity to obtain the sorted permutation, given n elements in the array, skyrockets to O(n!).

But wait, there's more! If we're increasing the number of arrays with each iteration, wouldn't that suggest that our space complexity also catapults to O(n!)? And you'd be spot-on, dear reader!

However, you might be thinking: "Surely, it can't be that bad? At the end of the day, we're still getting a sorted array, right?" Let's put this into perspective. Suppose we have an array of chars where each element takes up just one byte of memory. For an array of 5 elements, we'd be using 5 bytes - a modest amount. Given our earlier calculated complexity, on average, it would take approximately 120 iterations to obtain the sorted version. That results in 120 * 5 = 600 bytes used to store these arrays.

But what happens when our array has 10 elements? Just 5 more, no big deal, right? Well, let's crunch those numbers again. For 10 elements, we have 10! or about 3,628,800 possible permutations. This would consume a whopping ~3.4 MB of memory just for the arrays. That's a 1000-fold increase in memory usage for a mere addition of 5 elements!

Now let's really push the boat out. What if we want to sort 1000 elements? That gives us 1000! permutations, which translates to ~4e2567 bytes or an utterly absurd 3.6e2555 terabytes! You'd need either a Chuck Norris-level stroke of luck or a reliable source to download some extra RAM from the Internet to tackle that one.

In conclusion, with this next-level dumpster fire of an algorithm, sorting literally anything would be a Herculean task. But hey, don't just take my word for it. I've left a C++ implementation here for you to experience the exhilarating pain of multiplying arrays and surrendering your precious RAM to the shadows. Enjoy!

![Lucky_needed](https://media.giphy.com/media/3hvmlYNsOTFWE/giphy.gif)

