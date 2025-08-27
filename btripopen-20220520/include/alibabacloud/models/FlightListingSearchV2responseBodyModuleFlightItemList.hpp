// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem.hpp>
#include <vector>
#include <alibabacloud/models/FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos.hpp>
#include <alibabacloud/models/FlightListingSearchV2ResponseBodyModuleFlightItemListItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2ResponseBodyModuleFlightItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2ResponseBodyModuleFlightItemList& obj) { 
      DARABONBA_PTR_TO_JSON(best_price_item, bestPriceItem_);
      DARABONBA_PTR_TO_JSON(flight_journey_infos, flightJourneyInfos_);
      DARABONBA_PTR_TO_JSON(item_list, itemList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2ResponseBodyModuleFlightItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(best_price_item, bestPriceItem_);
      DARABONBA_PTR_FROM_JSON(flight_journey_infos, flightJourneyInfos_);
      DARABONBA_PTR_FROM_JSON(item_list, itemList_);
    };
    FlightListingSearchV2ResponseBodyModuleFlightItemList() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemList(const FlightListingSearchV2ResponseBodyModuleFlightItemList &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemList(FlightListingSearchV2ResponseBodyModuleFlightItemList &&) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2ResponseBodyModuleFlightItemList() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemList& operator=(const FlightListingSearchV2ResponseBodyModuleFlightItemList &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemList& operator=(FlightListingSearchV2ResponseBodyModuleFlightItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bestPriceItem_ != nullptr
        && this->flightJourneyInfos_ != nullptr && this->itemList_ != nullptr; };
    // bestPriceItem Field Functions 
    bool hasBestPriceItem() const { return this->bestPriceItem_ != nullptr;};
    void deleteBestPriceItem() { this->bestPriceItem_ = nullptr;};
    inline const Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem & bestPriceItem() const { DARABONBA_PTR_GET_CONST(bestPriceItem_, Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem) };
    inline Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem bestPriceItem() { DARABONBA_PTR_GET(bestPriceItem_, Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemList& setBestPriceItem(const Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem & bestPriceItem) { DARABONBA_PTR_SET_VALUE(bestPriceItem_, bestPriceItem) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemList& setBestPriceItem(Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem && bestPriceItem) { DARABONBA_PTR_SET_RVALUE(bestPriceItem_, bestPriceItem) };


    // flightJourneyInfos Field Functions 
    bool hasFlightJourneyInfos() const { return this->flightJourneyInfos_ != nullptr;};
    void deleteFlightJourneyInfos() { this->flightJourneyInfos_ = nullptr;};
    inline const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos> & flightJourneyInfos() const { DARABONBA_PTR_GET_CONST(flightJourneyInfos_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos>) };
    inline vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos> flightJourneyInfos() { DARABONBA_PTR_GET(flightJourneyInfos_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemList& setFlightJourneyInfos(const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos> & flightJourneyInfos) { DARABONBA_PTR_SET_VALUE(flightJourneyInfos_, flightJourneyInfos) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemList& setFlightJourneyInfos(vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos> && flightJourneyInfos) { DARABONBA_PTR_SET_RVALUE(flightJourneyInfos_, flightJourneyInfos) };


    // itemList Field Functions 
    bool hasItemList() const { return this->itemList_ != nullptr;};
    void deleteItemList() { this->itemList_ = nullptr;};
    inline const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemList> & itemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemList>) };
    inline vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemList> itemList() { DARABONBA_PTR_GET(itemList_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemList>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemList& setItemList(const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemList& setItemList(vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


  protected:
    std::shared_ptr<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListBestPriceItem> bestPriceItem_ = nullptr;
    std::shared_ptr<vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos>> flightJourneyInfos_ = nullptr;
    std::shared_ptr<vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListItemList>> itemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
