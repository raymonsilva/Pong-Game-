struct Button_State {
	bool is_down;
	bool changed;

};

enum {
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_W,
	BUTTON_S,

	BUTTON_COUNT, // Deve ser o ultimo item
};

struct Input {
	Button_State buttons[BUTTON_COUNT];
};