//
//  CubicTexture.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__CubicTexture__
#define __JLIGameEngineTest__CubicTexture__

#include "Texture.h"
#include "AbstractBuilder.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) CubicTexture:
	class CubicTexture:
    public Texture
    {
        friend class WorldFactory;
    public:
        CubicTexture();
        CubicTexture(const AbstractBuilder&);
        CubicTexture(const CubicTexture &);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~CubicTexture();
        CubicTexture &operator=(const CubicTexture &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for CubicTexture
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__CubicTexture__) */