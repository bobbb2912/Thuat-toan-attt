%thuat toan euclid tim uoc chung lon nhat

a = input('nhap a: ');
b = input('nhap b: ');
while b>0
    r = mod(a,b);
    a = b; b = r;
end
disp('DCG = ')
disp(a)
