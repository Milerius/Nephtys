////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __GUI_LISTVIEWITEM_H__
#define __GUI_LISTVIEWITEM_H__


#include <NsCore/Noesis.h>
#include <NsGui/ControlsApi.h>
#include <NsGui/ListBoxItem.h>


namespace Noesis
{

////////////////////////////////////////////////////////////////////////////////////////////////////
/// Represents an item in a ListView control.
///
/// http://msdn.microsoft.com/en-us/library/system.windows.controls.listviewitem.aspx
////////////////////////////////////////////////////////////////////////////////////////////////////
class NS_GUI_CONTROLS_API ListViewItem: public ListBoxItem
{
public:
    ListViewItem();
    ~ListViewItem();

    NS_DECLARE_REFLECTION(ListViewItem, ListBoxItem)
};

}


#endif
