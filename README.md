#SMART HOME SECURITY & TEMPERATURE CONTROL SYSTEM DEVELOPED TO UNDERSTAND (C MULTIPROCESSING)

A C program demonstrating process concurrency ,CPU scheduling (how cpu switches to other process while proceeding delay using Sleep(2)) and multiprocessing using linux calls in WSL(ubunto)

#FEATURES USED:
fork() system call: Used to create a duplicate child process from the parent process in our system multiple child processes were created that perform the security scan action 
getpid() system call: return the id of currently running process to distinguish among parent and child process

#CONCEPT USED:
Multiprocessing & Concurrency: simulates two independent tasks running simultaneously.
Child process: child process created and used for security camera system scanning the motion.
parent process: act as a main hub monitoring room temperature concurrently.

#HOW TO COMPILE AND RUN:
1.Open your terminal in project directory.
2.Compile the C program:
bash
gcc t11.c -o t11
