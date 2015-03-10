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
subproblems={}
def F(x):
    if x==1: 
        return 0
    elif x in subproblems: 
        return subproblems[x]
    else:
        choice=[F(x-1)]
        if x%2==0: 
            choice.append(F(x//2))
        if x%3==0: 
            choice.append(F(x//3))
        subproblems[x]=1+min(choice)
        return subproblems[x]
        

if __name__ == "__main__":
    print F(10)