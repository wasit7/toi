import os
question_name="question1"
submission="submission.h"
home="home"
for root, dirs, files in os.walk("/home"):
    if root == "/home":
        for user_dir in dirs:
    	    if user_dir != "ubuntu":
                print "user_der:",user_dir
                for subroot,subdirs,subfiles in os.walk(user_dir):
                    if subdirs  == question_name:
                        print 'question_dir:',q_subdir
    	                print subfiles
