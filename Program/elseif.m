t=input('No. of hours');
w=input('Per hours wages');
pay=t*w;
if t<=30
    pay=pay
else
    pay=pay+(t-30)*0.25*t*w
end