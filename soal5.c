#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char input[2000];
char hehe[10];
char h3h3[1000];
char cari[20][20];
int haha,banyaknya[1000];
pthread_t tid[10];
typedef struct{
	char nama[20];
} nyari;
nyari orang[20];
typedef struct{
	char perkata[20];
} darifile;
darifile h2h2[2000];
int z,b=0,j=0,count=0;
void* caridong(void *arg){
	pthread_t id=pthread_self();
	for(haha=0;haha<=b;haha++){
                if(orang[0].nama==h2h2[haha].perkata){
                        banyaknya[count]=banyaknya[count]+1;
                	//printf("Berhasil masuk banyak kata%d \n",banyaknya[count]);
                }
		printf("%d",banyaknya[count]);
        }

	//printf("berhasil caridong\n");
	/*while(count<=j){
		if(pthread_equal(id,tid[count])){
			printf("berhasil pthread count %d\n",count);
			for(z=0;z<=b;z++){
				printf("berhasil masuk z %d loop\n",z);
				if(orang[count].nama==h2h2[z].perkata){
					banyaknya[count]=banyaknya[count]+1;
					printf("Berhasil masuk banyak kata%d \n",banyaknya[count]);
				}
			}
			printf("%s : %d\n",orang[count].nama,banyaknya[count]);
		}
		count++;
	}*/

}
int main(){
	int i=0,k=0,a=0,c=0;
	scanf("%s %[^\n]",&hehe,&input);
	for(i=0;i<=strlen(input);i++){
                //cari[j][i]=input[i];
               // orang[j].nama[k]=input[i];
//                printf("%c\n",orang[j].nama[k]);
               // k++;
                if(input[i]==32){
//                      printf("coba\n");
//                      pthread_create(&(tid[j]),NULL,&caridong,NULL);
                        j=j+1;
                        k=0;
			continue;
//                      printf("berhasil\n");
                }
		orang[j].nama[k]=input[i];
		k++;
        }
	FILE *novel;
        novel = fopen("novel.txt", "r");
        fscanf(novel,"%[^\n]",&h3h3);
	for(a=0;a<=strlen(h3h3);a++){
                //h2h2[b].perkata[c]=h3h3[a];
                //c++;
                if(h3h3[a]==32){
                        //pthread_create(&(tid[j]),NULL,&caridong,NULL);
                        b=b+1;
                        c=0;
			continue;
  //                      printf("berhasil\n");
                }
		if(h3h3[a]==44) continue;
		h2h2[b].perkata[c]=h3h3[a];
		c++;
        } 
	fclose(novel);

/*	for(haha=0;haha<=j;haha++){
		pthread_create(&(tid[haha]),NULL,&caridong,NULL);
	}
*/	for(haha=0;haha<=b;haha++){
//		printf("%s\n",orang[0].nama);
//		printf("%s ",h2h2[haha].perkata);
                if(strcmp(orang[0].nama,h2h2[haha].perkata)==0){
                        banyaknya[count]=banyaknya[count]+1;
                        printf("Berhasil masuk banyak kata%d \n",banyaknya[count]);
                }
                //printf("%d",banyaknya[count]);
        }
	return 0;
}