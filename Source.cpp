#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <vector>
#include <ctime>
#include "glm/glm/glm.hpp"
#include "glm/glm/gtc/matrix_transform.hpp"
#include "glm/glm/gtc/type_ptr.hpp"

typedef glm::vec4 color;

color grey = { 0,0,0,.5 };
color navy = { 0,0,.5,1 };
color green = { 0,.5,0,1 };
color lightSteelBlue = { .690,.769,.871,1 };

color LightCoral = { 0.941000,0.502000,0.502000,1 };
color Salmon = { 0.980000,0.502000,0.447000,1 };
color DarkSalmon = { 0.914000,0.588000,0.478000,1 };
color LightSalmon = { 1.000000,0.627000,0.478000,1 };
color Crimson = { 0.863000,0.078000,0.235000,1 };
color Red = { 1.000000,0.000000,0.000000,1 };
color FireBrick = { 0.698000,0.133000,0.133000,1 };
color DarkRed = { 0.545000,0.000000,0.000000,1 };
color Pink = { 1.000000,0.753000,0.796000,1 };
color LightPink = { 1.000000,0.714000,0.757000,1 };
color HotPink = { 1.000000,0.412000,0.706000,1 };
color DeepPink = { 1.000000,0.078000,0.576000,1 };
color MediumVioletRed = { 0.780000,0.082000,0.522000,1 };
color PaleVioletRed = { 0.859000,0.439000,0.576000,1 };
color Coral = { 1.000000,0.498000,0.314000,1 };
color Tomato = { 1.000000,0.388000,0.278000,1 };
color OrangeRed = { 1.000000,0.271000,0.000000,1 };
color DarkOrange = { 1.000000,0.549000,0.000000,1 };
color Orange = { 1.000000,0.647000,0.000000,1 };
color Gold = { 1.000000,0.843000,0.000000,1 };
color Yellow = { 1.000000,1.000000,0.000000,.5 };
color LightYellow = { 1.000000,1.000000,0.878000,1 };
color LightGoldenrodYellow = { 0.980000,0.980000,0.824000,1 };
color PapayaWhip = { 1.000000,0.937000,0.835000,1 };
color Moccasin = { 1.000000,0.894000,0.710000,1 };
color PeachPu = { 1.000000,0.855000,0.725000,1 };
color PaleGoldenrod = { 0.933000,0.910000,0.667000,1 };
color Khaki = { 0.941000,0.902000,0.549000,1 };
color DarkKhaki = { 0.741000,0.718000,0.420000,1 };
color Lavender = { 0.902000,0.902000,0.980000,1 };
color Thistle = { 0.847000,0.749000,0.847000,1 };
color Plum = { 0.867000,0.627000,0.867000,1 };
color Violet = { 0.933000,0.510000,0.933000,1 };
color Orchid = { 0.855000,0.439000,0.839000,1 };
color Fuchsia = { 1.000000,0.000000,1.000000,1 };
color Magenta = { 1.000000,0.000000,1.000000,1 };
color MediumOrchid = { 0.729000,0.333000,0.827000,1 };
color MediumPurple = { 0.576000,0.439000,0.859000,1 };
color BlueViolet = { 0.541000,0.169000,0.886000,.3 };
color DarkViolet = { 0.580000,0.000000,0.827000,1 };
color DarkOrchid = { 0.600000,0.196000,0.800000,1 };
color DarkMagenta = { 0.545000,0.000000,0.545000,1 };
color Purple = { 0.502000,0.000000,0.502000,1 };
color Indigo = { 0.294000,0.000000,0.510000,1 };
color SlateBlue = { 0.416000,0.353000,0.804000,1 };
color DarkSlateBlue = { 0.282000,0.239000,0.545000,1 };
color GreenYellow = { 0.678000,1.000000,0.184000,1 };
color Chartreuse = { 0.498000,1.000000,0.000000,1 };
color LawnGreen = { 0.486000,0.988000,0.000000,1 };
color Lime = { 0.000000,1.000000,0.000000,1 };
color LimeGreen = { 0.196000,0.804000,0.196000,1 };
color PaleGreen = { 0.596000,0.984000,0.596000,1 };
color LightGreen = { 0.565000,0.933000,0.565000,1 };
color MediumSpringGreen = { 0.000000,0.980000,0.604000,1 };
color SpringGreen = { 0.000000,1.000000,0.498000,1 };
color MediumSeaGreen = { 0.235000,0.702000,0.443000,1 };
color SeaGreen = { 0.180000,0.545000,0.341000,1 };
color ForestGreen = { 0.133000,0.545000,0.133000,1 };
color Green = { 0.000000,0.502000,0.000000,1 };
color DarkGreen = { 0.000000,0.392000,0.000000,1 };
color YellowGreen = { 0.604000,0.804000,0.196000,1 };
color OliveDrab = { 0.420000,0.557000,0.137000,1 };
color Olive = { 0.502000,0.502000,0.000000,1 };
color DarkOliveGreen = { 0.333000,0.420000,0.184000,1 };
color MediumAquamarine = { 0.400000,0.804000,0.667000,1 };
color DarkSeaGreen = { 0.561000,0.737000,0.561000,1 };
color LightSeaGreen = { 0.125000,0.698000,0.667000,1 };
color DarkCyan = { 0.000000,0.545000,0.545000,1 };
color Teal = { 0.000000,0.502000,0.502000,1 };
color Aqua = { 0.000000,1.000000,1.000000,1 };
color Cyan = { 0.000000,1.000000,1.000000,1 };
color LightCyan = { 0.878000,1.000000,1.000000,1 };
color Aquamarine = { 0.498000,1.000000,0.831000,1 };
color Turquoise = { 0.251000,0.878000,0.816000,1 };
color MediumTurquoise = { 0.282000,0.820000,0.800000,1 };
color DarkTurquoise = { 0.000000,0.808000,0.820000,1 };
color CadetBlue = { 0.373000,0.620000,0.627000,1 };
color SteelBlue = { 0.275000,0.510000,0.706000,1 };
color LightSteelBlue = { 0.690000,0.769000,0.871000,1 };
color PowderBlue = { 0.690000,0.878000,0.902000,1 };
color LightBlue = { 0.678000,0.847000,0.902000,1 };
color SkyBlue = { 0.529000,0.808000,0.922000,1 };
color LightSkyBlue = { 0.529000,0.808000,0.980000,1 };
color DeepSkyBlue = { 0.000000,0.749000,1.000000,1 };
color DodgerBlue = { 0.118000,0.565000,1.000000,1 };
color CornlowerBlue = { 0.392000,0.584000,0.929000,1 };
color MediumSlateBlue = { 0.482000,0.408000,0.933000,1 };
color RoyalBlue = { 0.255000,0.412000,0.882000,1 };
color Blue = { 0.000000,0.000000,1.000000,1 };
color MediumBlue = { 0.000000,0.000000,0.804000,1 };
color DarkBlue = { 0.000000,0.000000,0.545000,1 };
color Navy = { 0.000000,0.000000,0.502000,1 };
color MidnightBlue = { 0.098000,0.098000,0.439000,1 };
color Cornsilk = { 1.000000,0.973000,0.863000,1 };
color Bisque = { 1.000000,0.894000,0.769000,1 };
color Wheat = { 0.961000,0.871000,0.702000,1 };
color BurlyWood = { 0.871000,0.722000,0.529000,1 };
color Tan = { 0.824000,0.706000,0.549000,1 };
color RosyBrown = { 0.737000,0.561000,0.561000,1 };
color SandyBrown = { 0.957000,0.643000,0.376000,1 };
color Goldenrod = { 0.855000,0.647000,0.125000,1 };
color DarkGoldenrod = { 0.722000,0.525000,0.043000,1 };
color Peru = { 0.804000,0.522000,0.247000,1 };
color Chocolate = { 0.824000,0.412000,0.118000,1 };
color SaddleBrown = { 0.545000,0.271000,0.075000,1 };
color Sienna = { 0.627000,0.322000,0.176000,1 };
color Brown = { 0.647000,0.165000,0.165000,1 };
color Maroon = { 0.502000,0.000000,0.000000,1 };
color Honeydew = { 0.941000,1.000000,0.941000,1 };
color MintCream = { 0.961000,1.000000,0.980000,1 };
color Azure = { 0.941000,1.000000,1.000000,1 };
color AliceBlue = { 0.941000,0.973000,1.000000,1 };
color GhostWhite = { 0.973000,0.973000,1.000000,1 };
color WhiteSmoke = { 0.961000,0.961000,0.961000,1 };
color Seashell = { 1.000000,0.961000,0.933000,1 };
color Beige = { 0.961000,0.961000,0.863000,1 };
color OldLace = { 0.992000,0.961000,0.902000,1 };
color FloralWhite = { 1.000000,0.980000,0.941000,1 };
color Ivory = { 1.000000,1.000000,0.941000,1 };
color AntiqueWhite = { 0.980000,0.922000,0.843000,1 };
color Linen = { 0.980000,0.941000,0.902000,1 };
color LavenderBlush = { 1.000000,0.941000,0.961000,1 };
color MistyRose = { 1.000000,0.894000,0.882000,1 };
color LightGrey = { 0.827000,0.827000,0.827000,1 };
color Silver = { 0.753000,0.753000,0.753000,1 };
color DarkGray = { 0.663000,0.663000,0.663000,1 };
color Gray = { 0.502000,0.502000,0.502000,1 };
color DimGray = { 0.412000,0.412000,0.412000,1 };
color LightSlateGray = { 0.467000,0.533000,0.600000,1 };
color SlateGray = { 0.439000,0.502000,0.565000,1 };
color DarkSlateGray = { 0.184000,0.310000,0.310000,1 };
color Black = { 0.000000,0.000000,0.000000,.4 };


