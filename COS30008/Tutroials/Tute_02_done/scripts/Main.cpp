//#include "Polygon.hpp" //this
#include "Polygon.cpp"
#include "Vector2D.cpp"
#include <fstream>
using namespace std;

//For this to work in the cmd type the .exe and then the data.txt

int main( int argc, char* argv[] )
{
    if ( argc < 2 )
    {
        cerr << "Arguments missing." << endl;
        cerr << "Usage: VectorOperations <filename>" << endl;

        // return failure, not enough arguments
        return 1;
    }

    // create text input stream connected to file named in argv[1]
    ifstream lInput( argv[1], ifstream::in );

	// operation can fail
	if ( !lInput.good() )
	{
		cerr << "Cannot open input file: " << argv[1] << endl;

		return 2;	// program failed (cannot open input)
	}

    Polygon lPolygon;

    lPolygon.readData( lInput );

    // close input file
    lInput.close();

    cout << "Data read:" << endl;

    for ( size_t i = 0; i < lPolygon.getNumberOfVertices(); i++ )
    {
        cout << "Vertex #" << i << ": " << lPolygon.getVertex( i ) << endl;
    }

    cout << "The perimeter of lPolygon is " << lPolygon.getPerimeter() << endl;

    cout << "Scale polygon by 3.2:" << endl;

    Polygon lScaled = lPolygon.scale( 3.2f );

    cout << "The perimeter of lScaled is " << lScaled.getPerimeter() << endl;

    float lFactor = lScaled.getPerimeter() / lPolygon.getPerimeter();

    cout << "Scale factor: " << lFactor << endl;

    // return success
	return 0;
}
