// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopConsultResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopConsultResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_journey_group_info_list, passengerJourneyGroupInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopConsultResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_info_list, passengerJourneyGroupInfoList_);
    };
    IntlFlightReShopConsultResponseBodyModule() = default ;
    IntlFlightReShopConsultResponseBodyModule(const IntlFlightReShopConsultResponseBodyModule &) = default ;
    IntlFlightReShopConsultResponseBodyModule(IntlFlightReShopConsultResponseBodyModule &&) = default ;
    IntlFlightReShopConsultResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopConsultResponseBodyModule() = default ;
    IntlFlightReShopConsultResponseBodyModule& operator=(const IntlFlightReShopConsultResponseBodyModule &) = default ;
    IntlFlightReShopConsultResponseBodyModule& operator=(IntlFlightReShopConsultResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerJourneyGroupInfoList_ != nullptr; };
    // passengerJourneyGroupInfoList Field Functions 
    bool hasPassengerJourneyGroupInfoList() const { return this->passengerJourneyGroupInfoList_ != nullptr;};
    void deletePassengerJourneyGroupInfoList() { this->passengerJourneyGroupInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList> & passengerJourneyGroupInfoList() const { DARABONBA_PTR_GET_CONST(passengerJourneyGroupInfoList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList>) };
    inline vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList> passengerJourneyGroupInfoList() { DARABONBA_PTR_GET(passengerJourneyGroupInfoList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList>) };
    inline IntlFlightReShopConsultResponseBodyModule& setPassengerJourneyGroupInfoList(const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList> & passengerJourneyGroupInfoList) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupInfoList_, passengerJourneyGroupInfoList) };
    inline IntlFlightReShopConsultResponseBodyModule& setPassengerJourneyGroupInfoList(vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList> && passengerJourneyGroupInfoList) { DARABONBA_PTR_SET_RVALUE(passengerJourneyGroupInfoList_, passengerJourneyGroupInfoList) };


  protected:
    std::shared_ptr<vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList>> passengerJourneyGroupInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