struct Vertex {
	float x;
	float y;
	float z;
	float r;
	float g;
	float b;
	float a;


	//default constructor
	Vertex() {}

	Vertex(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vertex(float x, float y, float z, float r, float g, float b, float a) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->r = r;
		this->g = g;
		this->b = b;
		this->a = a;
	}

};

struct Faces {
	int a;
	int b;
	int c;

	Faces() {}

	Faces(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
};

class Mesh {
public:

	Mesh() {}

	Mesh(std::vector<Vertex> vertices, std::vector<Faces> faces) {
		this->vertices = vertices;
		this->faces = faces;
	}

	Faces setIndices(int a, int b, int c) {
		Faces temp(a,b,c);
		return temp;
	}

	void createSquare() {
		vertices.push_back(Vertex(0.5f, 0.5f, 0.0f));
		vertices.push_back(Vertex(0.5f, -0.5f, 0.0f));
		vertices.push_back(Vertex(-0.5f, -0.5f, 0.0f));
		vertices.push_back(Vertex(-0.5f, 0.5f, 0.0f));

		faces.push_back(setIndices(0, 1, 3));
		faces.push_back(setIndices(1, 2, 3));

	}

	void createLine() {
		srand(time(NULL));
		float x, y, z, r, g, b;
		for (int i = 0; i < 400; i++) {
			
			x = (float)(rand() % 100) / 100.0;
			y = (float)(rand() % 100) / 100.0;
			z = (float)(rand() % 100) / 100.0;
			r = (float)(rand() % 100) / 100.0;
			g = (float)(rand() % 100) / 100.0;
			b = (float)(rand() % 100) / 100.0;
	
			vertices.push_back(Vertex(x, y, z, SlateBlue.r, SlateBlue.g, SlateBlue.b, SlateBlue.a));
		}
	}

