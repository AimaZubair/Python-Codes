c=0;
t=-9:9;
for i=-9:9;
    c=c+1;
    if i>=0;
      y=-3.*t.^2+5;
    else i<0; 
        y=3.*t.^2+5;
    end
end
display(y)