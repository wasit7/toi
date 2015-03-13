# toi
Anything related to TOI (Thailand Olympiad in Informatics)

##output.log
There are 3 possible that make errors in output.log
* CPU time exceeds the limit, normally is set to 3 sec
* Memory utilization larger than the limit, normally is set to 32MB
* Stay idle for longer than the limit, normally is set to 3 sec

e.g. "HANGUP CPU 0.00 MEM 13324 MAXMEM 13324 STALE 6" means the program took 0 sec of CPU time and memory of 13324KB. However the program was in idle too long (6 sec)
