// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightRefundPreCalRequestPassengerSegmentInfoList.hpp>
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
    virtual bool empty() const override { this->disOrderId_ != nullptr
        && this->isVoluntary_ != nullptr && this->passengerSegmentInfoList_ != nullptr; };
    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightRefundPreCalRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline string isVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, "") };
    inline FlightRefundPreCalRequest& setIsVoluntary(string isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // passengerSegmentInfoList Field Functions 
    bool hasPassengerSegmentInfoList() const { return this->passengerSegmentInfoList_ != nullptr;};
    void deletePassengerSegmentInfoList() { this->passengerSegmentInfoList_ = nullptr;};
    inline const vector<FlightRefundPreCalRequestPassengerSegmentInfoList> & passengerSegmentInfoList() const { DARABONBA_PTR_GET_CONST(passengerSegmentInfoList_, vector<FlightRefundPreCalRequestPassengerSegmentInfoList>) };
    inline vector<FlightRefundPreCalRequestPassengerSegmentInfoList> passengerSegmentInfoList() { DARABONBA_PTR_GET(passengerSegmentInfoList_, vector<FlightRefundPreCalRequestPassengerSegmentInfoList>) };
    inline FlightRefundPreCalRequest& setPassengerSegmentInfoList(const vector<FlightRefundPreCalRequestPassengerSegmentInfoList> & passengerSegmentInfoList) { DARABONBA_PTR_SET_VALUE(passengerSegmentInfoList_, passengerSegmentInfoList) };
    inline FlightRefundPreCalRequest& setPassengerSegmentInfoList(vector<FlightRefundPreCalRequestPassengerSegmentInfoList> && passengerSegmentInfoList) { DARABONBA_PTR_SET_RVALUE(passengerSegmentInfoList_, passengerSegmentInfoList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> isVoluntary_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<FlightRefundPreCalRequestPassengerSegmentInfoList>> passengerSegmentInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
