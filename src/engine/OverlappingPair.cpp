/********************************************************************************
* ReactPhysics3D physics library, http://code.google.com/p/reactphysics3d/      *
* Copyright (c) 2010-2013 Daniel Chappuis                                       *
*********************************************************************************
*                                                                               *
* This software is provided 'as-is', without any express or implied warranty.   *
* In no event will the authors be held liable for any damages arising from the  *
* use of this software.                                                         *
*                                                                               *
* Permission is granted to anyone to use this software for any purpose,         *
* including commercial applications, and to alter it and redistribute it        *
* freely, subject to the following restrictions:                                *
*                                                                               *
* 1. The origin of this software must not be misrepresented; you must not claim *
*    that you wrote the original software. If you use this software in a        *
*    product, an acknowledgment in the product documentation would be           *
*    appreciated but is not required.                                           *
*                                                                               *
* 2. Altered source versions must be plainly marked as such, and must not be    *
*    misrepresented as being the original software.                             *
*                                                                               *
* 3. This notice may not be removed or altered from any source distribution.    *
*                                                                               *
********************************************************************************/

// Libraries
#include "OverlappingPair.h"

using namespace reactphysics3d;


// Constructor
OverlappingPair::OverlappingPair(CollisionBody* body1, CollisionBody* body2,
                                 MemoryAllocator &memoryAllocator)
                : mBody1(body1), mBody2(body2), mContactManifold(body1, body2, memoryAllocator),
                  mCachedSeparatingAxis(1.0, 1.0, 1.0) {
    
}

// Destructor
OverlappingPair::~OverlappingPair() {
    
}                                  