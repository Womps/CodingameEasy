# Codingame Exercise : Temperatures
Here are the instructions for the exercise.

## The Goal
In stations and airports you often see screens with ASCII Art representations of forms.
Have you ever asked yourself how it might be possible to simulate this display on a good old terminal? We have: with ASCII art!

## Rules
ASCII art allows you to represent forms by using characters. To be precise, in our case, these forms are words. For example, the word "MANHATTAN" could be displayed as follows in ASCII art :

```
# #  #  ### # #  #  ### ###  #  ###
### # # # # # # # #  #   #  # # # #
### ### # # ### ###  #   #  ### # #
# # # # # # # # # #  #   #  # # # #
# # # # # # # # # #  #   #  # # # #
```

Your mission is to write a program that can display a line of text in ASCII art in a style you are given as input.

## Game Input

### Input

**Line 1** : the width `letterWidth` of a letter represented in ASCII art. All letters are the same width.

**Line 2** : the height `letterHeight` of a letter represented in ASCII art. All letters are the same height.

**Line 3** : The line of text `textToTransform`, composed of `N` ASCII characters.

**Following lines** : the string of characters ABCDEFGHIJKLMNOPQRSTUVWXYZ? Represented in ASCII art.

### Output
The text `textToTransform` in ASCII art.

The characters a to z are shown in ASCII art by their equivalent in upper case.

The characters that are not in the intervals [a-z] or [A-Z] will be shown as a question mark in ASCII art.

### Constraints
0 < `letterWidth` < 30

0 < `letterHeight` < 30

0 < `N` < 200
