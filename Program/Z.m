%z=3*x^2+(x^2+y^2)^1/2+exp(log(x))
function z=Z(x,y)
z=3*x.^2+sqrt(x.^2+y.^2)+exp(log(x));
end