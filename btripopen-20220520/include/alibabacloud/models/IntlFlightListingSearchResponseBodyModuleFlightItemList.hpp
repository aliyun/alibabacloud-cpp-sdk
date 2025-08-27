// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightListingSearchResponseBodyModuleFlightItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchResponseBodyModuleFlightItemList& obj) { 
      DARABONBA_PTR_TO_JSON(best_price_item, bestPriceItem_);
      DARABONBA_PTR_TO_JSON(flight_journey_infos, flightJourneyInfos_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchResponseBodyModuleFlightItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(best_price_item, bestPriceItem_);
      DARABONBA_PTR_FROM_JSON(flight_journey_infos, flightJourneyInfos_);
    };
    IntlFlightListingSearchResponseBodyModuleFlightItemList() = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemList(const IntlFlightListingSearchResponseBodyModuleFlightItemList &) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemList(IntlFlightListingSearchResponseBodyModuleFlightItemList &&) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchResponseBodyModuleFlightItemList() = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemList& operator=(const IntlFlightListingSearchResponseBodyModuleFlightItemList &) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemList& operator=(IntlFlightListingSearchResponseBodyModuleFlightItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bestPriceItem_ != nullptr
        && this->flightJourneyInfos_ != nullptr; };
    // bestPriceItem Field Functions 
    bool hasBestPriceItem() const { return this->bestPriceItem_ != nullptr;};
    void deleteBestPriceItem() { this->bestPriceItem_ = nullptr;};
    inline const Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem & bestPriceItem() const { DARABONBA_PTR_GET_CONST(bestPriceItem_, Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem) };
    inline Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem bestPriceItem() { DARABONBA_PTR_GET(bestPriceItem_, Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemList& setBestPriceItem(const Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem & bestPriceItem) { DARABONBA_PTR_SET_VALUE(bestPriceItem_, bestPriceItem) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemList& setBestPriceItem(Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem && bestPriceItem) { DARABONBA_PTR_SET_RVALUE(bestPriceItem_, bestPriceItem) };


    // flightJourneyInfos Field Functions 
    bool hasFlightJourneyInfos() const { return this->flightJourneyInfos_ != nullptr;};
    void deleteFlightJourneyInfos() { this->flightJourneyInfos_ = nullptr;};
    inline const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos> & flightJourneyInfos() const { DARABONBA_PTR_GET_CONST(flightJourneyInfos_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos>) };
    inline vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos> flightJourneyInfos() { DARABONBA_PTR_GET(flightJourneyInfos_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos>) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemList& setFlightJourneyInfos(const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos> & flightJourneyInfos) { DARABONBA_PTR_SET_VALUE(flightJourneyInfos_, flightJourneyInfos) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemList& setFlightJourneyInfos(vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos> && flightJourneyInfos) { DARABONBA_PTR_SET_RVALUE(flightJourneyInfos_, flightJourneyInfos) };


  protected:
    std::shared_ptr<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListBestPriceItem> bestPriceItem_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos>> flightJourneyInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
