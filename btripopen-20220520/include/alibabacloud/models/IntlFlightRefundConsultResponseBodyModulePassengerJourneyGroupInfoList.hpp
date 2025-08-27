// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList.hpp>
#include <alibabacloud/models/IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList.hpp>
#include <alibabacloud/models/IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList.hpp>
#include <alibabacloud/models/IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(passenger_segment_status_info_list, passengerSegmentStatusInfoList_);
      DARABONBA_PTR_TO_JSON(refund_reason_info_list, refundReasonInfoList_);
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_status_info_list, passengerSegmentStatusInfoList_);
      DARABONBA_PTR_FROM_JSON(refund_reason_info_list, refundReasonInfoList_);
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
    };
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList() = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList(const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList &) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList(IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList &&) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList() = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& operator=(const IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList &) = default ;
    IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& operator=(IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerJourneyGroupKey_ != nullptr
        && this->passengerList_ != nullptr && this->passengerSegmentStatusInfoList_ != nullptr && this->refundReasonInfoList_ != nullptr && this->segmentList_ != nullptr; };
    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string passengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList>) };
    inline vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList>) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerList(const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerList(vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // passengerSegmentStatusInfoList Field Functions 
    bool hasPassengerSegmentStatusInfoList() const { return this->passengerSegmentStatusInfoList_ != nullptr;};
    void deletePassengerSegmentStatusInfoList() { this->passengerSegmentStatusInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList> & passengerSegmentStatusInfoList() const { DARABONBA_PTR_GET_CONST(passengerSegmentStatusInfoList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList>) };
    inline vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList> passengerSegmentStatusInfoList() { DARABONBA_PTR_GET(passengerSegmentStatusInfoList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList>) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerSegmentStatusInfoList(const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList> & passengerSegmentStatusInfoList) { DARABONBA_PTR_SET_VALUE(passengerSegmentStatusInfoList_, passengerSegmentStatusInfoList) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerSegmentStatusInfoList(vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList> && passengerSegmentStatusInfoList) { DARABONBA_PTR_SET_RVALUE(passengerSegmentStatusInfoList_, passengerSegmentStatusInfoList) };


    // refundReasonInfoList Field Functions 
    bool hasRefundReasonInfoList() const { return this->refundReasonInfoList_ != nullptr;};
    void deleteRefundReasonInfoList() { this->refundReasonInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList> & refundReasonInfoList() const { DARABONBA_PTR_GET_CONST(refundReasonInfoList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList>) };
    inline vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList> refundReasonInfoList() { DARABONBA_PTR_GET(refundReasonInfoList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList>) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& setRefundReasonInfoList(const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList> & refundReasonInfoList) { DARABONBA_PTR_SET_VALUE(refundReasonInfoList_, refundReasonInfoList) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& setRefundReasonInfoList(vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList> && refundReasonInfoList) { DARABONBA_PTR_SET_RVALUE(refundReasonInfoList_, refundReasonInfoList) };


    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList>) };
    inline vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList>) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& setSegmentList(const vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoList& setSegmentList(vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


  protected:
    std::shared_ptr<string> passengerJourneyGroupKey_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList>> passengerList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList>> passengerSegmentStatusInfoList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListRefundReasonInfoList>> refundReasonInfoList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightRefundConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList>> segmentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
