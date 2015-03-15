# -*- coding: utf-8 -*-
"""
Created on Fri Mar 13 09:23:39 2015

@author: Wasit
"""
subproblems={}
def fib(x):
    if x==1 or x==2:
        return 1
    if x in subproblems:
        return subproblems[x]
    else:
        subproblems[x]=fib(x-1)+fib(x-2)
        return subproblems[x]
        
print fib(40)