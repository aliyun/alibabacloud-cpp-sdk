// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2REQUEST_HPP_
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
  class FlightRefundPreCalV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_segment_relations, passengerSegmentRelations_);
      DARABONBA_PTR_TO_JSON(pre_cal_type, preCalType_);
      DARABONBA_PTR_TO_JSON(ticket_nos, ticketNos_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_relations, passengerSegmentRelations_);
      DARABONBA_PTR_FROM_JSON(pre_cal_type, preCalType_);
      DARABONBA_PTR_FROM_JSON(ticket_nos, ticketNos_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    FlightRefundPreCalV2Request() = default ;
    FlightRefundPreCalV2Request(const FlightRefundPreCalV2Request &) = default ;
    FlightRefundPreCalV2Request(FlightRefundPreCalV2Request &&) = default ;
    FlightRefundPreCalV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalV2Request() = default ;
    FlightRefundPreCalV2Request& operator=(const FlightRefundPreCalV2Request &) = default ;
    FlightRefundPreCalV2Request& operator=(FlightRefundPreCalV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PassengerSegmentRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PassengerSegmentRelations& obj) { 
        DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
        DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
      };
      friend void from_json(const Darabonba::Json& j, PassengerSegmentRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
        DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
      };
      PassengerSegmentRelations() = default ;
      PassengerSegmentRelations(const PassengerSegmentRelations &) = default ;
      PassengerSegmentRelations(PassengerSegmentRelations &&) = default ;
      PassengerSegmentRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PassengerSegmentRelations() = default ;
      PassengerSegmentRelations& operator=(const PassengerSegmentRelations &) = default ;
      PassengerSegmentRelations& operator=(PassengerSegmentRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->segmentIdList_ == nullptr; };
      // passengerId Field Functions 
      bool hasPassengerId() const { return this->passengerId_ != nullptr;};
      void deletePassengerId() { this->passengerId_ = nullptr;};
      inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
      inline PassengerSegmentRelations& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


      // segmentIdList Field Functions 
      bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
      void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
      inline const vector<string> & getSegmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
      inline vector<string> getSegmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
      inline PassengerSegmentRelations& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
      inline PassengerSegmentRelations& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


    protected:
      shared_ptr<string> passengerId_ {};
      shared_ptr<vector<string>> segmentIdList_ {};
    };

    virtual bool empty() const override { return this->isvName_ == nullptr
        && this->orderId_ == nullptr && this->outOrderId_ == nullptr && this->passengerSegmentRelations_ == nullptr && this->preCalType_ == nullptr && this->ticketNos_ == nullptr
        && this->voluntary_ == nullptr; };
    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string getIsvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightRefundPreCalV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline FlightRefundPreCalV2Request& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightRefundPreCalV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerSegmentRelations Field Functions 
    bool hasPassengerSegmentRelations() const { return this->passengerSegmentRelations_ != nullptr;};
    void deletePassengerSegmentRelations() { this->passengerSegmentRelations_ = nullptr;};
    inline const vector<FlightRefundPreCalV2Request::PassengerSegmentRelations> & getPassengerSegmentRelations() const { DARABONBA_PTR_GET_CONST(passengerSegmentRelations_, vector<FlightRefundPreCalV2Request::PassengerSegmentRelations>) };
    inline vector<FlightRefundPreCalV2Request::PassengerSegmentRelations> getPassengerSegmentRelations() { DARABONBA_PTR_GET(passengerSegmentRelations_, vector<FlightRefundPreCalV2Request::PassengerSegmentRelations>) };
    inline FlightRefundPreCalV2Request& setPassengerSegmentRelations(const vector<FlightRefundPreCalV2Request::PassengerSegmentRelations> & passengerSegmentRelations) { DARABONBA_PTR_SET_VALUE(passengerSegmentRelations_, passengerSegmentRelations) };
    inline FlightRefundPreCalV2Request& setPassengerSegmentRelations(vector<FlightRefundPreCalV2Request::PassengerSegmentRelations> && passengerSegmentRelations) { DARABONBA_PTR_SET_RVALUE(passengerSegmentRelations_, passengerSegmentRelations) };


    // preCalType Field Functions 
    bool hasPreCalType() const { return this->preCalType_ != nullptr;};
    void deletePreCalType() { this->preCalType_ = nullptr;};
    inline int32_t getPreCalType() const { DARABONBA_PTR_GET_DEFAULT(preCalType_, 0) };
    inline FlightRefundPreCalV2Request& setPreCalType(int32_t preCalType) { DARABONBA_PTR_SET_VALUE(preCalType_, preCalType) };


    // ticketNos Field Functions 
    bool hasTicketNos() const { return this->ticketNos_ != nullptr;};
    void deleteTicketNos() { this->ticketNos_ = nullptr;};
    inline const vector<string> & getTicketNos() const { DARABONBA_PTR_GET_CONST(ticketNos_, vector<string>) };
    inline vector<string> getTicketNos() { DARABONBA_PTR_GET(ticketNos_, vector<string>) };
    inline FlightRefundPreCalV2Request& setTicketNos(const vector<string> & ticketNos) { DARABONBA_PTR_SET_VALUE(ticketNos_, ticketNos) };
    inline FlightRefundPreCalV2Request& setTicketNos(vector<string> && ticketNos) { DARABONBA_PTR_SET_RVALUE(ticketNos_, ticketNos) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool getVoluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline FlightRefundPreCalV2Request& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    shared_ptr<string> isvName_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> outOrderId_ {};
    shared_ptr<vector<FlightRefundPreCalV2Request::PassengerSegmentRelations>> passengerSegmentRelations_ {};
    shared_ptr<int32_t> preCalType_ {};
    shared_ptr<vector<string>> ticketNos_ {};
    shared_ptr<bool> voluntary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
