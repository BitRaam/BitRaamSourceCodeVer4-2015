#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

//
// client versioning and copyright year
//

// These need to be macros, as version.cpp's and bitraam-qt.rc's voodoo requires it
#define CLIENT_VERSION_MAJOR       0
#define CLIENT_VERSION_MINOR       9
#define CLIENT_VERSION_REVISION    1
#define CLIENT_VERSION_BUILD       0

// bitraam client version - intended for display purposes ONLY
#define BITRAAM_VERSION_MAJOR       4
#define BITRAAM_VERSION_MINOR       2
#define BITRAAM_VERSION_REVISION    5
#define BITRAAM_VERSION_BUILD       0

// Set to true for release, false for prerelease or test build
#define CLIENT_VERSION_IS_RELEASE  true

// Copyright year (2009-this)
// Todo: update this when changing our copyright comments in the source
#define COPYRIGHT_YEAR 2014

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

#endif // CLIENTVERSION_H
