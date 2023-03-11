#include <string>
/**
 * トークン種別
*/
enum TokenType {
    TOK_IDENTIFER, // 識別子
    TOK_DIGIT, // 数値
    TOK_SYMBOL, // 記号
    TOK_INT, // int
    TOK_RETURN, // return
    TOK_EOF, // EOF
};

/**
 * 個別トークン格納クラス
*/
class Token{
private:
    TokenType type;
    std::string TokenString;
    int Number;
    int Line;
public:
    Token(std::string tokenString, TokenType type, int line) 
        : TokenString(tokenString), type(type), Line(line)
    {
        if (type == TOK_DIGIT) {
            Number = std::stoi(tokenString);
        }else{
            Number = 0x7fffffff;
        }
    }
    ~Token() {};
    TokenType getType() { return type; }
    std::string getTokenString() { return TokenString; }
    int getNumber() { return Number; }
    int getLine() { return Line; }
};