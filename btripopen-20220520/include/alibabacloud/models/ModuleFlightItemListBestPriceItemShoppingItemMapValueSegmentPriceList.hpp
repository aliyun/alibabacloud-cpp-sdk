// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSHOPPINGITEMMAPVALUESEGMENTPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_MODULEFLIGHTITEMLISTBESTPRICEITEMSHOPPINGITEMMAPVALUESEGMENTPRICELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSegmentPosition.hpp>
#include <alibabacloud/models/ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSearchPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
    };
    ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList() = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList(const ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList &) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList(ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList &&) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList() = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList& operator=(const ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList &) = default ;
    ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList& operator=(ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segmentPosition_ != nullptr
        && this->searchPrice_ != nullptr; };
    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSegmentPosition) };
    inline Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSegmentPosition) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList& setSegmentPosition(const Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList& setSegmentPosition(Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSearchPrice) };
    inline Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSearchPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList& setSearchPrice(const Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceList& setSearchPrice(Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


  protected:
    std::shared_ptr<Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<Models::ModuleFlightItemListBestPriceItemShoppingItemMapValueSegmentPriceListSearchPrice> searchPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
