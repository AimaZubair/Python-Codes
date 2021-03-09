year=30;
bal=zeros(1,year);
bal=1000;
interest_rate=1.08;
for i=1:30
    bal=bal*1.08;
    bal_var(i)=bal
end