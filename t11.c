#include<unistd.h>
#include<stdio.h>
int main(){
printf("=========Smart Home Security System=======\n");
int rc=fork();
if (rc<0){
printf("fork failed\n");}
else if (rc==0){
for (int i=0;i<=4;i++){
printf("[Security Camera SUBSYSTEM] Initializing main Security Hub :%d\n",getpid());
sleep(2);
}
printf("[Security Camera Subsystem] All Clear. Stop Scanning.\n");
}
else {
for (int i=0;i<=4;i++){
printf("[Main Hub] Checking Room Temperature... pid:%d\n",getpid());
sleep(2);
}
printf("[Main Hub] Temperature Control Active\n");
}
return 0;
}


