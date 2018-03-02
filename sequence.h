class Sequence
    {
    public:
        Sequence();
        
        void append(std::string word);
        std::string& operator[] (unsigned int index);
        
        unsigned int size() const;
        unsigned int get_capacity() const;
        std::string operator[] (unsigned int index) const;
        
    private:
        std::string data[10]; // maximum number of elements
        unsigned int used;
        unsigned int capacity;
    };
