// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundPreCalV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_segment_relations, passengerSegmentRelationsShrink_);
      DARABONBA_PTR_TO_JSON(pre_cal_type, preCalType_);
      DARABONBA_PTR_TO_JSON(ticket_nos, ticketNosShrink_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_relations, passengerSegmentRelationsShrink_);
      DARABONBA_PTR_FROM_JSON(pre_cal_type, preCalType_);
      DARABONBA_PTR_FROM_JSON(ticket_nos, ticketNosShrink_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    FlightRefundPreCalV2ShrinkRequest() = default ;
    FlightRefundPreCalV2ShrinkRequest(const FlightRefundPreCalV2ShrinkRequest &) = default ;
    FlightRefundPreCalV2ShrinkRequest(FlightRefundPreCalV2ShrinkRequest &&) = default ;
    FlightRefundPreCalV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalV2ShrinkRequest() = default ;
    FlightRefundPreCalV2ShrinkRequest& operator=(const FlightRefundPreCalV2ShrinkRequest &) = default ;
    FlightRefundPreCalV2ShrinkRequest& operator=(FlightRefundPreCalV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isvName_ != nullptr
        && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->passengerSegmentRelationsShrink_ != nullptr && this->preCalType_ != nullptr && this->ticketNosShrink_ != nullptr
        && this->voluntary_ != nullptr; };
    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightRefundPreCalV2ShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline FlightRefundPreCalV2ShrinkRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightRefundPreCalV2ShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerSegmentRelationsShrink Field Functions 
    bool hasPassengerSegmentRelationsShrink() const { return this->passengerSegmentRelationsShrink_ != nullptr;};
    void deletePassengerSegmentRelationsShrink() { this->passengerSegmentRelationsShrink_ = nullptr;};
    inline string passengerSegmentRelationsShrink() const { DARABONBA_PTR_GET_DEFAULT(passengerSegmentRelationsShrink_, "") };
    inline FlightRefundPreCalV2ShrinkRequest& setPassengerSegmentRelationsShrink(string passengerSegmentRelationsShrink) { DARABONBA_PTR_SET_VALUE(passengerSegmentRelationsShrink_, passengerSegmentRelationsShrink) };


    // preCalType Field Functions 
    bool hasPreCalType() const { return this->preCalType_ != nullptr;};
    void deletePreCalType() { this->preCalType_ = nullptr;};
    inline int32_t preCalType() const { DARABONBA_PTR_GET_DEFAULT(preCalType_, 0) };
    inline FlightRefundPreCalV2ShrinkRequest& setPreCalType(int32_t preCalType) { DARABONBA_PTR_SET_VALUE(preCalType_, preCalType) };


    // ticketNosShrink Field Functions 
    bool hasTicketNosShrink() const { return this->ticketNosShrink_ != nullptr;};
    void deleteTicketNosShrink() { this->ticketNosShrink_ = nullptr;};
    inline string ticketNosShrink() const { DARABONBA_PTR_GET_DEFAULT(ticketNosShrink_, "") };
    inline FlightRefundPreCalV2ShrinkRequest& setTicketNosShrink(string ticketNosShrink) { DARABONBA_PTR_SET_VALUE(ticketNosShrink_, ticketNosShrink) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline FlightRefundPreCalV2ShrinkRequest& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> passengerSegmentRelationsShrink_ = nullptr;
    std::shared_ptr<int32_t> preCalType_ = nullptr;
    std::shared_ptr<string> ticketNosShrink_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
