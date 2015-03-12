import os
from shutil import copyfile
import subprocess
import datetime

question_name="question1"
submission_name="submission.h"
home_dir="/home"
work_dir="/home/ubuntu/toi/2015"
ms_dir="/home/ubuntu/toi/2015/_questions"
for root, dirs, files in os.walk(home_dir):
    if root == home_dir:
        for user_dir in dirs:
    	    if user_dir != "ubuntu":
                print "user_der:",os.path.join(root,user_dir)
                for subroot,subdirs,subfiles in os.walk(os.path.join(root,user_dir)):
                    for subdir in subdirs:
                        if subdir  == question_name:
                            ## copy
                            #print "question path:",os.path.join(home, user_dir, subdir)
                            src_file=os.path.join(home_dir, user_dir, subdir,submission_name)
                            dst_dir=os.path.join(work_dir, user_dir, subdir)
                            if not os.path.exists(dst_dir):
                                os.makedirs(dst_dir)
                            dst_file=os.path.join(work_dir, user_dir, subdir,submission_name)
                            print "copying: source file:",src_file
                            print "         distination:",dst_file
                            copyfile(src_file,dst_file)

                            ## complie 
                            support_path=os.path.join(ms_dir,question_name)
                            cpp_path=os.path.join(ms_dir,question_name,"main.cpp")
                            out_path=os.path.join(dst_dir,"main.out")
                            log_path=os.path.join(dst_dir,"log%s"%(datetime.datetime.now().strftime("%y%m%d_%H%M%S")))
                            print "compiling: support:",support_path
                            print "          cpp_path:",cpp_path
                            the_cmd="g++ -Wall -I %s -I %s -o %s %s > %s 2>&1"%(dst_dir,support_path,out_path,cpp_path,log_path)
                            print the_cmd
                            os.system(the_cmd)
