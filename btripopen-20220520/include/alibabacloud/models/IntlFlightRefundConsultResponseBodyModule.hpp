// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundConsultResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundConsultResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_journey_group_info_list, passengerJourneyGroupInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundConsultResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_info_list, passengerJourneyGroupInfoList_);
    };
    IntlFlightRefundConsultResponseBodyModule() = default ;
    IntlFlightRefundConsultResponseBodyModule(const IntlFlightRefundConsultResponseBodyModule &) = default ;
    IntlFlightRefundConsultResponseBodyModule(IntlFlightRefundConsultResponseBodyModule &&) = default ;
    IntlFlightRefundConsultResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundConsultResponseBodyModule() = default ;
    IntlFlightRefundConsultResponseBodyModule& operator=(const IntlFlightRefundConsultResponseBodyModule &) = default ;
    IntlFlightRefundConsultResponseBodyModule& operator=(IntlFlightRefundConsultResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerJourneyGroupInfoList_ != nullptr; };
    // passengerJourneyGroupInfoList Field Functions 
    bool hasPassengerJourneyGroupInfoList() const { return this->passengerJourneyGroupInfoList_ != nullptr;};
    void deletePassengerJourneyGroupInfoList() { this->passengerJourneyGroupInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList> & passengerJourneyGroupInfoList() const { DARABONBA_PTR_GET_CONST(passengerJourneyGroupInfoList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList>) };
    inline vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList> passengerJourneyGroupInfoList() { DARABONBA_PTR_GET(passengerJourneyGroupInfoList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList>) };
    inline IntlFlightRefundConsultResponseBodyModule& setPassengerJourneyGroupInfoList(const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList> & passengerJourneyGroupInfoList) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupInfoList_, passengerJourneyGroupInfoList) };
    inline IntlFlightRefundConsultResponseBodyModule& setPassengerJourneyGroupInfoList(vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList> && passengerJourneyGroupInfoList) { DARABONBA_PTR_SET_RVALUE(passengerJourneyGroupInfoList_, passengerJourneyGroupInfoList) };


  protected:
    std::shared_ptr<vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList>> passengerJourneyGroupInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
