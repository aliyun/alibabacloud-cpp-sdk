// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUESEGMENTPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUESEGMENTPRICELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSegmentPosition.hpp>
#include <alibabacloud/models/ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSearchPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
    };
    ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList() = default ;
    ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList(const ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList &) = default ;
    ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList(ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList &&) = default ;
    ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList() = default ;
    ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList& operator=(const ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList &) = default ;
    ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList& operator=(ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentPosition_ != nullptr
        && this->searchPrice_ != nullptr; };
    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSegmentPosition) };
    inline Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSegmentPosition) };
    inline ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList& setSegmentPosition(const Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList& setSegmentPosition(Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSearchPrice) };
    inline Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSearchPrice) };
    inline ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList& setSearchPrice(const Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleItemListSubItemsShoppingItemMapValueSegmentPriceList& setSearchPrice(Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


  protected:
    std::shared_ptr<Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<Models::ModuleItemListSubItemsShoppingItemMapValueSegmentPriceListSearchPrice> searchPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
