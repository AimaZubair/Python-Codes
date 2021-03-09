Ts=0.001;
Tstop=5;
v1=10;
v2=12;

for i=1:Tstop/Ts
    v1(i+1)=Ts*(sqrt(abs(1-vl(i)))-sqrt(abs(v1(i)-v2(i))))+v1(i);
    v2(i+1)=Ts*(sqrt(abs(v1(i)-v2(i)))-sqrt(abs(v2(i))))+v1(i);
end
t=0:Ts:Tstop;
plot(t,v1,t,v2)
