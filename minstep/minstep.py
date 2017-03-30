# -*- coding: utf-8 -*-
"""
Created on Fri Mar 13 09:09:24 2015

@author: Wasit
"""

def F(x):
    if x<=1:
        return 0;
    else:
        choices=[F(x-1)]
        if (x%2)==0:
            choices.append(F(x//2))
        if (x%3==0):
            choices.append(F(x//3))
        bestchoice=min(choices)
        return 1 + bestchoice

if __name__ == "__main__":
    print F(100)