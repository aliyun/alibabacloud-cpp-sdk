// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfos.hpp>
#include <alibabacloud/models/IntlFlightOtaSearchResponseBodyModuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_journey_infos, flightJourneyInfos_);
      DARABONBA_PTR_TO_JSON(item_list, itemList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_journey_infos, flightJourneyInfos_);
      DARABONBA_PTR_FROM_JSON(item_list, itemList_);
    };
    IntlFlightOtaSearchResponseBodyModule() = default ;
    IntlFlightOtaSearchResponseBodyModule(const IntlFlightOtaSearchResponseBodyModule &) = default ;
    IntlFlightOtaSearchResponseBodyModule(IntlFlightOtaSearchResponseBodyModule &&) = default ;
    IntlFlightOtaSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaSearchResponseBodyModule() = default ;
    IntlFlightOtaSearchResponseBodyModule& operator=(const IntlFlightOtaSearchResponseBodyModule &) = default ;
    IntlFlightOtaSearchResponseBodyModule& operator=(IntlFlightOtaSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightJourneyInfos_ != nullptr
        && this->itemList_ != nullptr; };
    // flightJourneyInfos Field Functions 
    bool hasFlightJourneyInfos() const { return this->flightJourneyInfos_ != nullptr;};
    void deleteFlightJourneyInfos() { this->flightJourneyInfos_ = nullptr;};
    inline const vector<Models::IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfos> & flightJourneyInfos() const { DARABONBA_PTR_GET_CONST(flightJourneyInfos_, vector<Models::IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfos>) };
    inline vector<Models::IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfos> flightJourneyInfos() { DARABONBA_PTR_GET(flightJourneyInfos_, vector<Models::IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfos>) };
    inline IntlFlightOtaSearchResponseBodyModule& setFlightJourneyInfos(const vector<Models::IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfos> & flightJourneyInfos) { DARABONBA_PTR_SET_VALUE(flightJourneyInfos_, flightJourneyInfos) };
    inline IntlFlightOtaSearchResponseBodyModule& setFlightJourneyInfos(vector<Models::IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfos> && flightJourneyInfos) { DARABONBA_PTR_SET_RVALUE(flightJourneyInfos_, flightJourneyInfos) };


    // itemList Field Functions 
    bool hasItemList() const { return this->itemList_ != nullptr;};
    void deleteItemList() { this->itemList_ = nullptr;};
    inline const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemList> & itemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemList>) };
    inline vector<Models::IntlFlightOtaSearchResponseBodyModuleItemList> itemList() { DARABONBA_PTR_GET(itemList_, vector<Models::IntlFlightOtaSearchResponseBodyModuleItemList>) };
    inline IntlFlightOtaSearchResponseBodyModule& setItemList(const vector<Models::IntlFlightOtaSearchResponseBodyModuleItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
    inline IntlFlightOtaSearchResponseBodyModule& setItemList(vector<Models::IntlFlightOtaSearchResponseBodyModuleItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


  protected:
    std::shared_ptr<vector<Models::IntlFlightOtaSearchResponseBodyModuleFlightJourneyInfos>> flightJourneyInfos_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOtaSearchResponseBodyModuleItemList>> itemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
