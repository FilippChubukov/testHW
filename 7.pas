var s:string;
     i,sum:integer;
     begin

        readln(s);
        for i:=1 to length(s) do
        begin
            if s[i]='(' then sum:=sum+1;
            if s[i]=')' then
            begin
             if sum>0 then sum:=sum-1
             else
             begin
             write('баланс не соблюден');
             halt;
             end;

            end;
        end;
   if sum=0 then write('баланс соблюден')
   else write('баланс не соблюден');
     end.
