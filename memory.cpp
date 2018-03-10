class Memory{

	private:
		int8_t blocks;
		int8_t size;
		int8_t memory[][];

	public:
		Memory(int8_t blocks, int8_t size){};



};

Memory::Memory(int8_t blocks, int8_t size){
	this -> blocks = blocks;
	this -> size = size;
	memory = new int8_t[blocks][size];

// ar butina turet intus ar galima int8_t
	for(int8_t i = 0; i < 256; i++){
		for(int8_t j = 0; j < 256; j++){
			memory[i][j] = 0;
		}
	}

}

int8_t Memory::read_memory(int8_t address[]){
	return memory[(address[0])][(address[1])];
}

void Memory::write(int8_t address[], int8_t data){
	memory[(address[0])][(address[1])] = data;

}

void Memory::write(int8_t source[], int8_t destination[]){
	memory[(destination[0])][(destination[1])] = memory[(source[0])][(source[1])];
}

int16_t Memory::paging_mechanism(int8_t PLR, int8_t address[]){
	int8_t new_address[] = {0, address[1]};
	new_address[0] = (int8_t)(16 * PLR + address[0]);
	return new_address;

}



