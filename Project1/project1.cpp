/* This program simulates a simple billing system. 
It prompts user for quantities of items purchased from a list of 5 items.
It then uses these user inputs to compute the total cost of each item, the subtotal of each unit cost, a 7% tax, and the total bill.
It then displays this breakdown in a well-formatted table.

*/


#include <iostream>  // This library handles I/O operations
#include <iomanip>  // This library handles text formatting

// Constant Declaration
const float TV_PRICE = 400;
const float IPAD_PRICE = 220;
const float REMOTE_CTRL_PRICE = 35.2; 
const float TABLET_PRICE = 300;
const float HARD_DRIVE_PRICE = 150;
const float TAX_RATE = 0.07;
	

int main(){
	// Prompts user for quantity of TV
	int TV_qt;
	std::cout << "How many TVs were sold? ";
	std::cin >> TV_qt;
	
	// Prompts user for quantity of iPAD
	int iPAD_qt;
	std::cout << "How many iPADs were sold? ";
	std::cin >> iPAD_qt;
	
	// Prompts user for quantity of Remote Controllers
	int Remote_ctrl_qt;
	std::cout << "How many Remote Controllers were sold? ";
	std::cin >> Remote_ctrl_qt;
	
	// Prompts user for quantity of Tablets
	int Tablet_qt;
	std::cout << "How many Tablets were sold? ";
	std::cin >> Tablet_qt;
	
	// Prompts user for quantity of Hard Drives
	int Hard_drive_qt;
	std::cout << "How many Hard Drives were sold? ";
	std::cin >> Hard_drive_qt;
	
	// Computes the cost for each item
	float TV_cost = TV_PRICE * TV_qt; 
	float iPAD_cost = IPAD_PRICE * iPAD_qt;
	float Remote_ctrl_cost = REMOTE_CTRL_PRICE * Remote_ctrl_qt;
	float Tablet_cost = TABLET_PRICE * Tablet_qt;
	float Hard_drive_cost = HARD_DRIVE_PRICE * Hard_drive_qt;
	
	// Computes the subtotal of all items purchased
	float subtotal = TV_cost + iPAD_cost + Remote_ctrl_cost + Tablet_cost + Hard_drive_cost;
	
	// Computes the tax of the subtotal
	float tax = (subtotal * TAX_RATE);
	
	// Computes the total amount billed
	float total = subtotal + tax;
	
	std::cout << std::endl; // Prints a new line to better view the table that would be displayed below
	
	/* This block of code displays the table header. 
	The line of code below sets the format for the first cell of the table (Table[0][0])
	and this format is  copied across most part of the table code. 
	std::cout displays the output, std::left left aligns the output, 
	std::setw(12) sets the width of the cell to 12 (a value I had to come up with).
	std::setfill(' ') pads the cell with whitespace if the output doesn't fill up the cell.
	I would mention, the above are stream manipulators and only work for the next output, in this case "QTY"
	This format applies to my output "QTY" and then I display a pipe to signify the end of the column.
	
	This format works for just one cell, like I mentioned earlier*/
	  
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "QTY" << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "DESCRIPTION" << "|";      	                    
	std::cout << std::left << std::setw(12)  << std::setfill(' ') <<  "UNIT PRICE" << "|";	                            
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "TOTAL PRICE" << "|";                                    
	std::cout << std::endl;  // Moves to a newline to end the row
	
	/* This block displays an horizontal border between table header and other rows. 
	The only change here is I padded each cell with an hyphen*/
	
	std::cout << std::left << std::setw(12) << std::setfill('-') << "-" << "|";
	std::cout << std::left << std::setw(12) << std::setfill('-') << "-" << "|";      	                    	                            
	std::cout << std::left << std::setw(12) << std::setfill('-') << "-" << "|";
	std::cout << std::left << std::setw(12) << std::setfill('-') << "-" << "|";
	std::cout << std::left << std::setw(12) << std::setfill('-') << "-" << "|";
	std::cout << std::endl;	
	
	/* This block of code displays the TV row of the table.
	This block while using the same logic as both blocks before it for most part has some tweaks.
	In the first line of the block, I used std::right to right align the output, used a width of 2 and padded with 0.
	This essentially displays a zero before the item's quantity if less than 10, (1 as 01). The next line outputs the text, then
	uses the earlier format to fill the remaining 10 spaces to the right of the output  with whitespaces
	
	This format acts just fine provided the quantity is less than 100. This format is copied across the table code as well*/
	 
	std::cout << std::right << std::setw(2) << std::setfill('0');
	std::cout << TV_qt << std::setw(10) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "TV" << "|";
	
	/* Unlike the format for the first cell discussed, this uses a right align, additional manipulators std::fixed and setprecision(2)
	essentially outputs the price of each item to 2 significant figure.  This format is copied across the code as well*/
	      	                    
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << TV_PRICE << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";	                            
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << TV_cost << "|";	                                    
	std::cout << std::endl;
	
	// Displays iPAD row
	std::cout << std::right <<  std::setw(2) << std::setfill('0');
	std::cout << iPAD_qt << std::setw(10) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "iPAD" << "|";      	                    
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << IPAD_PRICE << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";                            
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << iPAD_cost << "|";	                                    
	std::cout << std::endl;
	
	// Displays Remote Controller row
	std::cout << std::right << std::setw(2) << std::setfill('0');
	std::cout << Remote_ctrl_qt << std::setw(10) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "REMOTE CTRLR" << "|";      	                    
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << REMOTE_CTRL_PRICE << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";	                            
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << Remote_ctrl_cost << "|";	                                    
	std::cout << std::endl;
	
	// Displays Tablet row
	std::cout << std::right <<  std::setw(2) << std::setfill('0');
	std::cout << Tablet_qt << std::setw(10) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "TABLET" << "|";	                    
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << TABLET_PRICE << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";	                            
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << Tablet_cost << "|";	                                    
	std::cout << std::endl;
	
	// Displaus Hard Drive row
	std::cout << std::right << std::setw(2) << std::setfill('0');
	std::cout << Hard_drive_qt << std::setw(10) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "HARD DRIVE" << "|";      
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << HARD_DRIVE_PRICE << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";	                            
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << Hard_drive_cost << "|";	                                    
	std::cout << std::endl;
	
	// Displays 8th row
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";      
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";
	std::cout << std::right << std::setw(12) << std::setfill(' ')<< " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill('-') << "-" << "|";                                    
	std::cout << std::endl;
	
	// Displays Subtotal row
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";      
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";	                    	                            
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "SUBTOTAL" << "|";
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << subtotal << "|";                                    
	std::cout << std::endl;
	
	// Displays Tax row
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";      
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "TAX" << "|";
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << tax << "|";                                    
	std::cout << std::endl;
	
	// Displays Total row
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";      
	std::cout << std::left << std::setw(12) << std::setfill(' ') << " " << "|";
	std::cout << std::left << std::setw(12) << std::setfill(' ') << "TOTAL" << "|";
	std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2) << total << "|";                                    
	std::cout << std::endl;
	
}
