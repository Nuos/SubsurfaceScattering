#ifndef RENDERABLEOBJECT_H
#define RENDERABLEOBJECT_H

#include <GL/glew.h>

class RenderableObject
{
public:
	RenderableObject();
	~RenderableObject();
	void render();

protected:
	void initialize();
	void destroy();

	GLuint vaoId_;
	GLuint vboVerticesId_;
	GLuint vboIndicesId_;

	GLenum primType_;
	int totalVertices_, totalIndices_;

	virtual unsigned int getTotalVertices() = 0;
	virtual unsigned int getTotalIndices() = 0;
	virtual GLenum getPrimitiveType() = 0;
	virtual void fillVertexBuffer(GLfloat* pBuffer) = 0;
	virtual void fillIndexBuffer(GLuint* pBuffer) = 0;
	
};

#endif // RENDERABLEOBJECT_H
