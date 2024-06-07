HAI 1.4
	CAN HAS STDIO?
	CAN HAS SOCKS?
	CAN HAS STRING?

	BTW Open file for reading
	I HAS A readFile ITZ I IZ STDIO'Z OPEN YR "read.dat" AN YR "r" MKAY
	I IZ STDIO'Z DIAF YR readFile MKAY
	O RLY?
		YA RLY
			BTW Failed to open file for reading
		NO WAI
			BTW Successfully opened the file for reading
	OIC

		VISIBLE "yay"

	BTW Read in from file (1024 bytes)
	I HAS A contents ITZ I IZ STDIO'Z LUK YR readFile AN YR 1024 MKAY

		VISIBLE contents

	BTW Open file for writing
	I HAS A writeFile ITZ I IZ STDIO'Z OPEN YR "filename" AN YR "w" MKAY

	BTW Write to file
	I IZ STDIO'Z SCRIBBEL YR writeFile AN YR "I'z writing to the file" MKAY

	BTW Close file
	I IZ STDIO'Z CLOSE YR writeFile MKAY
	I IZ STDIO'Z CLOSE YR readFile MKAY
KTHXBYE
