Ts=0.01;
t=10;
x=[1];
v=[1];
m=1;
b=1;
k=1;

for i=1:t
    v(i+1)=(((-b*v(i))-k*x(i)))*Ts/m+v(i);
    x(i+1)=v(i)*Ts+x(i);
end
t1=0:1;
plot(t1,v,t1,x)
