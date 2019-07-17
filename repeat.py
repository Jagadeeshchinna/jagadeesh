n = int(input())
l=list(map(int,input().split()))
a=[]
for i in l:
    if(l.count(i)>=2 and i not in a):
        a.append(i)
if(len(a)==0):
    print("unique")
else:
    for i in a:
      print(i,end=" ")
        