	void createIsoshpere() {
		float pos = (1.0 + sqrtf(5.0)) / 2.0;

		vertices.push_back(normalizeVertices(-1, pos, 0));
		vertices.push_back(normalizeVertices(1, pos, 0));
		vertices.push_back(normalizeVertices(-1, -pos, 0));
		vertices.push_back(normalizeVertices(1, -pos, 0));

		vertices.push_back(normalizeVertices(0, -1, pos));
		vertices.push_back(normalizeVertices(0, 1, pos));
		vertices.push_back(normalizeVertices(0, -1, -pos));
		vertices.push_back(normalizeVertices(0, 1, -pos));

		vertices.push_back(normalizeVertices(pos, 0, -1));
		vertices.push_back(normalizeVertices(pos, 0, 1));
		vertices.push_back(normalizeVertices(-pos, 0, -1));
		vertices.push_back(normalizeVertices(-pos, 0, 1));

		//Top
		faces.push_back(setIndices(1, 0, 5));
		faces.push_back(setIndices(1, 5, 9));
		faces.push_back(setIndices(1, 9, 8));
		faces.push_back(setIndices(1, 8, 7));
		faces.push_back(setIndices(1, 7, 0));

		//Bottom
		faces.push_back(setIndices(2, 11, 4));
		faces.push_back(setIndices(2, 4, 3));
		faces.push_back(setIndices(2, 3, 6));
		faces.push_back(setIndices(2, 6, 10));
		faces.push_back(setIndices(2, 10, 11));

		//Side
		faces.push_back(setIndices(0, 11, 5));
		faces.push_back(setIndices(5, 11, 4));
		faces.push_back(setIndices(5, 4, 9));
		faces.push_back(setIndices(9, 4, 3));
		faces.push_back(setIndices(9, 3, 8));
		faces.push_back(setIndices(8, 3, 6));
		faces.push_back(setIndices(8, 6, 7));
		faces.push_back(setIndices(7, 6, 10));
		faces.push_back(setIndices(0, 10, 11));
		faces.push_back(setIndices(7, 10, 0));
	
	}
	int getNumVertices() {
		return vertices.size();
	}
	int getNumFaces() {
		return faces.size();
	}

