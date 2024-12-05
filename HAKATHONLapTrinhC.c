#include<stdio.h>
int main (){
	int chon,n,i,j,dem=0,max1,max2,temp,add,del,l,r,a,m,sapXep=0;
	while (1){
		int chan=0,le=0,timThay=0,c=0,d=0;
		int arr[1000];
		printf("------MENU------\n");
		printf("1. Nhap so phan tu va gia tri cho mang.\n");	
		printf("2. In ra gia tri cac phan tu trong mang.\n");	
		printf("3. Dem so luong phan tu chan le trong mang.\n");
		printf("4. Tim gia tri lon thu hai trong mang.\n");	
		printf("5. Them mot phan tu vao dau mang.\n");
		printf("6. Xoa phan tu.\n");
		printf("7. Sap xep mang theo thu tu giam dan. (Insertion sort)\n");	
		printf("8. tim phan tu co trong mang. (Binary search)\n");
		printf("9. In ra toan bo so nguyen to trong mang da duoc binh phuong.\n");
		printf("10. Sap xep mang theo thu tu giam dan. (Bubble sort)\n");	
		printf("11. Thoat\n\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&chon);
		if (chon==1){
			dem++;
			printf("Nhap so luong phan tu: ");
			scanf("%d",&n);
			for (i=0;i<n;i++){
				printf("Nhap vao phan tu thu arr[%d]: ",i);
				scanf("%d",&arr[i]);
			}
		}
		if(chon==2){
			if (dem==0){
				printf("Hay nhap mang truoc khi chon\n");
				continue;
			}
			for(i=0;i<n;i++){
				printf("arr[%d] = %d,  ",i,arr[i]);
			}
			printf("\n");
		}
		if(chon==3){
			if (dem==0){
				printf("Hay nhap mang truoc khi chon\n");
				continue;
			}
			for(i=0;i<n;i++){
				if(arr[i]%2==0){
					chan++;
				} else{
					le++;
				}
			}
			printf("So phan tu chan la: %d\n",chan);
			printf("So phan tu le la: %d\n",le);
		}
		if(chon==4){
			if (dem==0){
				printf("Hay nhap mang truoc khi chon\n");
				continue;
			}
			max1=arr[0];
			for(i=1;i<n;i++){
				if(arr[i]>max1){
					max1=arr[i];
				}
			}
			max2=arr[0];
			for(i=1;i<n;i++){
				if(arr[i]==max1){
					continue;
				}
				if(arr[i]>max2){
					max2=arr[i];
				}
			}
			printf("So lon thu hai trong mang la %d \n",max2);
		}
		if(chon==5){
			if (dem==0){
				printf("Hay nhap mang truoc khi chon\n");
				continue;
			}
			printf("Phan tu ban muon them: ");
			scanf("%d",&add);
			for(i=n+1;i>=0;i--){
				arr[i+1]=arr[i];
			}
			arr[0]=add;
			n++;
		}
		if(chon==6){
			if (dem==0){
				printf("Hay nhap mang truoc khi chon\n");
				continue;
			}
			printf("Nhap vi tri muon xoa: ");
			scanf("%d",&del);
			for(i=del;i<n;i++){
				arr[i]=arr[i+1];
			}
			n--;
		}
		if(chon==7){
			if (dem==0){
				printf("Hay nhap mang truoc khi chon\n");
				continue;
			}
			for (i=1;i<n;i++){
				temp=arr[i];
				j=i-1;
				while (j>=0&&arr[j]<temp){
					arr[j+1]=arr[j];
					j--;
				}
				arr[j+1]=temp;
			}
			sapXep++;
		}
		if(chon==8){
			if (dem==0){
				printf("Hay nhap mang truoc khi chon\n");
				continue;
			}
			if(sapXep==0){
				printf("Hay sap xep mang truoc khi tim\n");
				continue;
			}
			printf("Moi ban nhap so nguyen: ");
			scanf("%d",&a);
			l=0;
			r=n;
			while (l<=r){
				m=(r+l)/2;
		        if (arr[m]==a){
					printf("Phan tu %d co ton tai trong mang",a);
					timThay++;
					break;
				} else if (arr[m]<a){
					r=m-1;
				} else {
					l=m+1;
				}
			}
			if(timThay==0){
				printf("Phan tu %d khong ton tai trong mang",a);
			}	
		}
		if(chon==9){
			if (dem==0){
				printf("Hay nhap mang truoc khi chon\n");
				continue;
			}
			for(i=0;i<n;i++){
				c=0;
				if (arr[i]<2){
					continue;
				}
				for(j=2;j<arr[i];j++){
					if(arr[i]%j==0){
						c++;
					}
				}
				if(c==0){
					printf("%d ",arr[i]*arr[i]);
					d++;
				}
			}
			if(d==0){
				printf("Khong co so nguyen to trong mang\n");
			}
		}
		if(chon==10){
			if (dem==0){
				printf("Hay nhap mang truoc khi chon\n");
				continue;
			}
			for (i=0;i<n-1;i++){
				for (j=0;j<n-1-i;j++){
					if(arr[j]<arr[j+1]){
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			sapXep++;
		}
		if(chon==11){
			break;
		}
	}
	
	return 0;
}
