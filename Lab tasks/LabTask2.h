namespace shapes{
    //public and private declarations for square
    class Square{
        private:
        float sideLength;
        public:

        Square();
        Square(float sideLength);

        void SetsideLength(float sideLength);
        float GetsideLength();

        ~Square();
    };
    //public and private declarations for triangle
    class Triangle{
        private:
        int base;
        int height;

        public:
        Triangle();
        Triangle(int base, int height);

        void Setbase(int base);
        int Getbase();

        void Setheight(int height);
        int Getheight();

        ~Triangle();
    };
    //public and private declarations for circle
    class Circle{
        private:
        double radius;

        public:
        Circle();
        Circle(double radius);

        void Setradius(double radius);
        double Getradius();

        ~Circle();
    };
    class Area {
        public:
        static float calculateAreaSquare(Square area);

        static int calculateAreaTriangle(Triangle area);

        static double calculateAreaCircle(Circle area);
    };
};