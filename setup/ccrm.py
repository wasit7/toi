# -*- coding: utf-8 -*-
"""
Created on Thu Mar 12 15:33:56 2015

@author: Wasit
"""
#copy
#complie
#run
#mark
toi_dir="/home/ubuntu/toi2015"
home_dir="/home"
work_dir="home/"
import os

for root, user_dirs, files in os.walk(home_dir):
    print user_dirs
    