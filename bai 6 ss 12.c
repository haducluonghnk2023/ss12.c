#include<stdio.h>
int main(){
	int n;
	int index,fix,numbers,del,temp,findNumber;
	int left=0;
	int right=n-1;
	int count=0;
	int arr[100];
	int choice,select;
	do{
		printf("***********MENU**********\n");
		printf("1.nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.in ra gia tri cac phan tu dang quan li\n");
		printf("3.them mot phan tu vao vi tri chi dinh\n");
		printf("4.sua mot phan tu o vi tri chi dinh\n");
		printf("5.xoa mot phan tu o vi tri chi dinh\n");
		printf("6.sap xep cac phan tu\n");
		printf("7.giam dan\n");
		printf("8.tang dan\n");
		printf("9.tim kiem phan tu nhap vao\n");
		printf("10.thoat");
		printf("lua chon cua ban :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu muon nhap:");
				scanf("%d",&n);
				printf("Cac phan tu cua mang:\n");
				for(int i=0;i<n;i++){
					printf("arr[%d]=",i);
					scanf("%d",&arr[i]);
				}
				break;
				break;
			case 2:
				printf("Cac phan tu cua mang:\n");
				for(int i=0;i<n;i++){
					printf("arr[%d]=%d\n",i,arr[i]);
				}
				break;
			case 3:
				printf("Phan tu muon them:");
				scanf("%d",&arr);
				printf("Vi tri muon them:");
				scanf("%d",&index);
				n++;
				for(int i=n;i>index;i--){
					arr[i]=arr[i-1];
				}
				arr[index]=arr;
				for(int i=0;i<n;i++){
					printf("arr[%d]=%d\n",i,arr[i]);
				}
				break;
			case 4:
				printf("Nhap vi tri muon sua:");
				scanf("%d",&fix);
				printf("Nhap so muon doi:");
				scanf("%d",&numbers);
				arr[fix]=numbers;
				break;
			case 5:
				printf("Nhap vi tri muon xoa:");
				scanf("%d",&del);
				for(int i=del;i<n;i++){
					arr[i]=arr[i+1];
				}
				n--;
				break;
			case 6:
				printf("Sap xep cac phan tu:\n");
				printf("7. Giam dan:\n");
				printf("8. Tang dan:\n");
				printf("Lua chon:");
				scanf("%d",&select);
				if(select==7){
					for(int i=0;i<n;i++){
						for(int j=i+1;j<n;j++){
							if(arr[i]<arr[j]){
								temp=arr[i];
								arr[i]=arr[j];
								arr[j]=temp;
								}
							}
						}
						printf("Sap xep:");
						for(int i=0;i<n;i++){
							printf("%d\t",arr[i]);
						}
					}else if(select==8){
						for(int i=0;i<n;i++){
							for(int j=i+1;j<n;j++){
								if(arr[i]>arr[j]){
									temp=arr[i];
									arr[i]=arr[j];
									arr[j]=temp;
								}
							}
						}
						printf("Sap xep:");
						for(int i=0;i<n;i++){
							printf("%d\t",arr[i]);
						}
					}else{
						break;
					}
				break;
			
			case 9:
				{
					for(int i=0;i<n;i++){
						if(arr[i]<arr[i+1]){
							printf("Nhap gia tri tim kiem:");
							scanf("%d",&findNumber);
							int mid;
							while(left<=right){
							mid = (left+right)/2;
							if(arr[mid] == findNumber){
								break;
							}else if(arr[mid]<findNumber){
								left=mid+1;
							}else{
								right=mid-1;
							}
							}
						printf("Phan tu arr[%d] = %d la gia tri tim kiem.",mid,arr[mid]);
						}else{
							printf("Nhap gia tri tim kiem:");
							scanf("%d",&findNumber);
							for(int i=0;i<n;i++){
								if(arr[i]==findNumber){
									printf("Phan tu arr[%d] = %d la gia tri tim kiem\n",i,arr[i]);
								}else{
									count++;
								}
						}
						if(count==n){
							printf("Khong co gia tri duoc tim kiem\n");
						}
							}
						}
					
				}
				break;
			case 10:
				exit(0);
				default:
					printf("vui long ban chon tu 1-9\n");
				break;
			
		}
		
	}while(0<choice<6 ||6<choice<10 ||choice != 6);
}
