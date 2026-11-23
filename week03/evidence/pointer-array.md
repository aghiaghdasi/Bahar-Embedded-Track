output:
d[0]:0  with pointer: 0  
d[1]:1  with pointer: 1  
d[2]:2  with pointer: 2  
d[3]:3  with pointer: 3  
d[4]:4  with pointer: 4  
d[5]:5  with pointer: 5  
d[6]:6  with pointer: 6  
d[7]:7  with pointer: 7  
after changes:
d[0]:27  with pointer: 27  
d[1]:1  with pointer: 1  
d[2]:66  with pointer: 66  
d[3]:71  with pointer: 71  
d[4]:4  with pointer: 4  
d[5]:5  with pointer: 5  
d[6]:6  with pointer: 6  
d[7]:7  with pointer: 7  
size of uint16_t : 2
d:c d+1:e
P:c  &d[2]:10  p+1:e  &d[3]:12


با استفاده از ادرسا d ها مقدارشون عوض شد. 
p+1 به اندازه سایز uint16 میره جلو چون با همین متغییر تعریف شده و چون سایزش دو بایته پس دوبایت میره جلو

size(data) چون اندازه ارایمون 8 عه و هر خونش 2 بایته کلا 16بایته
size(p) دوبایته سایز خود پی عه
توی توابع وقتی تو ورودیش ارایه تعریف میکنیم یه ادرس تعریف میشه به ارایه ای که قراره براش بفرستیم

d[8] توش ممکنه چیز رندوم باشه چون

همه خروجیا یکی بود با پیش بینیا