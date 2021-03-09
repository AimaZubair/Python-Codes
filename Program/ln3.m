syms x;
syms f;
a=0;
b=1;
f=x^3+2*x^2-x+3;
int(f,a,b)
f=@(x) x^3+2*x^2-x+3;
h=(b-a);
s=h/2*(f(a)+f(b))