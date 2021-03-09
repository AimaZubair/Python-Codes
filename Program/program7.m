a=[4,4];
b=cell(1);
for r=1:4
   base=(r-1)*2;
   for c=1:4b
   d=a(base+(1:2),c)
   b{r,c}=d;
   end 
end
