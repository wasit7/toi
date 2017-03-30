# -*- coding: utf-8 -*-
"""
Created on Sun Mar 15 20:46:39 2015

@author: Wasit
"""
w=15
#s=[6,6,3,4,5,7,7]
s=[6,6,3,4,5,7,7]
def F(pos):
    #print pos
    g=w-sum(s[pos:])
    if(0<=g):
        return g*g
    cut=pos
    mingsq=w*w
    while sum(s[pos:cut+1])<=w :
        cut=cut+1
        g=w-sum(s[pos:cut])
        gsq=g*g + F(cut) 
        if gsq<mingsq:
            mingsq = gsq       
    return mingsq
if __name__=="__main__":
    print F(0)
    
    
    
    