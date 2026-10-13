**Tools used:** ChatGPT, used to figure out how to format the output properly using `setw`
  
**One decision:** I had to find out why my output wasn't being formatted as nicely as I wanted it to be. ChatGPT informed me that I wasn't using `setw` and `right` or each `cout` statement, which aren't sticky and need to be declared per output
  
**Verification:** I added extra formatting to the `cout` outputs as ChatGPT suggested, and the formatting came out  a little better. Instead of there simply being a couple of spaces after each line in the output (i.e Principal:      $1000) with the same amount of spaces in each line, now each line has a dynamic amount of spaces which makes the right column of the output aligned somewhat properly.
  
**Learning:** I learned how to use `setw` which I missed in a previous lecture I wasn't able to attend, although I still find it slightly confusing. I will probably consult AI to further understand how to format my outputs better.
