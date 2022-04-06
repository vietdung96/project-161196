#include <stdio.h>
int main(){
	int a,b;
	printf("nhap ngay :");
	scanf("%d",&a);
	printf("nhap thang :");
	scanf("%d",&b);
	if(a>=1 && a<=31 && b>=1 && b<=12 ){
		int r,p;
		if(b==1){
			r = a %7;
			p= r+1;
			if(r==0){
				printf ("hom nay la chu nhat");
			}else{
				printf ("hom nay la thu :%d",p)	;			
			}
		}else{
			if(b==2 && a<=28){
				r=(31+a) %7;
				p =r +1;
				if(r==0){
					printf("hom nay la chu nhat");
				}else{
					printf("hom nay la thu : %d",p);
				}
			}else{
				if(b==3 ){
					r=(59+a) %7;
					p = r+1;
					if(r==0){
						printf("hom nay la chu nhat");
					}else{
						printf("hom nay la thu :%d",p);
					}
				}else{
					if(b==4 && a<=30){
						r=(90+a) %7;
						p = r+1;
						if(r==0){
							printf("hom nay la chu nhat");
						}else{
							printf("hom nay la thu : %d",p);
							
						}
					}else{
						if(b==5){
							r=(120+a) %7;
							p = r+1;
							if (r==0){
								printf("hom nay la chu nhat");
								
							}else{
								printf("hom nay la thu : %d",p);
							}
						}else{
							if(b==6 && a<=30 ){
								r=(151+a) %7;
								p = r+1;
								if(r==0){
									printf("hom nay la chu nhat");
								
								}else{
									printf("hom nay la thu : %d",p);
								}
							}else{
								if(b==7){
									r=(181+a) %7;
									p = r+1;
									if(r==0){
										printf("hom nay la chu nhat");
										
									}else{
										printf("hom nay la thu : %d",p);
									}
								}else{
									if(b==8){
										r=(213+a) %7;
										p = r+1;
										if(r==0){
											printf("hom nay la chu nhat");											
										}else{
											printf("hom nay la thu : %d",p);
										}
									}else{
										if(b==9 &&a<=30){
											r=(243+a) %7;
											p = r+1;
											if(r==0){
												printf("hom nay la chu nhat");
											}else{
												printf("hom nay la thu : %d",p);
											}
										}else{
											if(b==10){
												r=(273+a) %7;
												p = r+1;
												if(r==0){
													printf("hom nay la chu nhat");
												}else{
													printf("hom nay la thu : %d",p);
												}
											}else{
												if(b==11 && a<=30){
													r=(304+a) %7;
													p= r+1;
													if(r==0){
														printf("hom nay la chu nhat");
														
													}else{
														printf("hom nay la thu : %d",p);
													}
												}else{
													if(b==12){
														r =(334+a) %7;
														p = r+1;
														if(r==0){
															printf("hom nay la chu nhat");
														}else{
															printf("hom nay la thu : %d",p);
														}
													}else{
														printf("day khong phai ngay trong nam");
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}else{
		printf("day khong phai ngay trong nam");
	}
}
