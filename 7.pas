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
             write('������ �� ��������');
             halt;
             end;

            end;
        end;
   if sum=0 then write('������ ��������')
   else write('������ �� ��������');
     end.
