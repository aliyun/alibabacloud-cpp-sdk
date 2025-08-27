// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODYMODULELIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODYMODULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyListQueryResponseBodyModuleListApproverList.hpp>
#include <alibabacloud/models/ApplyListQueryResponseBodyModuleListCarRule.hpp>
#include <alibabacloud/models/ApplyListQueryResponseBodyModuleListExternalTravelerList.hpp>
#include <alibabacloud/models/ApplyListQueryResponseBodyModuleListItineraryList.hpp>
#include <alibabacloud/models/ApplyListQueryResponseBodyModuleListItinerarySetList.hpp>
#include <alibabacloud/models/ApplyListQueryResponseBodyModuleListTravelerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyListQueryResponseBodyModuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyListQueryResponseBodyModuleList& obj) { 
      DARABONBA_PTR_TO_JSON(apply_show_id, applyShowId_);
      DARABONBA_PTR_TO_JSON(approver_list, approverList_);
      DARABONBA_PTR_TO_JSON(car_rule, carRule_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(external_traveler_list, externalTravelerList_);
      DARABONBA_PTR_TO_JSON(flow_code, flowCode_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_TO_JSON(itinerary_rule, itineraryRule_);
      DARABONBA_PTR_TO_JSON(itinerary_set_list, itinerarySetList_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_TO_JSON(traveler_list, travelerList_);
      DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_TO_JSON(trip_day, tripDay_);
      DARABONBA_PTR_TO_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(union_no, unionNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyListQueryResponseBodyModuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_show_id, applyShowId_);
      DARABONBA_PTR_FROM_JSON(approver_list, approverList_);
      DARABONBA_PTR_FROM_JSON(car_rule, carRule_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(external_traveler_list, externalTravelerList_);
      DARABONBA_PTR_FROM_JSON(flow_code, flowCode_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_FROM_JSON(itinerary_rule, itineraryRule_);
      DARABONBA_PTR_FROM_JSON(itinerary_set_list, itinerarySetList_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_FROM_JSON(traveler_list, travelerList_);
      DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_FROM_JSON(trip_day, tripDay_);
      DARABONBA_PTR_FROM_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(union_no, unionNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    ApplyListQueryResponseBodyModuleList() = default ;
    ApplyListQueryResponseBodyModuleList(const ApplyListQueryResponseBodyModuleList &) = default ;
    ApplyListQueryResponseBodyModuleList(ApplyListQueryResponseBodyModuleList &&) = default ;
    ApplyListQueryResponseBodyModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyListQueryResponseBodyModuleList() = default ;
    ApplyListQueryResponseBodyModuleList& operator=(const ApplyListQueryResponseBodyModuleList &) = default ;
    ApplyListQueryResponseBodyModuleList& operator=(ApplyListQueryResponseBodyModuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyShowId_ != nullptr
        && this->approverList_ != nullptr && this->carRule_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr && this->departId_ != nullptr
        && this->departName_ != nullptr && this->externalTravelerList_ != nullptr && this->flowCode_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->itineraryList_ != nullptr && this->itineraryRule_ != nullptr && this->itinerarySetList_ != nullptr && this->jobNo_ != nullptr
        && this->paymentDepartmentId_ != nullptr && this->paymentDepartmentName_ != nullptr && this->status_ != nullptr && this->statusDesc_ != nullptr && this->thirdpartBusinessId_ != nullptr
        && this->thirdpartId_ != nullptr && this->travelerList_ != nullptr && this->tripCause_ != nullptr && this->tripDay_ != nullptr && this->tripTitle_ != nullptr
        && this->type_ != nullptr && this->unionNo_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // applyShowId Field Functions 
    bool hasApplyShowId() const { return this->applyShowId_ != nullptr;};
    void deleteApplyShowId() { this->applyShowId_ = nullptr;};
    inline string applyShowId() const { DARABONBA_PTR_GET_DEFAULT(applyShowId_, "") };
    inline ApplyListQueryResponseBodyModuleList& setApplyShowId(string applyShowId) { DARABONBA_PTR_SET_VALUE(applyShowId_, applyShowId) };


    // approverList Field Functions 
    bool hasApproverList() const { return this->approverList_ != nullptr;};
    void deleteApproverList() { this->approverList_ = nullptr;};
    inline const vector<Models::ApplyListQueryResponseBodyModuleListApproverList> & approverList() const { DARABONBA_PTR_GET_CONST(approverList_, vector<Models::ApplyListQueryResponseBodyModuleListApproverList>) };
    inline vector<Models::ApplyListQueryResponseBodyModuleListApproverList> approverList() { DARABONBA_PTR_GET(approverList_, vector<Models::ApplyListQueryResponseBodyModuleListApproverList>) };
    inline ApplyListQueryResponseBodyModuleList& setApproverList(const vector<Models::ApplyListQueryResponseBodyModuleListApproverList> & approverList) { DARABONBA_PTR_SET_VALUE(approverList_, approverList) };
    inline ApplyListQueryResponseBodyModuleList& setApproverList(vector<Models::ApplyListQueryResponseBodyModuleListApproverList> && approverList) { DARABONBA_PTR_SET_RVALUE(approverList_, approverList) };


    // carRule Field Functions 
    bool hasCarRule() const { return this->carRule_ != nullptr;};
    void deleteCarRule() { this->carRule_ = nullptr;};
    inline const Models::ApplyListQueryResponseBodyModuleListCarRule & carRule() const { DARABONBA_PTR_GET_CONST(carRule_, Models::ApplyListQueryResponseBodyModuleListCarRule) };
    inline Models::ApplyListQueryResponseBodyModuleListCarRule carRule() { DARABONBA_PTR_GET(carRule_, Models::ApplyListQueryResponseBodyModuleListCarRule) };
    inline ApplyListQueryResponseBodyModuleList& setCarRule(const Models::ApplyListQueryResponseBodyModuleListCarRule & carRule) { DARABONBA_PTR_SET_VALUE(carRule_, carRule) };
    inline ApplyListQueryResponseBodyModuleList& setCarRule(Models::ApplyListQueryResponseBodyModuleListCarRule && carRule) { DARABONBA_PTR_SET_RVALUE(carRule_, carRule) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline ApplyListQueryResponseBodyModuleList& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ApplyListQueryResponseBodyModuleList& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyListQueryResponseBodyModuleList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline ApplyListQueryResponseBodyModuleList& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // externalTravelerList Field Functions 
    bool hasExternalTravelerList() const { return this->externalTravelerList_ != nullptr;};
    void deleteExternalTravelerList() { this->externalTravelerList_ = nullptr;};
    inline const vector<Models::ApplyListQueryResponseBodyModuleListExternalTravelerList> & externalTravelerList() const { DARABONBA_PTR_GET_CONST(externalTravelerList_, vector<Models::ApplyListQueryResponseBodyModuleListExternalTravelerList>) };
    inline vector<Models::ApplyListQueryResponseBodyModuleListExternalTravelerList> externalTravelerList() { DARABONBA_PTR_GET(externalTravelerList_, vector<Models::ApplyListQueryResponseBodyModuleListExternalTravelerList>) };
    inline ApplyListQueryResponseBodyModuleList& setExternalTravelerList(const vector<Models::ApplyListQueryResponseBodyModuleListExternalTravelerList> & externalTravelerList) { DARABONBA_PTR_SET_VALUE(externalTravelerList_, externalTravelerList) };
    inline ApplyListQueryResponseBodyModuleList& setExternalTravelerList(vector<Models::ApplyListQueryResponseBodyModuleListExternalTravelerList> && externalTravelerList) { DARABONBA_PTR_SET_RVALUE(externalTravelerList_, externalTravelerList) };


    // flowCode Field Functions 
    bool hasFlowCode() const { return this->flowCode_ != nullptr;};
    void deleteFlowCode() { this->flowCode_ = nullptr;};
    inline string flowCode() const { DARABONBA_PTR_GET_DEFAULT(flowCode_, "") };
    inline ApplyListQueryResponseBodyModuleList& setFlowCode(string flowCode) { DARABONBA_PTR_SET_VALUE(flowCode_, flowCode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ApplyListQueryResponseBodyModuleList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ApplyListQueryResponseBodyModuleList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ApplyListQueryResponseBodyModuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // itineraryList Field Functions 
    bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
    void deleteItineraryList() { this->itineraryList_ = nullptr;};
    inline const vector<Models::ApplyListQueryResponseBodyModuleListItineraryList> & itineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<Models::ApplyListQueryResponseBodyModuleListItineraryList>) };
    inline vector<Models::ApplyListQueryResponseBodyModuleListItineraryList> itineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<Models::ApplyListQueryResponseBodyModuleListItineraryList>) };
    inline ApplyListQueryResponseBodyModuleList& setItineraryList(const vector<Models::ApplyListQueryResponseBodyModuleListItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
    inline ApplyListQueryResponseBodyModuleList& setItineraryList(vector<Models::ApplyListQueryResponseBodyModuleListItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


    // itineraryRule Field Functions 
    bool hasItineraryRule() const { return this->itineraryRule_ != nullptr;};
    void deleteItineraryRule() { this->itineraryRule_ = nullptr;};
    inline int32_t itineraryRule() const { DARABONBA_PTR_GET_DEFAULT(itineraryRule_, 0) };
    inline ApplyListQueryResponseBodyModuleList& setItineraryRule(int32_t itineraryRule) { DARABONBA_PTR_SET_VALUE(itineraryRule_, itineraryRule) };


    // itinerarySetList Field Functions 
    bool hasItinerarySetList() const { return this->itinerarySetList_ != nullptr;};
    void deleteItinerarySetList() { this->itinerarySetList_ = nullptr;};
    inline const vector<Models::ApplyListQueryResponseBodyModuleListItinerarySetList> & itinerarySetList() const { DARABONBA_PTR_GET_CONST(itinerarySetList_, vector<Models::ApplyListQueryResponseBodyModuleListItinerarySetList>) };
    inline vector<Models::ApplyListQueryResponseBodyModuleListItinerarySetList> itinerarySetList() { DARABONBA_PTR_GET(itinerarySetList_, vector<Models::ApplyListQueryResponseBodyModuleListItinerarySetList>) };
    inline ApplyListQueryResponseBodyModuleList& setItinerarySetList(const vector<Models::ApplyListQueryResponseBodyModuleListItinerarySetList> & itinerarySetList) { DARABONBA_PTR_SET_VALUE(itinerarySetList_, itinerarySetList) };
    inline ApplyListQueryResponseBodyModuleList& setItinerarySetList(vector<Models::ApplyListQueryResponseBodyModuleListItinerarySetList> && itinerarySetList) { DARABONBA_PTR_SET_RVALUE(itinerarySetList_, itinerarySetList) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline ApplyListQueryResponseBodyModuleList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string paymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline ApplyListQueryResponseBodyModuleList& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string paymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline ApplyListQueryResponseBodyModuleList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApplyListQueryResponseBodyModuleList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ApplyListQueryResponseBodyModuleList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string thirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline ApplyListQueryResponseBodyModuleList& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline ApplyListQueryResponseBodyModuleList& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


    // travelerList Field Functions 
    bool hasTravelerList() const { return this->travelerList_ != nullptr;};
    void deleteTravelerList() { this->travelerList_ = nullptr;};
    inline const vector<Models::ApplyListQueryResponseBodyModuleListTravelerList> & travelerList() const { DARABONBA_PTR_GET_CONST(travelerList_, vector<Models::ApplyListQueryResponseBodyModuleListTravelerList>) };
    inline vector<Models::ApplyListQueryResponseBodyModuleListTravelerList> travelerList() { DARABONBA_PTR_GET(travelerList_, vector<Models::ApplyListQueryResponseBodyModuleListTravelerList>) };
    inline ApplyListQueryResponseBodyModuleList& setTravelerList(const vector<Models::ApplyListQueryResponseBodyModuleListTravelerList> & travelerList) { DARABONBA_PTR_SET_VALUE(travelerList_, travelerList) };
    inline ApplyListQueryResponseBodyModuleList& setTravelerList(vector<Models::ApplyListQueryResponseBodyModuleListTravelerList> && travelerList) { DARABONBA_PTR_SET_RVALUE(travelerList_, travelerList) };


    // tripCause Field Functions 
    bool hasTripCause() const { return this->tripCause_ != nullptr;};
    void deleteTripCause() { this->tripCause_ = nullptr;};
    inline string tripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
    inline ApplyListQueryResponseBodyModuleList& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


    // tripDay Field Functions 
    bool hasTripDay() const { return this->tripDay_ != nullptr;};
    void deleteTripDay() { this->tripDay_ = nullptr;};
    inline int32_t tripDay() const { DARABONBA_PTR_GET_DEFAULT(tripDay_, 0) };
    inline ApplyListQueryResponseBodyModuleList& setTripDay(int32_t tripDay) { DARABONBA_PTR_SET_VALUE(tripDay_, tripDay) };


    // tripTitle Field Functions 
    bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
    void deleteTripTitle() { this->tripTitle_ = nullptr;};
    inline string tripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
    inline ApplyListQueryResponseBodyModuleList& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ApplyListQueryResponseBodyModuleList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unionNo Field Functions 
    bool hasUnionNo() const { return this->unionNo_ != nullptr;};
    void deleteUnionNo() { this->unionNo_ = nullptr;};
    inline string unionNo() const { DARABONBA_PTR_GET_DEFAULT(unionNo_, "") };
    inline ApplyListQueryResponseBodyModuleList& setUnionNo(string unionNo) { DARABONBA_PTR_SET_VALUE(unionNo_, unionNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyListQueryResponseBodyModuleList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyListQueryResponseBodyModuleList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> applyShowId_ = nullptr;
    std::shared_ptr<vector<Models::ApplyListQueryResponseBodyModuleListApproverList>> approverList_ = nullptr;
    std::shared_ptr<Models::ApplyListQueryResponseBodyModuleListCarRule> carRule_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<vector<Models::ApplyListQueryResponseBodyModuleListExternalTravelerList>> externalTravelerList_ = nullptr;
    std::shared_ptr<string> flowCode_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<Models::ApplyListQueryResponseBodyModuleListItineraryList>> itineraryList_ = nullptr;
    std::shared_ptr<int32_t> itineraryRule_ = nullptr;
    std::shared_ptr<vector<Models::ApplyListQueryResponseBodyModuleListItinerarySetList>> itinerarySetList_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<string> paymentDepartmentId_ = nullptr;
    std::shared_ptr<string> paymentDepartmentName_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
    std::shared_ptr<string> thirdpartBusinessId_ = nullptr;
    std::shared_ptr<string> thirdpartId_ = nullptr;
    std::shared_ptr<vector<Models::ApplyListQueryResponseBodyModuleListTravelerList>> travelerList_ = nullptr;
    std::shared_ptr<string> tripCause_ = nullptr;
    std::shared_ptr<int32_t> tripDay_ = nullptr;
    std::shared_ptr<string> tripTitle_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> unionNo_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
