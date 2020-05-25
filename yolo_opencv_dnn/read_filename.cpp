//
// Created by wzy on 5/18/20.
//
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <errno.h>
using namespace std;

int main(int argc, char** argv) {
    DIR *dp;
    struct dirent *dirp;
    vector<string> imglist;

    dp = opendir("/home/wzy/projects/darknet/win2ubuntu/yolo_obj");
    cout << "have open dir" << endl;

while((dirp = readdir(dp)) != nullptr)
{
    dirp->d_name;
    imglist.push_back(dirp->d_name);
}
for(int i = 2; i<imglist.size();i++) {
    // i = 0 means .
    // i = 1 means ..
    // from i = 2 means filename in dir
    cout << imglist[i] << endl;
}
    return 0;
}
