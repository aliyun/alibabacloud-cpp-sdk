// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTPASSENGERSEGMENTSTATUSINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLISTPASSENGERSEGMENTSTATUSINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(can_re_shop, canReShop_);
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
      DARABONBA_PTR_TO_JSON(un_re_shop_reason, unReShopReason_);
      DARABONBA_PTR_TO_JSON(un_re_shop_reason_code, unReShopReasonCode_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(can_re_shop, canReShop_);
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
      DARABONBA_PTR_FROM_JSON(un_re_shop_reason, unReShopReason_);
      DARABONBA_PTR_FROM_JSON(un_re_shop_reason_code, unReShopReasonCode_);
    };
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList() = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList(const IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList &) = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList(IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList &&) = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList() = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& operator=(const IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList &) = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& operator=(IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canReShop_ != nullptr
        && this->passengerId_ != nullptr && this->segmentKey_ != nullptr && this->unReShopReason_ != nullptr && this->unReShopReasonCode_ != nullptr; };
    // canReShop Field Functions 
    bool hasCanReShop() const { return this->canReShop_ != nullptr;};
    void deleteCanReShop() { this->canReShop_ = nullptr;};
    inline bool canReShop() const { DARABONBA_PTR_GET_DEFAULT(canReShop_, false) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setCanReShop(bool canReShop) { DARABONBA_PTR_SET_VALUE(canReShop_, canReShop) };


    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline int64_t passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // segmentKey Field Functions 
    bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
    void deleteSegmentKey() { this->segmentKey_ = nullptr;};
    inline string segmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


    // unReShopReason Field Functions 
    bool hasUnReShopReason() const { return this->unReShopReason_ != nullptr;};
    void deleteUnReShopReason() { this->unReShopReason_ = nullptr;};
    inline string unReShopReason() const { DARABONBA_PTR_GET_DEFAULT(unReShopReason_, "") };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setUnReShopReason(string unReShopReason) { DARABONBA_PTR_SET_VALUE(unReShopReason_, unReShopReason) };


    // unReShopReasonCode Field Functions 
    bool hasUnReShopReasonCode() const { return this->unReShopReasonCode_ != nullptr;};
    void deleteUnReShopReasonCode() { this->unReShopReasonCode_ = nullptr;};
    inline string unReShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(unReShopReasonCode_, "") };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList& setUnReShopReasonCode(string unReShopReasonCode) { DARABONBA_PTR_SET_VALUE(unReShopReasonCode_, unReShopReasonCode) };


  protected:
    std::shared_ptr<bool> canReShop_ = nullptr;
    std::shared_ptr<int64_t> passengerId_ = nullptr;
    std::shared_ptr<string> segmentKey_ = nullptr;
    std::shared_ptr<string> unReShopReason_ = nullptr;
    std::shared_ptr<string> unReShopReasonCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
