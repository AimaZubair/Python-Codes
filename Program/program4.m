r=3;
c=2;
a=zeros(3,2);
for i=1:r
    for j=1:c
        a(i,j)=i.^2;
    end
end
display(a)