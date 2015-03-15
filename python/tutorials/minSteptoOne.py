# -*- coding: utf-8 -*-
"""
Created on Tue Mar 10 08:58:45 2015

@author: Wasit
"""

#min steps to one
#There are three operation [x=x-1][if x%2==0:x=x//2][if x%3==0:x=x//3]
#F(1)=0
#F(n)=1+min([])

#Using Memorization
import sys
sys.setrecursionlimit(10000)
subproblems={}
def F(x):
    if x==1: 
        return 0
    elif x in subproblems: 
        return subproblems[x]
    else:
        choices=[F(x-1)]
        path=["(-1)"]
        if x%2==0: 
            choices.append(F(x//2))
            path.append("(/2)")
        if x%3==0: 
            choices.append(F(x//3))
            path.append("(/3)")
        minchoice=min(choices)
        subproblems[x]=1+minchoice
        
        print "-->",x,path[choices.index(minchoice)]
        return subproblems[x]
        

if __name__ == "__main__":
    print F(20)