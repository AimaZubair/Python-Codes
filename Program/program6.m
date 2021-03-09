temp=0;
x=[3,2,5,1,10];
for j=1:n
    for i=1:n-1
        if x(i)>x(i+1)
            temp=x(i);
            x(i)=x(i+1);
            x(i+1)=temp;
        end
    end
end
display(x)