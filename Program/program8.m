A=rand(10,10);
d=cell(1);
for r=1:5
    base=(r-1)*2;
    for c=1:5
        base1=(c-1)*2;
        b=A(base+(1:2),base1+(1:2));
        d{r,c}=b;
    end
end
display(d)