a = input('Nhap so nguyen a: ');
b = input('Nhap so nguyen b: ');
x2 = 1; x1 = 0; y2 = 0; y1 = 1;
if b == 0
    d = a; x = x2; y = y2;
end

while b > 0 
    q = floor(a/b);
    r = a - q*b;
    x = x2 - q*x1;
    y = y2 - q*y1;
    a = b; b = r; 
    x2 = x1; y2 = y1;
end
d = a; x = x2; y = y2;
disp('d = '); disp(d);
disp('x = '); disp(x);
disp('y = '); disp(y);
    