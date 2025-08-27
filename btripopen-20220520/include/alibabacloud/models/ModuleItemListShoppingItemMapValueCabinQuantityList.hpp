// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEITEMLISTSHOPPINGITEMMAPVALUECABINQUANTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_MODULEITEMLISTSHOPPINGITEMMAPVALUECABINQUANTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValueCabinQuantityListSegmentPosition.hpp>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValueCabinQuantityListCabinInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleItemListShoppingItemMapValueCabinQuantityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleItemListShoppingItemMapValueCabinQuantityList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(cabin_info, cabinInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleItemListShoppingItemMapValueCabinQuantityList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(cabin_info, cabinInfo_);
    };
    ModuleItemListShoppingItemMapValueCabinQuantityList() = default ;
    ModuleItemListShoppingItemMapValueCabinQuantityList(const ModuleItemListShoppingItemMapValueCabinQuantityList &) = default ;
    ModuleItemListShoppingItemMapValueCabinQuantityList(ModuleItemListShoppingItemMapValueCabinQuantityList &&) = default ;
    ModuleItemListShoppingItemMapValueCabinQuantityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleItemListShoppingItemMapValueCabinQuantityList() = default ;
    ModuleItemListShoppingItemMapValueCabinQuantityList& operator=(const ModuleItemListShoppingItemMapValueCabinQuantityList &) = default ;
    ModuleItemListShoppingItemMapValueCabinQuantityList& operator=(ModuleItemListShoppingItemMapValueCabinQuantityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentPosition_ != nullptr
        && this->cabinInfo_ != nullptr; };
    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::ModuleItemListShoppingItemMapValueCabinQuantityListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::ModuleItemListShoppingItemMapValueCabinQuantityListSegmentPosition) };
    inline Models::ModuleItemListShoppingItemMapValueCabinQuantityListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::ModuleItemListShoppingItemMapValueCabinQuantityListSegmentPosition) };
    inline ModuleItemListShoppingItemMapValueCabinQuantityList& setSegmentPosition(const Models::ModuleItemListShoppingItemMapValueCabinQuantityListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline ModuleItemListShoppingItemMapValueCabinQuantityList& setSegmentPosition(Models::ModuleItemListShoppingItemMapValueCabinQuantityListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // cabinInfo Field Functions 
    bool hasCabinInfo() const { return this->cabinInfo_ != nullptr;};
    void deleteCabinInfo() { this->cabinInfo_ = nullptr;};
    inline const Models::ModuleItemListShoppingItemMapValueCabinQuantityListCabinInfo & cabinInfo() const { DARABONBA_PTR_GET_CONST(cabinInfo_, Models::ModuleItemListShoppingItemMapValueCabinQuantityListCabinInfo) };
    inline Models::ModuleItemListShoppingItemMapValueCabinQuantityListCabinInfo cabinInfo() { DARABONBA_PTR_GET(cabinInfo_, Models::ModuleItemListShoppingItemMapValueCabinQuantityListCabinInfo) };
    inline ModuleItemListShoppingItemMapValueCabinQuantityList& setCabinInfo(const Models::ModuleItemListShoppingItemMapValueCabinQuantityListCabinInfo & cabinInfo) { DARABONBA_PTR_SET_VALUE(cabinInfo_, cabinInfo) };
    inline ModuleItemListShoppingItemMapValueCabinQuantityList& setCabinInfo(Models::ModuleItemListShoppingItemMapValueCabinQuantityListCabinInfo && cabinInfo) { DARABONBA_PTR_SET_RVALUE(cabinInfo_, cabinInfo) };


  protected:
    std::shared_ptr<Models::ModuleItemListShoppingItemMapValueCabinQuantityListSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<Models::ModuleItemListShoppingItemMapValueCabinQuantityListCabinInfo> cabinInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
