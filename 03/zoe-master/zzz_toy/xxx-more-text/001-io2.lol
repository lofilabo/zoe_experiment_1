HAI 1.4
	CAN HAS STDIO?

	BTW Open file for reading
	I HAS A readFile01 ITZ I IZ STDIO'Z OPEN YR "101read.txt" AN YR "r" MKAY
	I HAS A readFile02 ITZ I IZ STDIO'Z OPEN YR "102read.txt" AN YR "r" MKAY
	I HAS A readFile03 ITZ I IZ STDIO'Z OPEN YR "103read.txt" AN YR "r" MKAY
	

	BTW Read in from file (1024 bytes)
	I HAS A contents01 ITZ I IZ STDIO'Z LUK YR readFile01 AN YR 1024 MKAY
	I HAS A contents02 ITZ I IZ STDIO'Z LUK YR readFile02 AN YR 1024 MKAY
	I HAS A contents03 ITZ I IZ STDIO'Z LUK YR readFile03 AN YR 1024 MKAY
	

	BTW First: print everything separately.
	BTW VISIBLE contents01 AN contents02 AN contents03
	
	BTW Second: combine into a single
	I HAS A outtt ITZ ""
	outtt R SMOOSH contents01 AN contents02 AN contents03 MKAY
	VISIBLE outtt


	BTW Close file
	I IZ STDIO'Z CLOSE YR readFile01 MKAY
	I IZ STDIO'Z CLOSE YR readFile02 MKAY
	I IZ STDIO'Z CLOSE YR readFile03 MKAY
KTHXBYE
