// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEGROUPITEMSHOPPINGITEMMAPVALUESEGMENTPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_MODULEGROUPITEMSHOPPINGITEMMAPVALUESEGMENTPRICELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleGroupItemShoppingItemMapValueSegmentPriceListSegmentPosition.hpp>
#include <alibabacloud/models/ModuleGroupItemShoppingItemMapValueSegmentPriceListSearchPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleGroupItemShoppingItemMapValueSegmentPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleGroupItemShoppingItemMapValueSegmentPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleGroupItemShoppingItemMapValueSegmentPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
    };
    ModuleGroupItemShoppingItemMapValueSegmentPriceList() = default ;
    ModuleGroupItemShoppingItemMapValueSegmentPriceList(const ModuleGroupItemShoppingItemMapValueSegmentPriceList &) = default ;
    ModuleGroupItemShoppingItemMapValueSegmentPriceList(ModuleGroupItemShoppingItemMapValueSegmentPriceList &&) = default ;
    ModuleGroupItemShoppingItemMapValueSegmentPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleGroupItemShoppingItemMapValueSegmentPriceList() = default ;
    ModuleGroupItemShoppingItemMapValueSegmentPriceList& operator=(const ModuleGroupItemShoppingItemMapValueSegmentPriceList &) = default ;
    ModuleGroupItemShoppingItemMapValueSegmentPriceList& operator=(ModuleGroupItemShoppingItemMapValueSegmentPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentPosition_ != nullptr
        && this->searchPrice_ != nullptr; };
    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSegmentPosition) };
    inline Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSegmentPosition) };
    inline ModuleGroupItemShoppingItemMapValueSegmentPriceList& setSegmentPosition(const Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline ModuleGroupItemShoppingItemMapValueSegmentPriceList& setSegmentPosition(Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSearchPrice) };
    inline Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSearchPrice) };
    inline ModuleGroupItemShoppingItemMapValueSegmentPriceList& setSearchPrice(const Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleGroupItemShoppingItemMapValueSegmentPriceList& setSearchPrice(Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


  protected:
    std::shared_ptr<Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<Models::ModuleGroupItemShoppingItemMapValueSegmentPriceListSearchPrice> searchPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
