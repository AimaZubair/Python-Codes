a=input('Enter the Matrix');
no_row=size(a,1);
no_col=size(a,2);
for i=1:no_row
    for j=1:no_col
        if mod(a(i,j),2)==0
            display('Number is even')
            display(a(i,j))
        else
            display('Number is odd')
            display(a(i,j))
        end 
    end
end