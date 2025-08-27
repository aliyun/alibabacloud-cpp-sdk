// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfos.hpp>
#include <alibabacloud/models/IntlFlightOtaItemDetailResponseBodyModuleGroupItem.hpp>
#include <alibabacloud/models/IntlFlightOtaItemDetailResponseBodyModuleShutterDocs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_journey_infos, flightJourneyInfos_);
      DARABONBA_PTR_TO_JSON(group_item, groupItem_);
      DARABONBA_PTR_TO_JSON(shutter_docs, shutterDocs_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_journey_infos, flightJourneyInfos_);
      DARABONBA_PTR_FROM_JSON(group_item, groupItem_);
      DARABONBA_PTR_FROM_JSON(shutter_docs, shutterDocs_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    IntlFlightOtaItemDetailResponseBodyModule() = default ;
    IntlFlightOtaItemDetailResponseBodyModule(const IntlFlightOtaItemDetailResponseBodyModule &) = default ;
    IntlFlightOtaItemDetailResponseBodyModule(IntlFlightOtaItemDetailResponseBodyModule &&) = default ;
    IntlFlightOtaItemDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBodyModule() = default ;
    IntlFlightOtaItemDetailResponseBodyModule& operator=(const IntlFlightOtaItemDetailResponseBodyModule &) = default ;
    IntlFlightOtaItemDetailResponseBodyModule& operator=(IntlFlightOtaItemDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightJourneyInfos_ != nullptr
        && this->groupItem_ != nullptr && this->shutterDocs_ != nullptr && this->tripType_ != nullptr; };
    // flightJourneyInfos Field Functions 
    bool hasFlightJourneyInfos() const { return this->flightJourneyInfos_ != nullptr;};
    void deleteFlightJourneyInfos() { this->flightJourneyInfos_ = nullptr;};
    inline const vector<Models::IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfos> & flightJourneyInfos() const { DARABONBA_PTR_GET_CONST(flightJourneyInfos_, vector<Models::IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfos>) };
    inline vector<Models::IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfos> flightJourneyInfos() { DARABONBA_PTR_GET(flightJourneyInfos_, vector<Models::IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfos>) };
    inline IntlFlightOtaItemDetailResponseBodyModule& setFlightJourneyInfos(const vector<Models::IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfos> & flightJourneyInfos) { DARABONBA_PTR_SET_VALUE(flightJourneyInfos_, flightJourneyInfos) };
    inline IntlFlightOtaItemDetailResponseBodyModule& setFlightJourneyInfos(vector<Models::IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfos> && flightJourneyInfos) { DARABONBA_PTR_SET_RVALUE(flightJourneyInfos_, flightJourneyInfos) };


    // groupItem Field Functions 
    bool hasGroupItem() const { return this->groupItem_ != nullptr;};
    void deleteGroupItem() { this->groupItem_ = nullptr;};
    inline const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItem & groupItem() const { DARABONBA_PTR_GET_CONST(groupItem_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItem) };
    inline Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItem groupItem() { DARABONBA_PTR_GET(groupItem_, Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItem) };
    inline IntlFlightOtaItemDetailResponseBodyModule& setGroupItem(const Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItem & groupItem) { DARABONBA_PTR_SET_VALUE(groupItem_, groupItem) };
    inline IntlFlightOtaItemDetailResponseBodyModule& setGroupItem(Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItem && groupItem) { DARABONBA_PTR_SET_RVALUE(groupItem_, groupItem) };


    // shutterDocs Field Functions 
    bool hasShutterDocs() const { return this->shutterDocs_ != nullptr;};
    void deleteShutterDocs() { this->shutterDocs_ = nullptr;};
    inline const vector<Models::IntlFlightOtaItemDetailResponseBodyModuleShutterDocs> & shutterDocs() const { DARABONBA_PTR_GET_CONST(shutterDocs_, vector<Models::IntlFlightOtaItemDetailResponseBodyModuleShutterDocs>) };
    inline vector<Models::IntlFlightOtaItemDetailResponseBodyModuleShutterDocs> shutterDocs() { DARABONBA_PTR_GET(shutterDocs_, vector<Models::IntlFlightOtaItemDetailResponseBodyModuleShutterDocs>) };
    inline IntlFlightOtaItemDetailResponseBodyModule& setShutterDocs(const vector<Models::IntlFlightOtaItemDetailResponseBodyModuleShutterDocs> & shutterDocs) { DARABONBA_PTR_SET_VALUE(shutterDocs_, shutterDocs) };
    inline IntlFlightOtaItemDetailResponseBodyModule& setShutterDocs(vector<Models::IntlFlightOtaItemDetailResponseBodyModuleShutterDocs> && shutterDocs) { DARABONBA_PTR_SET_RVALUE(shutterDocs_, shutterDocs) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline IntlFlightOtaItemDetailResponseBodyModule& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<vector<Models::IntlFlightOtaItemDetailResponseBodyModuleFlightJourneyInfos>> flightJourneyInfos_ = nullptr;
    std::shared_ptr<Models::IntlFlightOtaItemDetailResponseBodyModuleGroupItem> groupItem_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOtaItemDetailResponseBodyModuleShutterDocs>> shutterDocs_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
