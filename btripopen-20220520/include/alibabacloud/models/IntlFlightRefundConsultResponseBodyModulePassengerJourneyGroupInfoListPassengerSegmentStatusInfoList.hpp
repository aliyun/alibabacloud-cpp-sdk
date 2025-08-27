// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTPASSENGERSEGMENTSTATUSINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTPASSENGERSEGMENTSTATUSINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(can_refund, canRefund_);
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
      DARABONBA_PTR_TO_JSON(un_refund_reason, unRefundReason_);
      DARABONBA_PTR_TO_JSON(un_refund_reason_code, unRefundReasonCode_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(can_refund, canRefund_);
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
      DARABONBA_PTR_FROM_JSON(un_refund_reason, unRefundReason_);
      DARABONBA_PTR_FROM_JSON(un_refund_reason_code, unRefundReasonCode_);
    };
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList() = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList(const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList &) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList(IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList &&) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList() = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& operator=(const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList &) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& operator=(IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canRefund_ != nullptr
        && this->passengerId_ != nullptr && this->segmentKey_ != nullptr && this->unRefundReason_ != nullptr && this->unRefundReasonCode_ != nullptr; };
    // canRefund Field Functions 
    bool hasCanRefund() const { return this->canRefund_ != nullptr;};
    void deleteCanRefund() { this->canRefund_ = nullptr;};
    inline bool canRefund() const { DARABONBA_PTR_GET_DEFAULT(canRefund_, false) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setCanRefund(bool canRefund) { DARABONBA_PTR_SET_VALUE(canRefund_, canRefund) };


    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline int64_t passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // segmentKey Field Functions 
    bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
    void deleteSegmentKey() { this->segmentKey_ = nullptr;};
    inline string segmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


    // unRefundReason Field Functions 
    bool hasUnRefundReason() const { return this->unRefundReason_ != nullptr;};
    void deleteUnRefundReason() { this->unRefundReason_ = nullptr;};
    inline string unRefundReason() const { DARABONBA_PTR_GET_DEFAULT(unRefundReason_, "") };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setUnRefundReason(string unRefundReason) { DARABONBA_PTR_SET_VALUE(unRefundReason_, unRefundReason) };


    // unRefundReasonCode Field Functions 
    bool hasUnRefundReasonCode() const { return this->unRefundReasonCode_ != nullptr;};
    void deleteUnRefundReasonCode() { this->unRefundReasonCode_ = nullptr;};
    inline string unRefundReasonCode() const { DARABONBA_PTR_GET_DEFAULT(unRefundReasonCode_, "") };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setUnRefundReasonCode(string unRefundReasonCode) { DARABONBA_PTR_SET_VALUE(unRefundReasonCode_, unRefundReasonCode) };


  protected:
    std::shared_ptr<bool> canRefund_ = nullptr;
    std::shared_ptr<int64_t> passengerId_ = nullptr;
    std::shared_ptr<string> segmentKey_ = nullptr;
    std::shared_ptr<string> unRefundReason_ = nullptr;
    std::shared_ptr<string> unRefundReasonCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
