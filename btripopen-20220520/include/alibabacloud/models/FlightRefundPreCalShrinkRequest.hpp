// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundPreCalShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_TO_JSON(passenger_segment_info_list, passengerSegmentInfoListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_info_list, passengerSegmentInfoListShrink_);
    };
    FlightRefundPreCalShrinkRequest() = default ;
    FlightRefundPreCalShrinkRequest(const FlightRefundPreCalShrinkRequest &) = default ;
    FlightRefundPreCalShrinkRequest(FlightRefundPreCalShrinkRequest &&) = default ;
    FlightRefundPreCalShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalShrinkRequest() = default ;
    FlightRefundPreCalShrinkRequest& operator=(const FlightRefundPreCalShrinkRequest &) = default ;
    FlightRefundPreCalShrinkRequest& operator=(FlightRefundPreCalShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disOrderId_ != nullptr
        && this->isVoluntary_ != nullptr && this->passengerSegmentInfoListShrink_ != nullptr; };
    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightRefundPreCalShrinkRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline string isVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, "") };
    inline FlightRefundPreCalShrinkRequest& setIsVoluntary(string isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // passengerSegmentInfoListShrink Field Functions 
    bool hasPassengerSegmentInfoListShrink() const { return this->passengerSegmentInfoListShrink_ != nullptr;};
    void deletePassengerSegmentInfoListShrink() { this->passengerSegmentInfoListShrink_ = nullptr;};
    inline string passengerSegmentInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(passengerSegmentInfoListShrink_, "") };
    inline FlightRefundPreCalShrinkRequest& setPassengerSegmentInfoListShrink(string passengerSegmentInfoListShrink) { DARABONBA_PTR_SET_VALUE(passengerSegmentInfoListShrink_, passengerSegmentInfoListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> isVoluntary_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerSegmentInfoListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
