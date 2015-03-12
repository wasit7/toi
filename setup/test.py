import os
from shutil import copyfile
question_name="question1"
submission_name="submission.h"
home_dir="/home"
work_dir="/home/ubuntu/2015"
for root, dirs, files in os.walk(home_dir):
    if root == home_dir:
        for user_dir in dirs:
    	    if user_dir != "ubuntu":
                print "user_der:",os.path.join(root,user_dir)
                for subroot,subdirs,subfiles in os.walk(os.path.join(root,user_dir)):
                    for subdir in subdirs:
                        if subdir  == question_name:
                            #print "question path:",os.path.join(home, user_dir, subdir)
                            src_file=os.path.join(home_dir, user_dir, subdir,submission_name)
                            dst_dir=os.path.join(work_dir, user_dir, subdir)
                            if not os.path.exists(dst_dir):
                                os.makedirs(dst_dir)
                            dst_file=os.path.join(work_dir, user_dir, subdir,submission_name)
                            print "copying: source file:",src_file
                            print "         distination:",dst_file
                            copyfile(src_file,dst_file) 
