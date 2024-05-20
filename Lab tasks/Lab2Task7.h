namespace shapes{
    //public and private declarations for square
    class Square{
        private:
        float sideLength;

        public:

        Square(float sideLength);

        void SetsideLength(float sideLength);
        float GetsideLength();
        Square();

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

        void Setbase(int sideBase);
        int Getbase();

        void Setheight(int sideHeight);
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
        static float calculateAreaSquare();

        static int calculateAreaTriangle();

        static double calculateAreaCircle();
    };
};