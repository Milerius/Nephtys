////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
// [CR #866]
////////////////////////////////////////////////////////////////////////////////////////////////////


namespace Noesis
{

////////////////////////////////////////////////////////////////////////////////////////////////////
inline const Type* TypeReference::GetContentType() const
{
    return mContentType;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
inline const Type* TypeConst::GetContentType() const
{
    return mContentType;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
inline const Type* TypePointer::GetStaticContentType() const
{
    return mContentType;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
inline const Type* TypePtr::GetStaticContentType() const
{
    return mContentType;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
inline uint32_t TypeArray::GetNumElems() const
{
    return mElemCount;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
inline const char* TypeArray::GetCollectionId() const
{
    return "array";
}

}
