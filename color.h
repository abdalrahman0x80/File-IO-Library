#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
void list(){
  for(int i=0;i<8;i++){
     printf("\033[1;3%dmColor\n",i);
  }
  for(int x=0;x<8;x++){
    printf("\033[1;4%dmBackground\n",x);
  }
}
void red(string x){
   cout<<"\033[1;31m"<<x;
}
void green(string x){
   cout<<"\033[1;32m"<<x;
}
void bgyellow(string x){
   cout<<"\033[1;43m"<<x;
}
void yellow(string x){
   cout<<"\033[1;33m"<<x;
}
void blue(string x){
   cout<<"\033[1;34m"<<x;
}
void bgblue(string x){
   cout<<"\033[1;44m"<<x;
}
void bgpink(string x){
   cout<<"\033[1;45m"<<x;
}
void pink(string x){
     cout<<"\033[1;35m"<<x;
}
void yellowblue(string x){
   cout<<"\033[1;36m"<<x;
}
void bgwhit(string x){
  cout<<"\033[1;47m"<<x;
}
void whit(string x){
     cout<<"\033[1;37m"<<x;
}
void bgred(string x){
  cout<<"\033[1;41m"<<x;
}
void brown(string x){
      cout<<"\033[1;30m"<<x;
}
void bggreen(string x){
    cout<<"\033[1;42m"<<x;
}
void bgbrown(string x){
         cout<<"\033[1;40m"<<x;
}
void bgyellowblue(string x){
     cout<<"\033[1;36m"<<x;
}
void functions(){
      puts("color:");
        puts("[1] red();");
         puts("[2] green();");
         puts("[3] blue();");
       puts("[4] yellow();");
      puts("[5] brown();");
       puts("[6] white();");
        puts("[7] yellowblue();");
         puts("[8] pink();");
          puts("background:");
          puts("[1] bgred();");
          puts("[2] bggreen();");
         puts("[3] bgglue();");
        puts("[4] bgyellow();");
       puts("[5] bgbrown();");
      puts("[6] bgwhite();");
       puts("[7] bgyellowblue();");
        puts("[8] bgpink();");
    
}
