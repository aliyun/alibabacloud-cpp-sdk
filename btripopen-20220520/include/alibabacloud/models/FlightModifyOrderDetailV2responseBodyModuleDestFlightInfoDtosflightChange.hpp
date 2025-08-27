// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULEDESTFLIGHTINFODTOSFLIGHTCHANGE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULEDESTFLIGHTINFODTOSFLIGHTCHANGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& obj) { 
      DARABONBA_PTR_TO_JSON(change_desc, changeDesc_);
      DARABONBA_PTR_TO_JSON(change_status, changeStatus_);
      DARABONBA_PTR_TO_JSON(change_status_code, changeStatusCode_);
      DARABONBA_ANY_TO_JSON(new_segment, newSegment_);
      DARABONBA_PTR_TO_JSON(passenger_names, passengerNames_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& obj) { 
      DARABONBA_PTR_FROM_JSON(change_desc, changeDesc_);
      DARABONBA_PTR_FROM_JSON(change_status, changeStatus_);
      DARABONBA_PTR_FROM_JSON(change_status_code, changeStatusCode_);
      DARABONBA_ANY_FROM_JSON(new_segment, newSegment_);
      DARABONBA_PTR_FROM_JSON(passenger_names, passengerNames_);
    };
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange(const FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange(FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange &&) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& operator=(const FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& operator=(FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeDesc_ != nullptr
        && this->changeStatus_ != nullptr && this->changeStatusCode_ != nullptr && this->newSegment_ != nullptr && this->passengerNames_ != nullptr; };
    // changeDesc Field Functions 
    bool hasChangeDesc() const { return this->changeDesc_ != nullptr;};
    void deleteChangeDesc() { this->changeDesc_ = nullptr;};
    inline string changeDesc() const { DARABONBA_PTR_GET_DEFAULT(changeDesc_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& setChangeDesc(string changeDesc) { DARABONBA_PTR_SET_VALUE(changeDesc_, changeDesc) };


    // changeStatus Field Functions 
    bool hasChangeStatus() const { return this->changeStatus_ != nullptr;};
    void deleteChangeStatus() { this->changeStatus_ = nullptr;};
    inline string changeStatus() const { DARABONBA_PTR_GET_DEFAULT(changeStatus_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& setChangeStatus(string changeStatus) { DARABONBA_PTR_SET_VALUE(changeStatus_, changeStatus) };


    // changeStatusCode Field Functions 
    bool hasChangeStatusCode() const { return this->changeStatusCode_ != nullptr;};
    void deleteChangeStatusCode() { this->changeStatusCode_ = nullptr;};
    inline string changeStatusCode() const { DARABONBA_PTR_GET_DEFAULT(changeStatusCode_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& setChangeStatusCode(string changeStatusCode) { DARABONBA_PTR_SET_VALUE(changeStatusCode_, changeStatusCode) };


    // newSegment Field Functions 
    bool hasNewSegment() const { return this->newSegment_ != nullptr;};
    void deleteNewSegment() { this->newSegment_ = nullptr;};
    inline     const Darabonba::Json & newSegment() const { DARABONBA_GET(newSegment_) };
    Darabonba::Json & newSegment() { DARABONBA_GET(newSegment_) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& setNewSegment(const Darabonba::Json & newSegment) { DARABONBA_SET_VALUE(newSegment_, newSegment) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& setNewSegment(Darabonba::Json & newSegment) { DARABONBA_SET_RVALUE(newSegment_, newSegment) };


    // passengerNames Field Functions 
    bool hasPassengerNames() const { return this->passengerNames_ != nullptr;};
    void deletePassengerNames() { this->passengerNames_ = nullptr;};
    inline const vector<string> & passengerNames() const { DARABONBA_PTR_GET_CONST(passengerNames_, vector<string>) };
    inline vector<string> passengerNames() { DARABONBA_PTR_GET(passengerNames_, vector<string>) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& setPassengerNames(const vector<string> & passengerNames) { DARABONBA_PTR_SET_VALUE(passengerNames_, passengerNames) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange& setPassengerNames(vector<string> && passengerNames) { DARABONBA_PTR_SET_RVALUE(passengerNames_, passengerNames) };


  protected:
    std::shared_ptr<string> changeDesc_ = nullptr;
    std::shared_ptr<string> changeStatus_ = nullptr;
    std::shared_ptr<string> changeStatusCode_ = nullptr;
    Darabonba::Json newSegment_ = nullptr;
    std::shared_ptr<vector<string>> passengerNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
