sym xy;
eq1=2*x+3*y==13;
eq2=3*x+2*y==12;
[A,B]=equationsToMatrix([eq1,eq2],[x,y]);
A=[2,3;3,2];
B=[13;12];
X=linsolve(A,B)