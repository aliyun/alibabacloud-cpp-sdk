// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEITEMLISTSHOPPINGITEMMAPVALUESEGMENTPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_MODULEITEMLISTSHOPPINGITEMMAPVALUESEGMENTPRICELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValueSegmentPriceListSegmentPosition.hpp>
#include <alibabacloud/models/ModuleItemListShoppingItemMapValueSegmentPriceListSearchPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleItemListShoppingItemMapValueSegmentPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleItemListShoppingItemMapValueSegmentPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleItemListShoppingItemMapValueSegmentPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
    };
    ModuleItemListShoppingItemMapValueSegmentPriceList() = default ;
    ModuleItemListShoppingItemMapValueSegmentPriceList(const ModuleItemListShoppingItemMapValueSegmentPriceList &) = default ;
    ModuleItemListShoppingItemMapValueSegmentPriceList(ModuleItemListShoppingItemMapValueSegmentPriceList &&) = default ;
    ModuleItemListShoppingItemMapValueSegmentPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleItemListShoppingItemMapValueSegmentPriceList() = default ;
    ModuleItemListShoppingItemMapValueSegmentPriceList& operator=(const ModuleItemListShoppingItemMapValueSegmentPriceList &) = default ;
    ModuleItemListShoppingItemMapValueSegmentPriceList& operator=(ModuleItemListShoppingItemMapValueSegmentPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentPosition_ != nullptr
        && this->searchPrice_ != nullptr; };
    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::ModuleItemListShoppingItemMapValueSegmentPriceListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::ModuleItemListShoppingItemMapValueSegmentPriceListSegmentPosition) };
    inline Models::ModuleItemListShoppingItemMapValueSegmentPriceListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::ModuleItemListShoppingItemMapValueSegmentPriceListSegmentPosition) };
    inline ModuleItemListShoppingItemMapValueSegmentPriceList& setSegmentPosition(const Models::ModuleItemListShoppingItemMapValueSegmentPriceListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline ModuleItemListShoppingItemMapValueSegmentPriceList& setSegmentPosition(Models::ModuleItemListShoppingItemMapValueSegmentPriceListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const Models::ModuleItemListShoppingItemMapValueSegmentPriceListSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, Models::ModuleItemListShoppingItemMapValueSegmentPriceListSearchPrice) };
    inline Models::ModuleItemListShoppingItemMapValueSegmentPriceListSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, Models::ModuleItemListShoppingItemMapValueSegmentPriceListSearchPrice) };
    inline ModuleItemListShoppingItemMapValueSegmentPriceList& setSearchPrice(const Models::ModuleItemListShoppingItemMapValueSegmentPriceListSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleItemListShoppingItemMapValueSegmentPriceList& setSearchPrice(Models::ModuleItemListShoppingItemMapValueSegmentPriceListSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


  protected:
    std::shared_ptr<Models::ModuleItemListShoppingItemMapValueSegmentPriceListSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<Models::ModuleItemListShoppingItemMapValueSegmentPriceListSearchPrice> searchPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
