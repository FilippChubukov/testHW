Var s,s1:string;
i,k,j,sum,p,l:integer;
begin
 readln(s);
 readln(s1);
 for i:=1 to length(s) do
      if s[i]=s1[1] then
        begin
        k:=0;
        p:=1;
        j:=i;
        l:=1;
        while p=1 do
            begin
            if s[j]=s1[l] then k:=k+1
            else p:=0;
            if l=length(s1) then break;
            j:=j+1;
            l:=l+1;
            
            end;
            
            
        if k=length(s1) then sum:=sum+1;    
        end;
writeln(sum);
end.
      