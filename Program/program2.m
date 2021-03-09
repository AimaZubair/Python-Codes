t=input('No. of hours');
w=input('Per hours wages');
pay=t*w;
if t<=30
    pay=pay
else if t>30&&t<=35
        pay=pay+(t-30)*0.25*pay
    elseif t>35&&t<=40
        pay=pay+(t-30)*0.50*pay
    else t>40&&t<=45
        pay=pay+(t-30)*0.75*pay;
    end
end
