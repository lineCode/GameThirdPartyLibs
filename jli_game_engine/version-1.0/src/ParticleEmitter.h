//
//  ParticleEmitter.h
//  JLIGameEngineTest
//
//  Created by James Folk on 11/22/14.
//  Copyright (c) 2014 James Folk. All rights reserved.
//

#ifndef __JLIGameEngineTest__ParticleEmitter__
#define __JLIGameEngineTest__ParticleEmitter__

#include "AbstractFactoryObject.h"
#include "AbstractBuilder.h"

namespace jli
{
//    ATTRIBUTE_ALIGNED16(class) ParticleEmitter:
    class ParticleEmitter:
    public AbstractFactoryObject
    {
        friend class WorldFactory;
    public:
        ParticleEmitter();
        ParticleEmitter(const AbstractBuilder&);
        ParticleEmitter(const ParticleEmitter &);
//        BT_DECLARE_ALIGNED_ALLOCATOR();
        virtual ~ParticleEmitter();
        ParticleEmitter &operator=(const ParticleEmitter &);
        
        virtual	s32	calculateSerializeBufferSize() const;
        virtual	void serialize(void*, btSerializer*) const;
        
        virtual const char *getClassName()const;
        virtual u32 getType()const;
        operator std::string() const;
        
        //TODO: fill in specific methods for ParticleEmitter
    protected:
    private:
    };
}

#endif /* defined(__JLIGameEngineTest__ParticleEmitter__) */