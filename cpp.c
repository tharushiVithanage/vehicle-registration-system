#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50],nic[12],regN[7];
    int i=0, r=0, c=0;//arry number

    printf("\n\t\t\t  VEHICLES REGISTATION");
    printf("\n\t\t\t=========================\n");

    printf("\n\n\n\n Enter the name :");
    scanf("%s",&name);

    if(name[i]!=0){
        do{
            if(name[i]>= 1  && name[i]<=31 || name[i] >=33 && name[i]<=64 || name[i] >=91 && name[i]<=96 || name[i]>=123 && name[i]<=127){
               printf("\n\t ***Invalid enter.... try again!!!*** \n\n");
            }
            i++;

        }while (name[i]!=0);

    }

    printf("\n Enter the NIC Number :");
    scanf("%s",&nic);

    if (nic[r]!=0){
        int t=0;// number length

        while (nic[r] != 0){
            t++;
            r++;
        }

        if(t==9){


            if(r<=8){
                if(nic[r]>=0 && nic[r]<= 47 ){
                    printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                    printf("\n Enter the NIC Number :");
                    scanf("%s",&nic);

                }else if(nic[r]>=58 && nic[r]<=85 ){
                    printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                    printf("\n Enter the NIC Number :");
                    scanf("%s",&nic);
                }else if(nic[r]=87){
                    printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                    printf("\n Enter the NIC Number :");
                    scanf("%s",&nic);
                }else if(nic[r]>=89 && nic[r]<=117){
                    printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                    printf("\n Enter the NIC Number :");
                    scanf("%s",&nic);
                }else if(nic[r]=119){
                    printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                    printf("\n Enter the NIC Number :");
                    scanf("%s",&nic);
                }else if(nic[r]>=121 && nic[r]<=127){
                    printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                    printf("\n Enter the NIC Number :");
                    scanf("%s",&nic);
                }
            }
            if(r==9){
                if(nic[r] != 86 || nic[r] != 118 || nic[r] != 88 || nic[r] != 120 ){
                printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                printf("\n Enter the NIC Number :");
                scanf("%s",&nic);
                }
            }

        }else if(t==12){
            if(r<=11){
                if(nic[r]>=0 && nic[r]<= 47 || nic[r]<=58 && nic[r]<=127){
                  printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                  printf("\n Enter the NIC Number :");
                  scanf("%s",&nic);
                }
            }
            else{
            	 printf("\n Enter the Vehicle Number :");
                 scanf("%s",&regN);
			}


        } 
		else{
		    printf("\n Enter the Vehicle Number :");
            scanf("%s",&regN);
            
        }
    }
	else{
	   printf("\n Enter the Vehicle Number :");
       scanf("%s",&regN);
	}
    
    if(regN[c] != 0){
        int y;
        while (regN[c] != 0){
            y++;
            c++;
        }

        if (y == 6){
            if(c>=0 && c<=1){
                if(regN[c]>=0 && regN[c]<=64 || regN[c]>=91 && regN[c]<=127){
                   printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                }
            }

            if(c<=5){
               if(nic[r]>=0 && nic[r]<= 47 || nic[r]<=58 && nic[r]<=127){
                  printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                }
            }
            printf("\n\n\t ***Successfully Registered!!!*** \n\n");

        }else if(y==7){
            if(c<=2){
                if(regN[c]>=0 && regN[c]<=64 || regN[c]>=91 && regN[c]<=127){
                   printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                }
            }

            if(c<=6){
               if(nic[r]>=0 && nic[r]<= 47 || nic[r]<=58 && nic[r]<=127){
                  printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
                }
            }
            printf("\n\n\t ***Successfully Registered!!!*** \n\n");

        }else{
            printf("\n\n\t ***Invalid enter.... try again!!!*** \n\n");
        }



    }



    return 0;
}