	std::vector<Vertex> & getVertices() {
		return vertices;
	}

	std::vector<Faces> & getFaces() {
		return faces;
	}
	

	//Variables
	std::vector<Vertex> vertices;
	std::vector<Faces> faces;
private:

	Vertex normalizeVertices(float x, float y, float z) {
		float length = sqrtf(x * x + y * y + z * z);
		Vertex temp;
		temp.x = x / length;
		temp.y = y / length;
		temp.z = z / length;
		return temp;
	}

};

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);
void key_callback(GLFWwindow* window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;
bool wireframe = true;

//Shader ID's
GLuint modelID, viewID, projectionID;

const char *vertexShaderSource = "#version 330 core\n"
"layout (location = 0) in vec3 position;\n"
"layout (location = 1) in vec4 color;\n"
"uniform mat4 model;\n"
"uniform mat4 view;\n"
"uniform mat4 projection;\n"
"out vec4 outcolor;\n"
"void main()\n"
"{\n"
"outcolor = color;\n"
"gl_Position = projection * view * model * vec4(position, 1.0);\n "
//"   gl_Position = vec4(position.x, position.y, position.z, 1.0);\n"
"}\0";
const char *fragmentShaderSource = "#version 330 core\n"
"out vec4 FragColor;\n"
"in vec4 outcolor;\n"
"void main()\n"
"{\n"
"   FragColor = outcolor;\n"
"}\n\0";

int main()
{
	// glfw: initialize and configure
	// ------------------------------
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
#endif

	// glfw window creation
	// --------------------
	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);


	// glad: load all OpenGL function pointers
	// ---------------------------------------
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}


	// build and compile our shader program
	// ------------------------------------
	// vertex shader
	int vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
	glCompileShader(vertexShader);
	// check for shader compile errors
	int success;
	char infoLog[512];
	glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
		std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
	}
	// fragment shader
	int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
	glCompileShader(fragmentShader);
	// check for shader compile errors
	glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
		std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
	}
	// link shaders
	int shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram, vertexShader);
	glAttachShader(shaderProgram, fragmentShader);
	glLinkProgram(shaderProgram);
	// check for linking errors
	glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
	if (!success) {
		glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
		std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
	}
	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

	//Setup link between Shaders and Uniforms
	modelID = glGetUniformLocation(shaderProgram, "model");
	viewID = glGetUniformLocation(shaderProgram, "view");
	projectionID = glGetUniformLocation(shaderProgram, "projection");


	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	glm::vec3 origin(0.0f, 0.0f, 0.0f);
	glm::vec3 x(0.5f, 0.5f, 0.0f);
	glm::vec3 y(0.5f, 0.0f, 0.5f);
	glm::vec3 z = cross(x, y);

	float vertices[] = {
		origin.x,origin.y,origin.z,  // top right
		x.x, x.y, x.z,
		origin.x,origin.y,origin.z,
		y.x, y.y, y.z,
		origin.x,origin.y,origin.z,
		z.x, z.y, z.z

	};

	float colors[] = {
	1.0f, 0.0f, 1.0f, .5f	//purple
	};

	std::cout << z.x << std::endl;

	unsigned int indices[] = {  // note that we start from 0!
		0, 1,
		2, 3,
		4, 5

	};


	Mesh * sphere = new Mesh();
	sphere->createIsoshpere();

	Mesh * line = new Mesh();
	line->createLine();

	float ray[] = {
		0.0, 0.5, 0.5,
		.50f, .50f, .50f };

	unsigned int VBO, VAO, VAO1, VBO1, EBO;
	unsigned int rayVAO, rayVBO, rayEBO;
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	glGenVertexArrays(1, &VAO1);
	glGenBuffers(1, &VBO1);
	//glGenBuffers(1, &EBO);

	//glGenVertexArrays(1, &rayVAO);
	//glGenBuffers(1, &rayVBO);
	//glGenBuffers(1, &rayEBO);

	//glBindVertexArray(rayVAO);

	//glBindBuffer(GL_ARRAY_BUFFER, rayVBO);
	//glBufferData(GL_ARRAY_BUFFER, 18 * sizeof(float), vertices, GL_STATIC_DRAW);

	//glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	//glEnableVertexAttribArray(0);

	//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rayEBO);
	//glBufferData(GL_ELEMENT_ARRAY_BUFFER, 6 *sizeof(int), indices, GL_STATIC_DRAW);
	//

	//// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	//glBindBuffer(GL_ARRAY_BUFFER, 0);

	//// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	//glBindVertexArray(VAO);

	//glBindBuffer(GL_ARRAY_BUFFER, VBO);
	//glBufferData(GL_ARRAY_BUFFER, sphere->getNumVertices() * sizeof(Vertex), &sphere->getVertices().front() , GL_STATIC_DRAW);

	//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	//glBufferData(GL_ELEMENT_ARRAY_BUFFER, sphere->getNumFaces() * sizeof(Faces), &sphere->getFaces().front(), GL_STATIC_DRAW);

	//glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	//glEnableVertexAttribArray(0);

	//// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	//glBindBuffer(GL_ARRAY_BUFFER, 0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

	//glBindVertexArray(VAO);

	//glBindBuffer(GL_ARRAY_BUFFER, VBO);
	//glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float) , ray, GL_STATIC_DRAW);

	//
	////glEnableVertexAttribArray(1);

	//GLbyte offset = 3 * sizeof(GLfloat);
	//glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	//glEnableVertexAttribArray(0);

	glBindVertexArray(VAO1);

	glBindBuffer(GL_ARRAY_BUFFER, VBO1);
	glBufferData(GL_ARRAY_BUFFER, 7 * line->getNumVertices() * sizeof(float), &line->getVertices().front(), GL_STATIC_DRAW);


	//glEnableVertexAttribArray(1);



	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 7 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);


	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 7 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(1);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	//glBindBuffer(GL_ARRAY_BUFFER, 0);


	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	//glBindVertexArray(0);


	// uncomment this call to draw in wireframe polygons.
	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	// render loop
	// -----------
	glDisable(GL_DEPTH_TEST);
	glEnable(GL_BLEND);
	glEnable(GL_POLYGON_SMOOTH);
	double lastTime = glfwGetTime();
	int nbFrames = 0;

	while (!glfwWindowShouldClose(window))
	{
		//time for rotations
		static float time;
		time = glfwGetTime();
		
			// input
			// -----
		
			processInput(window);
			key_callback(window);
			
			
				// render
				// ------
				glClearColor(0.8f, 0.8f, 0.8f, 1.0f);
				glClear(GL_COLOR_BUFFER_BIT);

				//Matrix Setup
				  //create view matrix
				glm::mat4 view = glm::lookAt(glm::vec3(0, 0, 3), glm::vec3(0, 0, 0), glm::vec3(0, 1, 0));

				//create projection matrix
				glm::mat4 proj = glm::perspective(3.14f / 3.f, (float)SCR_WIDTH / SCR_HEIGHT, 0.1f, -10.f);
				glm::mat4 model = glm::mat4(1.0f);


					model = glm::rotate(glm::mat4(), time, glm::vec3(0, 1, 0));

					//Update Matrices


					//update viewID uniform in the shader with new matrix
					glUniformMatrix4fv(viewID, 1, GL_FALSE, glm::value_ptr(view));

					//update ProjectionID uniform in the shader with new matrix
					glUniformMatrix4fv(projectionID, 1, GL_FALSE, glm::value_ptr(proj));

					glUniformMatrix4fv(modelID, 1, GL_FALSE, glm::value_ptr(model));


					// draw our first triangle
					glUseProgram(shaderProgram);

					glPointSize(2.f);

					//glBindVertexArray(VAO); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
					//glDrawArrays(GL_POINTS, 0, 2);
					//glBindVertexArray(0); // no need to unbind it every time 
					glBindVertexArray(VAO1); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
					glDrawArrays(GL_LINES, 0, line->getNumVertices());
					glBindVertexArray(0);

					// glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)

					// -------------------------------------------------------------------------------
					glfwSwapBuffers(window);
					glfwPollEvents();
		
		
	}

	// optional: de-allocate all resources once they've outlived their purpose:
	// ------------------------------------------------------------------------
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);

	// glfw: terminate, clearing all previously allocated GLFW resources.
	// ------------------------------------------------------------------
	glfwTerminate();
	return 0;

}

// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow *window)
{	
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
	

		
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	// make sure the viewport matches the new window dimensions; note that width and 
	// height will be significantly larger than specified on retina displays.
	glViewport(0, 0, width, height);
}

void key_callback(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
		wireframe = !wireframe;
}