class Zero {
	public:
		 float FloatZero() {
            float x = 1;
            float result = 1;
            while (x > 0) {
                result = x;
                x = x / 2;
            }
			return result;
		 }

         double DoubleZero() {
             double x = 1;
             double result = 1;
             while (x > 0) {
                 result = x;
                 x = x / 2;
             }
             return result;
         }
};