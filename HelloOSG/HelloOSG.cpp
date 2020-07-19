// HelloOSG.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>

#include <osgDB/ReadFile>
#include <osgViewer/Viewer>


int main()
{
	std::string osgPath = "cow.osg";
	osgDB::Options * a = new osgDB::Options(std::string("noTriStripPolygons"));
	osg::Node * node = new osg::Node;
	node = osgDB::readNodeFile(osgPath, a);

	osgViewer::Viewer viewer;
	viewer.setSceneData(node);
	return viewer.run();
}
