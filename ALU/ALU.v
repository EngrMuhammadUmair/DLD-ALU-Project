`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:12:42 06/16/2020 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(
    input [7:0] Operand1,
    input [7:0] Operand2,
    input [3:0] Opcode,
    output reg[15:0] Result = 16'b0,
	 output reg flagC = 1'b0,
    output reg flagZ	= 1'b0 
    );
	 
	 
always @(*)
    begin
        case(Opcode)
        4'b0000: // Addition
		  begin 
           Result = Operand1 + Operand2 ;
			  flagC  = Result[8];
			  flagZ  = (Result == 16'b0);
			end 
			  
        4'b0001: // Subtraction
        begin 
           Result = Operand1 - Operand2 ;
			  flagC  = Result[8];
			  flagZ  = (Result == 16'b0);
			end 
			  
        4'b0010: // Multiplication
         begin 
           Result = Operand1 * Operand2 ;
			  flagZ  = (Result == 16'b0);
			end 
			  
        4'b0011: // Division
          begin 
           Result = Operand1 / Operand2 ;
			  flagZ  = (Result == 16'b0);
			end 
			
        4'b0100: // Logical shift left
			 begin 
           Result =  Operand1<<1;
			  flagZ  = (Result == 16'b0);
			end  
			
         4'b0101: // Logical shift right
			  begin 
           Result = Operand1>>1 ;
			  flagZ  = (Result == 16'b0);
			end  
			
         4'b0110: // Rotate left
			 begin 
           Result = {Operand1[6:0],Operand1[7]} ;
			  flagZ  = (Result == 16'b0);
			 end  
			
         4'b0111: // Rotate right
			  begin 
           Result = {Operand1[7],Operand1[6:0]};
			  flagZ  = (Result == 16'b0);
			end  
			
          4'b1000: //  Logical and 
			   begin 
           Result = Operand1 & Operand2 ;
			  flagZ  = (Result == 16'b0);
			end 
			
          4'b1001: //  Logical or
			   begin 
           Result = Operand1 | Operand2 ;
			  flagZ  = (Result == 16'b0);
			end 
			
          4'b1010: //  Logical xor 
			 begin 
           Result = Operand1 ^ Operand2 ;
			  flagZ  = (Result == 16'b0);
			end 
			
          4'b1011: //  Logical nor
			   begin 
           Result = ~(Operand1 | Operand2) ;
			  flagZ  = (Result == 16'b0);
			end 
			
          4'b1100: // Logical nand 
			   begin 
           Result = ~(Operand1 & Operand2) ;
			  flagZ  = (Result == 16'b0);
			end 
			
          4'b1101: // Logical xnor
			   begin 
           Result = ~(Operand1 ^ Operand2) ;
			  flagZ  = (Result == 16'b0);
			end 
			
          4'b1110: // Greater comparison
		    begin 
           Result = (Operand1 > Operand2)?8'd1:8'd0 ;
			  flagZ  = (Result == 16'b0);
			 end 
			
          4'b1111: // Equal comparison    
				 begin 
           Result = (Operand1 == Operand2)?8'd1:8'd0 ;
			  flagZ  = (Result == 16'b0);
			end 
			
          default: 
				begin
	   		  Result = 16'b0;
				  flagC  = 1'b0;
				  flagZ  = 1'b0;
				 end
			  
        endcase
    end

endmodule
