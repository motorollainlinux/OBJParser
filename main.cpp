#include <string>
#include <stdio.h>
#include <map>

using std::string;

class Vertex{
    public:
    double x, y, z, w;
    Vertex(double x, double y, double z, double w) {
        this->x = x;
        this->y = y;
        this->z = z;
        this->w = w;
    }
    Vertex(double x, double y, double z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};
class VertexTexture{
    public:
    double u, v, w;
    VertexTexture(double u, double v, double w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
    VertexTexture(double u, double v) {
        this->u = u;
        this->v = v;
    }
};
class VertexNormal{
    public:
    double x, y, z;
    VertexNormal(double x, double y, double z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};
class Face{
    public:
    std::map<int, Vertex> VertexMap;
    std::map<int, VertexTexture> VertexTextureMap;
    std::map<int, VertexNormal> VertexNormalMap;
    Face(std::map<int, Vertex> VertexMap, std::map<int, VertexTexture> VertexTextureMap, std::map<int, VertexNormal> VertexNormalMap) {
        this->VertexMap = VertexMap;
        this->VertexTextureMap = VertexTextureMap;
        this->VertexNormalMap = VertexNormalMap;
    }
};
class OBJParser{
    private:
    string FileName;
    FILE *File;
    public:
    OBJParser(string FileName) {
        this->FileName = FileName;
        File = fopen(this->FileName.c_str(), "r");
    }
    void Pars() {
        char symbol;
        while(!feof(File)) {
            fscanf(File, "%c", symbol);
            if(symbol == '#') {
                continue;
            } else if(symbol == 'V') {
                fscanf(File, "%c", symbol);
                if(symbol == ' ') {
                    
                } else if(symbol == 'n') {
                    
                } else {
                    
                }
            } else {
                
            }
        }
    }
    
};
int main() {
    
    return 0;
}
