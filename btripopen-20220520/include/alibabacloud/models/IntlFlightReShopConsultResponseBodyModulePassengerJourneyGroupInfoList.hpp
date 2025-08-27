// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODYMODULEPASSENGERJOURNEYGROUPINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList.hpp>
#include <alibabacloud/models/IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList.hpp>
#include <alibabacloud/models/IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList.hpp>
#include <alibabacloud/models/IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(passenger_segment_status_info_list, passengerSegmentStatusInfoList_);
      DARABONBA_PTR_TO_JSON(re_shop_reason_info_list, reShopReasonInfoList_);
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(passenger_segment_status_info_list, passengerSegmentStatusInfoList_);
      DARABONBA_PTR_FROM_JSON(re_shop_reason_info_list, reShopReasonInfoList_);
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
    };
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList() = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList(const IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList &) = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList(IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList &&) = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList() = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& operator=(const IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList &) = default ;
    IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& operator=(IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerJourneyGroupKey_ != nullptr
        && this->passengerList_ != nullptr && this->passengerSegmentStatusInfoList_ != nullptr && this->reShopReasonInfoList_ != nullptr && this->segmentList_ != nullptr; };
    // passengerJourneyGroupKey Field Functions 
    bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
    void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
    inline string passengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList>) };
    inline vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList>) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerList(const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerList(vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // passengerSegmentStatusInfoList Field Functions 
    bool hasPassengerSegmentStatusInfoList() const { return this->passengerSegmentStatusInfoList_ != nullptr;};
    void deletePassengerSegmentStatusInfoList() { this->passengerSegmentStatusInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList> & passengerSegmentStatusInfoList() const { DARABONBA_PTR_GET_CONST(passengerSegmentStatusInfoList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList>) };
    inline vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList> passengerSegmentStatusInfoList() { DARABONBA_PTR_GET(passengerSegmentStatusInfoList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList>) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerSegmentStatusInfoList(const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList> & passengerSegmentStatusInfoList) { DARABONBA_PTR_SET_VALUE(passengerSegmentStatusInfoList_, passengerSegmentStatusInfoList) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& setPassengerSegmentStatusInfoList(vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList> && passengerSegmentStatusInfoList) { DARABONBA_PTR_SET_RVALUE(passengerSegmentStatusInfoList_, passengerSegmentStatusInfoList) };


    // reShopReasonInfoList Field Functions 
    bool hasReShopReasonInfoList() const { return this->reShopReasonInfoList_ != nullptr;};
    void deleteReShopReasonInfoList() { this->reShopReasonInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList> & reShopReasonInfoList() const { DARABONBA_PTR_GET_CONST(reShopReasonInfoList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList>) };
    inline vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList> reShopReasonInfoList() { DARABONBA_PTR_GET(reShopReasonInfoList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList>) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& setReShopReasonInfoList(const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList> & reShopReasonInfoList) { DARABONBA_PTR_SET_VALUE(reShopReasonInfoList_, reShopReasonInfoList) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& setReShopReasonInfoList(vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList> && reShopReasonInfoList) { DARABONBA_PTR_SET_RVALUE(reShopReasonInfoList_, reShopReasonInfoList) };


    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList>) };
    inline vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList>) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& setSegmentList(const vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoList& setSegmentList(vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


  protected:
    std::shared_ptr<string> passengerJourneyGroupKey_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerList>> passengerList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListPassengerSegmentStatusInfoList>> passengerSegmentStatusInfoList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListReShopReasonInfoList>> reShopReasonInfoList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightReShopConsultResponseBodyModulePassengerJourneyGroupInfoListSegmentList>> segmentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
