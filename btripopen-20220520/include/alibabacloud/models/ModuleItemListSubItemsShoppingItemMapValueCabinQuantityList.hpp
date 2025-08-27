// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUECABINQUANTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUECABINQUANTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListSegmentPosition.hpp>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(cabin_info, cabinInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(cabin_info, cabinInfo_);
    };
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList() = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList(const ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList &) = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList(ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList &&) = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList() = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList& operator=(const ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList &) = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList& operator=(ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentPosition_ != nullptr
        && this->cabinInfo_ != nullptr; };
    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListSegmentPosition) };
    inline Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListSegmentPosition) };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList& setSegmentPosition(const Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList& setSegmentPosition(Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // cabinInfo Field Functions 
    bool hasCabinInfo() const { return this->cabinInfo_ != nullptr;};
    void deleteCabinInfo() { this->cabinInfo_ = nullptr;};
    inline const Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo & cabinInfo() const { DARABONBA_PTR_GET_CONST(cabinInfo_, Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo) };
    inline Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo cabinInfo() { DARABONBA_PTR_GET(cabinInfo_, Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo) };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList& setCabinInfo(const Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo & cabinInfo) { DARABONBA_PTR_SET_VALUE(cabinInfo_, cabinInfo) };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityList& setCabinInfo(Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo && cabinInfo) { DARABONBA_PTR_SET_RVALUE(cabinInfo_, cabinInfo) };


  protected:
    std::shared_ptr<Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<Models::ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo> cabinInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
