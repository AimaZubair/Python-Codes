year=30;
bal_var=zeros(1,year);
bal=1000;
for i=1:length(year)
    bal=bal*1.08;
    bal_var=bal
end