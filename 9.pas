var i,k,n,j :integer;
begin
    readln(n);
    If n>1 then
      begin
      writeln('1');
      for i:=2 to n-1 do
        begin
        k:=0;
        for j:=2 to i do
            if i mod j=0 then k:=k+1;
        if k=1 then writeln(i);
        end;
      end;
end.      
      
      
          
      
