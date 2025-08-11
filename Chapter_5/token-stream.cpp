// A file implementing the user-defined type Token_stream from Chapter 5.
#include <iostream>
#include <stdexcept>



void error (std::string s) {
    throw std::runtime_error{s};
}



class Token {
    public:
        char kind;
        double value;
        Token(char k) :kind{k}, value{0.0} {}
        Token (char k, double v) :kind{k}, value{v} {}
};



class Token_stream {
    public:
        // Get a Token.
        Token get();
        // Put a Token back.
        void putback(Token t);

    private:
        // Is there a Token in the buffer?
        bool full = false;
        // putback() saves its Token here.
        Token buffer;
};



// Member function to put its argument back into the Token_stream's buffer.
void Token_stream::putback(Token t) {
    if (full) {
        error("putbak() into a full buffer");
    }
    // Copy t to buffer.
    buffer = t;
    // Buffer is now full.
    full = true;
}



// Member function of Token_stream which returns an object of type Token.
Token Token_stream::get() {
    // Do we already have a Token ready?
    if (full) {
        // Remove Token from buffer.
        full = false;
        return buffer;
    }

    char ch = 0;
    // Recall that >> skips whitespace.
    if !(std::cin >> ch) {
        error("no input");
    }

    switch (ch) {
        // For "print".
        case ';':
        // For "quit"
        case 'q':
        case '(': case ')': case '+': case '-': case '*': case '/':
            // Let each character represent itself.
            return Token{ch};
        case '.':
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case  '7': case '8': case '9':
            {
                // Put digit back into the input stream.
                std::cin.putback(ch);
                double val = 0;
                // Read a floating-point number.
                std::cin >> val;
                // Let a character literal '8' represent "a number".
                return Token{'8', val};
            }
        default:
            error("Bad token");
    }
}
