// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDAPPLYREQUEST_HPP_
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
  class IntlFlightRefundApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(refund_reason_code, refundReasonCode_);
      DARABONBA_PTR_TO_JSON(refund_segment_list, refundSegmentList_);
      DARABONBA_PTR_TO_JSON(selected_passengers, selectedPassengers_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(refund_reason_code, refundReasonCode_);
      DARABONBA_PTR_FROM_JSON(refund_segment_list, refundSegmentList_);
      DARABONBA_PTR_FROM_JSON(selected_passengers, selectedPassengers_);
    };
    IntlFlightRefundApplyRequest() = default ;
    IntlFlightRefundApplyRequest(const IntlFlightRefundApplyRequest &) = default ;
    IntlFlightRefundApplyRequest(IntlFlightRefundApplyRequest &&) = default ;
    IntlFlightRefundApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundApplyRequest() = default ;
    IntlFlightRefundApplyRequest& operator=(const IntlFlightRefundApplyRequest &) = default ;
    IntlFlightRefundApplyRequest& operator=(IntlFlightRefundApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SelectedPassengers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedPassengers& obj) { 
        DARABONBA_PTR_TO_JSON(full_name, fullName_);
        DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedPassengers& obj) { 
        DARABONBA_PTR_FROM_JSON(full_name, fullName_);
        DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      };
      SelectedPassengers() = default ;
      SelectedPassengers(const SelectedPassengers &) = default ;
      SelectedPassengers(SelectedPassengers &&) = default ;
      SelectedPassengers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedPassengers() = default ;
      SelectedPassengers& operator=(const SelectedPassengers &) = default ;
      SelectedPassengers& operator=(SelectedPassengers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fullName_ == nullptr
        && this->passengerId_ == nullptr; };
      // fullName Field Functions 
      bool hasFullName() const { return this->fullName_ != nullptr;};
      void deleteFullName() { this->fullName_ = nullptr;};
      inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
      inline SelectedPassengers& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


      // passengerId Field Functions 
      bool hasPassengerId() const { return this->passengerId_ != nullptr;};
      void deletePassengerId() { this->passengerId_ = nullptr;};
      inline int64_t getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
      inline SelectedPassengers& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    protected:
      shared_ptr<string> fullName_ {};
      // This parameter is required.
      shared_ptr<int64_t> passengerId_ {};
    };

    class RefundSegmentList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RefundSegmentList& obj) { 
        DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
      };
      friend void from_json(const Darabonba::Json& j, RefundSegmentList& obj) { 
        DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
      };
      RefundSegmentList() = default ;
      RefundSegmentList(const RefundSegmentList &) = default ;
      RefundSegmentList(RefundSegmentList &&) = default ;
      RefundSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RefundSegmentList() = default ;
      RefundSegmentList& operator=(const RefundSegmentList &) = default ;
      RefundSegmentList& operator=(RefundSegmentList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->segmentKey_ == nullptr; };
      // segmentKey Field Functions 
      bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
      void deleteSegmentKey() { this->segmentKey_ = nullptr;};
      inline string getSegmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
      inline RefundSegmentList& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


    protected:
      // This parameter is required.
      shared_ptr<string> segmentKey_ {};
    };

    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->outOrderId_ == nullptr && this->outRefundApplyId_ == nullptr && this->passengerJourneyGroupKey_ == nullptr && this->refundReasonCode_ == nullptr && this->refundSegmentList_ == nullptr
        && this->selectedPassengers_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightRefundApplyRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightRefundApplyRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outRefundApplyId Field Functions 
    bool hasOutRefundApplyId() const { return this->outRefundApplyId_ != nullptr;};
    void deleteOutRefundApplyId() { this->outRefundApplyId_ = nullptr;};
    inline string getOutRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(outRefundApplyId_, "") };
    inline IntlFlightRefundApplyRequest& setOutRefundApplyId(string outRefundApplyId) { DARABONBA_PTR_SET_VALUE(outRefundApplyId_, outRefundApplyId) };


    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string getPassengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightRefundApplyRequest& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // refundReasonCode Field Functions 
    bool hasRefundReasonCode() const { return this->refundReasonCode_ != nullptr;};
    void deleteRefundReasonCode() { this->refundReasonCode_ = nullptr;};
    inline string getRefundReasonCode() const { DARABONBA_PTR_GET_DEFAULT(refundReasonCode_, "") };
    inline IntlFlightRefundApplyRequest& setRefundReasonCode(string refundReasonCode) { DARABONBA_PTR_SET_VALUE(refundReasonCode_, refundReasonCode) };


    // refundSegmentList Field Functions 
    bool hasRefundSegmentList() const { return this->refundSegmentList_ != nullptr;};
    void deleteRefundSegmentList() { this->refundSegmentList_ = nullptr;};
    inline const vector<IntlFlightRefundApplyRequest::RefundSegmentList> & getRefundSegmentList() const { DARABONBA_PTR_GET_CONST(refundSegmentList_, vector<IntlFlightRefundApplyRequest::RefundSegmentList>) };
    inline vector<IntlFlightRefundApplyRequest::RefundSegmentList> getRefundSegmentList() { DARABONBA_PTR_GET(refundSegmentList_, vector<IntlFlightRefundApplyRequest::RefundSegmentList>) };
    inline IntlFlightRefundApplyRequest& setRefundSegmentList(const vector<IntlFlightRefundApplyRequest::RefundSegmentList> & refundSegmentList) { DARABONBA_PTR_SET_VALUE(refundSegmentList_, refundSegmentList) };
    inline IntlFlightRefundApplyRequest& setRefundSegmentList(vector<IntlFlightRefundApplyRequest::RefundSegmentList> && refundSegmentList) { DARABONBA_PTR_SET_RVALUE(refundSegmentList_, refundSegmentList) };


    // selectedPassengers Field Functions 
    bool hasSelectedPassengers() const { return this->selectedPassengers_ != nullptr;};
    void deleteSelectedPassengers() { this->selectedPassengers_ = nullptr;};
    inline const vector<IntlFlightRefundApplyRequest::SelectedPassengers> & getSelectedPassengers() const { DARABONBA_PTR_GET_CONST(selectedPassengers_, vector<IntlFlightRefundApplyRequest::SelectedPassengers>) };
    inline vector<IntlFlightRefundApplyRequest::SelectedPassengers> getSelectedPassengers() { DARABONBA_PTR_GET(selectedPassengers_, vector<IntlFlightRefundApplyRequest::SelectedPassengers>) };
    inline IntlFlightRefundApplyRequest& setSelectedPassengers(const vector<IntlFlightRefundApplyRequest::SelectedPassengers> & selectedPassengers) { DARABONBA_PTR_SET_VALUE(selectedPassengers_, selectedPassengers) };
    inline IntlFlightRefundApplyRequest& setSelectedPassengers(vector<IntlFlightRefundApplyRequest::SelectedPassengers> && selectedPassengers) { DARABONBA_PTR_SET_RVALUE(selectedPassengers_, selectedPassengers) };


  protected:
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    shared_ptr<string> outOrderId_ {};
    shared_ptr<string> outRefundApplyId_ {};
    // This parameter is required.
    shared_ptr<string> passengerJourneyGroupKey_ {};
    // This parameter is required.
    shared_ptr<string> refundReasonCode_ {};
    // This parameter is required.
    shared_ptr<vector<IntlFlightRefundApplyRequest::RefundSegmentList>> refundSegmentList_ {};
    // This parameter is required.
    shared_ptr<vector<IntlFlightRefundApplyRequest::SelectedPassengers>> selectedPassengers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
