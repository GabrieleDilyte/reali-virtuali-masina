class CPU:
	USER = 0
	SUPERVISOR = 1
	
	MODE = SUPERVISOR

	# Registrai tik realiai
	TI = 40

	# Ar galime PLR tureti 1 baito? Koks skirtumas kai 1 arba 2 baitai?
	PLR = 1


	# Ir virtualios registrai
	IC = [0, 0]

	# Ar SF turi tureti kazkokia defaultine reiksme? 
	SF = 0
	R = [0, 0, 0, 0] 
# Kokia turetu buti stack pointerio reiksme? Kaip mes ta suzinom?
	SP = [0, 0]

# TODO:
	# def reset_CPU():
	# 	TI = 40
	# 	IC[0] = 0
	# 	IC[1] = 0
	# 	PLR = 1
	# 	R[0] = 0
	# 	R[1] = 0
	# 	R[2] = 0
	# 	R[3] = 0
	# 	R[4] = 0
	#	SP[0] = 0
	#	SP[1] = 0



	def ADD():


	def SUB():


	def MUL();


	def DIV():


# Kaip veikia cmpr komanda? 
	def CMPR():


	def PRINT():


	def PRINTI():


	def READ():



	def READi():


	def SETR():


	def PULLR():



	def JMP():


	def HALT():


	def INT():














