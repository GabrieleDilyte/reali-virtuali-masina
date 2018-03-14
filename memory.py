class Memory:

	blocks = 256
	block_size = 256
	
	# 2 Segmentai supervizorinei, 14 Vartotojo
	memory = [[0 for i in range(blocks)] for j in range(block_size)]


	def read_memory(address):
		return memory[address[0]][address[1]]

	def write_data(address, data):
		memory[address[0]][address[1]] = data

	def write_memory_data(source, destination):
		memory[destination[0]][destination[1]] = memory[source[0]][source[1]]


	def paging_mechanism(PLR, address):
		new_address = [0, address[1]]
		new_address[0] = 16 * PLR + address[0]
		return new_address

		