/**************************************************************
 * 
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 * 
 *************************************************************/


#ifndef CHART_GRAPHICPROPERTYITEMCONVERTER_HXX
#define CHART_GRAPHICPROPERTYITEMCONVERTER_HXX

#include "ItemConverter.hxx"
#include <com/sun/star/uno/Any.hxx>
#include <com/sun/star/beans/PropertyState.hpp>
#include <com/sun/star/lang/XMultiServiceFactory.hpp>

class SdrModel;

namespace chart
{
namespace wrapper
{

class GraphicPropertyItemConverter :
        public ::comphelper::ItemConverter
{
public:
    enum eGraphicObjectType
    {
        FILLED_DATA_POINT,
        LINE_DATA_POINT,
        LINE_PROPERTIES,
        FILL_PROPERTIES,
        LINE_AND_FILL_PROPERTIES
    };

    GraphicPropertyItemConverter(
        const ::com::sun::star::uno::Reference<
        ::com::sun::star::beans::XPropertySet > & rPropertySet,
        SfxItemPool& rItemPool,
        SdrModel& rDrawModel,
        const ::com::sun::star::uno::Reference<
            ::com::sun::star::lang::XMultiServiceFactory > & xNamedPropertyContainerFactory,
        eGraphicObjectType eObjectType = FILLED_DATA_POINT );
    virtual ~GraphicPropertyItemConverter();

protected:
    virtual const sal_uInt16 * GetWhichPairs() const;
    virtual bool GetItemProperty( tWhichIdType nWhichId, tPropertyNameWithMemberId & rOutProperty ) const;

    virtual void FillSpecialItem( sal_uInt16 nWhichId, SfxItemSet & rOutItemSet ) const
        throw( ::com::sun::star::uno::Exception );
    virtual bool ApplySpecialItem( sal_uInt16 nWhichId, const SfxItemSet & rItemSet )
        throw( ::com::sun::star::uno::Exception );

private:
    eGraphicObjectType              m_eGraphicObjectType;
    SdrModel &                      m_rDrawModel;
    ::com::sun::star::uno::Reference<
            ::com::sun::star::lang::XMultiServiceFactory >  m_xNamedPropertyTableFactory;
};

} //  namespace wrapper
} //  namespace chart

// CHART_GRAPHICPROPERTYITEMCONVERTER_HXX
#endif
