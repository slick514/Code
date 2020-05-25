with Ada.Text_IO;
with Ada.Strings.Unbounded;

--This is a comment

procedure Main is
package IO renames Ada.Text_IO;
package SU renames Ada.Strings.Unbounded;

begin
   declare
      input : SU.Unbounded_String;
   begin
      input := SU.To_Unbounded_String(IO.Get_Line);
      IO.Put_Line("Hello, World.");
      IO.Put_Line(SU.To_String(input));
   end;
end Main;
