a=[1,2,3;4,5,6;17,18,19];
b=[11,12,13;14,15,16;17,18,19];
u=[10,10,10];
c=zeros(3);
for i=1:3
    for j=1:3
        if(i==j)
            c(i,j)=a(i,j)+b(i,j)+u(i);
        else
            c(i,j)=a(i,j)+b(i,j);
        end
    end
end
display(c)