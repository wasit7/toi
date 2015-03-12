import os

question_name="question1"
submission_name="submission.h"
home="/home"
for root, dirs, files in os.walk(home):
    if root == home:
        for user_dir in dirs:
    	    if user_dir != "ubuntu":
                print "user_der:",os.path.join(root,user_dir)
                for subroot,subdirs,subfiles in os.walk(os.path.join(root,user_dir)):
                    for subdir in subdirs:
                        if subdir  == question_name:
                            print "question path:",os.path.join(home, user_dir, subdir)
                            print "file:",os.path.join(home, user_dir, subdir,submission_name)
