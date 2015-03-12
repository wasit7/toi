import os
from shutil import copyfile
import subprocess
import datetime

question_name="minstep"
submission_name="submission.h"
constrain=" -m 32000 -t 1 "
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
                            log_path=os.path.join(dst_dir,"log_%s"%(datetime.datetime.now().strftime("%d_%H%M%S")))
                            print "compiling: support:",support_path
                            print "          cpp_path:",cpp_path
                            the_cmd="g++ -std=c++11 -Wall -I %s -I %s -o %s %s > %s 2>&1"%(dst_dir,support_path,out_path,cpp_path,log_path)
                            #print the_cmd
                            os.system(the_cmd)

                            ## run
                            #input question
                            in_file_path=os.path.join(ms_dir,question_name,"file_in.txt") 
                            #markschem
                            ms_file_path=os.path.join(ms_dir,question_name,"file_out.txt") 
                            #student result
                            out_log_file=os.path.join(dst_dir,"out_%s"%(datetime.datetime.now().strftime("%d_%H%M%S")))
                            the_cmd=  os.path.join(work_dir,"_src/timeout.sh")+constrain+ out_path + " " + in_file_path + " " + ms_file_path + "> %s 2>&1"%out_log_file
                            print "runing:",the_cmd
                            os.system(the_cmd)

