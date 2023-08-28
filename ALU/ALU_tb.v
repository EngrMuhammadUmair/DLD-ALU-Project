`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:18:49 06/17/2020
// Design Name:   ALU
// Module Name:   C:/Users/M.UMER/Desktop/DLD Project/ALU/ALU_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [7:0] Operand1;
	reg [7:0] Operand2;
	reg [3:0] Opcode;

	// Outputs
	wire [15:0] Result;
	wire flagC;
	wire flagZ;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.Operand1(Operand1), 
		.Operand2(Operand2), 
		.Opcode(Opcode), 
		.Result(Result), 
		.flagC(flagC), 
		.flagZ(flagZ)
	);

	initial begin
		// Initialize Inputs
		Operand1 = 8'b1111111;
		Operand2 = 8'b1111111;
		Opcode = 4'b10;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

