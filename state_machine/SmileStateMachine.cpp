class SmileStateMachine{
public:
    int operator()(char sym) {
        switch(cur_state) {
            case q_1:
                if(sym == ':') {
                    cur_state = q_2;
                }
                return cur_state;
            case q_2:
                if(sym == '-') {
                    cur_state = q_3;
                } else if(sym != ':') {
                    cur_state = q_1;
                }
                return cur_state;
            case q_3:
                if(sym == ')') {
                    cur_state = q_4;
                } else if(sym == ':') {
                    cur_state = q_2;
                } else {
                    cur_state = q_1;
                }
                return cur_state;
            case q_4:
                if(sym == ':') {
                    cur_state = q_2;
                } else if(sym != ')') {
                    cur_state = q_1;
                }
                return cur_state;
            default:
                return cur_state;
        }
    }
private:
    int cur_state = q_1;
    enum {
        q_1 = 1,
        q_2 = 2,
        q_3 = 3,
        q_4 = 4
    };
};

