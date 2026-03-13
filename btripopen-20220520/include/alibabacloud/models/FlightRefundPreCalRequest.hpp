// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALREQUEST_HPP_
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
  class FlightRefundPreCalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_TO_JSON(passenger_segment_info_list, passengerSegmentInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_info_list, passengerSegmentInfoList_);
    };
    FlightRefundPreCalRequest() = default ;
    FlightRefundPreCalRequest(const FlightRefundPreCalRequest &) = default ;
    FlightRefundPreCalRequest(FlightRefundPreCalRequest &&) = default ;
    FlightRefundPreCalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalRequest() = default ;
    FlightRefundPreCalRequest& operator=(const FlightRefundPreCalRequest &) = default ;
    FlightRefundPreCalRequest& operator=(FlightRefundPreCalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PassengerSegmentInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PassengerSegmentInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
        DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
      };
      friend void from_json(const Darabonba::Json& j, PassengerSegmentInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
        DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
      };
      PassengerSegmentInfoList() = default ;
      PassengerSegmentInfoList(const PassengerSegmentInfoList &) = default ;
      PassengerSegmentInfoList(PassengerSegmentInfoList &&) = default ;
      PassengerSegmentInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PassengerSegmentInfoList() = default ;
      PassengerSegmentInfoList& operator=(const PassengerSegmentInfoList &) = default ;
      PassengerSegmentInfoList& operator=(PassengerSegmentInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flightNo_ == nullptr
        && this->passengerName_ == nullptr && this->userId_ == nullptr; };
      // flightNo Field Functions 
      bool hasFlightNo() const { return this->flightNo_ != nullptr;};
      void deleteFlightNo() { this->flightNo_ = nullptr;};
      inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
      inline PassengerSegmentInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


      // passengerName Field Functions 
      bool hasPassengerName() const { return this->passengerName_ != nullptr;};
      void deletePassengerName() { this->passengerName_ = nullptr;};
      inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
      inline PassengerSegmentInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PassengerSegmentInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // This parameter is required.
      shared_ptr<string> flightNo_ {};
      // This parameter is required.
      shared_ptr<string> passengerName_ {};
      // This parameter is required.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->disOrderId_ == nullptr
        && this->isVoluntary_ == nullptr && this->passengerSegmentInfoList_ == nullptr; };
    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightRefundPreCalRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline string getIsVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, "") };
    inline FlightRefundPreCalRequest& setIsVoluntary(string isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // passengerSegmentInfoList Field Functions 
    bool hasPassengerSegmentInfoList() const { return this->passengerSegmentInfoList_ != nullptr;};
    void deletePassengerSegmentInfoList() { this->passengerSegmentInfoList_ = nullptr;};
    inline const vector<FlightRefundPreCalRequest::PassengerSegmentInfoList> & getPassengerSegmentInfoList() const { DARABONBA_PTR_GET_CONST(passengerSegmentInfoList_, vector<FlightRefundPreCalRequest::PassengerSegmentInfoList>) };
    inline vector<FlightRefundPreCalRequest::PassengerSegmentInfoList> getPassengerSegmentInfoList() { DARABONBA_PTR_GET(passengerSegmentInfoList_, vector<FlightRefundPreCalRequest::PassengerSegmentInfoList>) };
    inline FlightRefundPreCalRequest& setPassengerSegmentInfoList(const vector<FlightRefundPreCalRequest::PassengerSegmentInfoList> & passengerSegmentInfoList) { DARABONBA_PTR_SET_VALUE(passengerSegmentInfoList_, passengerSegmentInfoList) };
    inline FlightRefundPreCalRequest& setPassengerSegmentInfoList(vector<FlightRefundPreCalRequest::PassengerSegmentInfoList> && passengerSegmentInfoList) { DARABONBA_PTR_SET_RVALUE(passengerSegmentInfoList_, passengerSegmentInfoList) };


  protected:
    // This parameter is required.
    shared_ptr<string> disOrderId_ {};
    shared_ptr<string> isVoluntary_ {};
    // This parameter is required.
    shared_ptr<vector<FlightRefundPreCalRequest::PassengerSegmentInfoList>> passengerSegmentInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
