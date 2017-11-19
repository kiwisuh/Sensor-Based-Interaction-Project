#pragma once
#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
#include "cinder/ImageIO.h"
#include "cinder/gl/Texture.h"
#include "cinder/TriMesh.h"
#include "cinder/ObjLoader.h"
#include "cinder/gl/Vbo.h"
#include "cinder/audio/Context.h"
#include "cinder/audio/SamplePlayerNode.h"

#include "ProjectConstants.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class AssetManager
{
public:

	/*typedef enum {
	TEX_BALL,
	TEX_CRATE,
	TEX_BUBBLE
	NUM_TEXTURES
	} ASSET_TEXTURE;

	typedef enum {
	OBJ_BALL,
	OBJ_CRATE,
	OBJ_BUBBLE
	NUM_OBJS
	} ASSET_OBJ;*/

	/*typedef enum {
		SONG_JAMMING,
		NUM_AUDIOS
	} ASSET_AUDIO;*/

	static AssetManager * getInstance()
	{
		static AssetManager instance;
		return &instance;
	}

	void setup()
	{
		//load textures
		mTextures.clear();
		mTextures.push_back(gl::Texture(loadImage(loadAsset(ProjectConstants::ASSET_LOC_TEXTURE_BALL))));
		mTextures.push_back(gl::Texture(loadImage(loadAsset(ProjectConstants::ASSET_LOC_TEXTURE_CRATE))));
		mTextures.push_back(gl::Texture(loadImage(loadAsset(ProjectConstants::ASSET_LOC_TEXTURE_BUBBLE))));

		//load meshes
		mMeshes.clear();
		TriMesh mesh1;
		ObjLoader loader1(loadAsset(ProjectConstants::ASSET_LOC_OBJ_BALL));
		loader1.load(&mesh1);
		mMeshes.push_back(gl::VboMesh(mesh1));

		TriMesh mesh2;
		ObjLoader loader2(loadAsset(ProjectConstants::ASSET_LOC_OBJ_CRATE));
		loader2.load(&mesh2);
		mMeshes.push_back(gl::VboMesh(mesh2));

		TriMesh mesh3;
		ObjLoader loader3(loadAsset(ProjectConstants::ASSET_LOC_OBJ_BUBBLE));
		loader3.load(&mesh3);
		mMeshes.push_back(gl::VboMesh(mesh3));
	}


	const gl::Texture * getTexture(const ASSET_TEXTURE index)
	{
		return &mTextures.at(index);
	}

	const gl::VboMesh * getMesh(const ASSET_OBJ index)
	{
		return &mMeshes.at(index);
	}


private:
	vector<gl::Texture> mTextures;
	vector<gl::VboMesh> mMeshes;

	AssetManager(){}
};