// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYLISTRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYLISTRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlertEventsResponseBodyListResultDataAlertObject.hpp>
#include <alibabacloud/models/ListAlertEventsResponseBodyListResultDataAlertReason.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertEventsResponseBodyListResultDataAlertReceiverList.hpp>
#include <alibabacloud/models/ListAlertEventsResponseBodyListResultDataBelongProject.hpp>
#include <alibabacloud/models/ListAlertEventsResponseBodyListResultDataUrlConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAlertEventsResponseBodyListResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertEventsResponseBodyListResultData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertFrequency, alertFrequency_);
      DARABONBA_PTR_TO_JSON(AlertObject, alertObject_);
      DARABONBA_PTR_TO_JSON(AlertReason, alertReason_);
      DARABONBA_PTR_TO_JSON(AlertReceiverList, alertReceiverList_);
      DARABONBA_PTR_TO_JSON(BelongProject, belongProject_);
      DARABONBA_PTR_TO_JSON(DoNotDisturbEndTime, doNotDisturbEndTime_);
      DARABONBA_PTR_TO_JSON(FirstAlertTime, firstAlertTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LatestAlertTime, latestAlertTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalAlertTimes, totalAlertTimes_);
      DARABONBA_PTR_TO_JSON(UrlConfig, urlConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertEventsResponseBodyListResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertFrequency, alertFrequency_);
      DARABONBA_PTR_FROM_JSON(AlertObject, alertObject_);
      DARABONBA_PTR_FROM_JSON(AlertReason, alertReason_);
      DARABONBA_PTR_FROM_JSON(AlertReceiverList, alertReceiverList_);
      DARABONBA_PTR_FROM_JSON(BelongProject, belongProject_);
      DARABONBA_PTR_FROM_JSON(DoNotDisturbEndTime, doNotDisturbEndTime_);
      DARABONBA_PTR_FROM_JSON(FirstAlertTime, firstAlertTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LatestAlertTime, latestAlertTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalAlertTimes, totalAlertTimes_);
      DARABONBA_PTR_FROM_JSON(UrlConfig, urlConfig_);
    };
    ListAlertEventsResponseBodyListResultData() = default ;
    ListAlertEventsResponseBodyListResultData(const ListAlertEventsResponseBodyListResultData &) = default ;
    ListAlertEventsResponseBodyListResultData(ListAlertEventsResponseBodyListResultData &&) = default ;
    ListAlertEventsResponseBodyListResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertEventsResponseBodyListResultData() = default ;
    ListAlertEventsResponseBodyListResultData& operator=(const ListAlertEventsResponseBodyListResultData &) = default ;
    ListAlertEventsResponseBodyListResultData& operator=(ListAlertEventsResponseBodyListResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertFrequency_ == nullptr
        && return this->alertObject_ == nullptr && return this->alertReason_ == nullptr && return this->alertReceiverList_ == nullptr && return this->belongProject_ == nullptr && return this->doNotDisturbEndTime_ == nullptr
        && return this->firstAlertTime_ == nullptr && return this->id_ == nullptr && return this->latestAlertTime_ == nullptr && return this->status_ == nullptr && return this->totalAlertTimes_ == nullptr
        && return this->urlConfig_ == nullptr; };
    // alertFrequency Field Functions 
    bool hasAlertFrequency() const { return this->alertFrequency_ != nullptr;};
    void deleteAlertFrequency() { this->alertFrequency_ = nullptr;};
    inline string alertFrequency() const { DARABONBA_PTR_GET_DEFAULT(alertFrequency_, "") };
    inline ListAlertEventsResponseBodyListResultData& setAlertFrequency(string alertFrequency) { DARABONBA_PTR_SET_VALUE(alertFrequency_, alertFrequency) };


    // alertObject Field Functions 
    bool hasAlertObject() const { return this->alertObject_ != nullptr;};
    void deleteAlertObject() { this->alertObject_ = nullptr;};
    inline const Models::ListAlertEventsResponseBodyListResultDataAlertObject & alertObject() const { DARABONBA_PTR_GET_CONST(alertObject_, Models::ListAlertEventsResponseBodyListResultDataAlertObject) };
    inline Models::ListAlertEventsResponseBodyListResultDataAlertObject alertObject() { DARABONBA_PTR_GET(alertObject_, Models::ListAlertEventsResponseBodyListResultDataAlertObject) };
    inline ListAlertEventsResponseBodyListResultData& setAlertObject(const Models::ListAlertEventsResponseBodyListResultDataAlertObject & alertObject) { DARABONBA_PTR_SET_VALUE(alertObject_, alertObject) };
    inline ListAlertEventsResponseBodyListResultData& setAlertObject(Models::ListAlertEventsResponseBodyListResultDataAlertObject && alertObject) { DARABONBA_PTR_SET_RVALUE(alertObject_, alertObject) };


    // alertReason Field Functions 
    bool hasAlertReason() const { return this->alertReason_ != nullptr;};
    void deleteAlertReason() { this->alertReason_ = nullptr;};
    inline const Models::ListAlertEventsResponseBodyListResultDataAlertReason & alertReason() const { DARABONBA_PTR_GET_CONST(alertReason_, Models::ListAlertEventsResponseBodyListResultDataAlertReason) };
    inline Models::ListAlertEventsResponseBodyListResultDataAlertReason alertReason() { DARABONBA_PTR_GET(alertReason_, Models::ListAlertEventsResponseBodyListResultDataAlertReason) };
    inline ListAlertEventsResponseBodyListResultData& setAlertReason(const Models::ListAlertEventsResponseBodyListResultDataAlertReason & alertReason) { DARABONBA_PTR_SET_VALUE(alertReason_, alertReason) };
    inline ListAlertEventsResponseBodyListResultData& setAlertReason(Models::ListAlertEventsResponseBodyListResultDataAlertReason && alertReason) { DARABONBA_PTR_SET_RVALUE(alertReason_, alertReason) };


    // alertReceiverList Field Functions 
    bool hasAlertReceiverList() const { return this->alertReceiverList_ != nullptr;};
    void deleteAlertReceiverList() { this->alertReceiverList_ = nullptr;};
    inline const vector<Models::ListAlertEventsResponseBodyListResultDataAlertReceiverList> & alertReceiverList() const { DARABONBA_PTR_GET_CONST(alertReceiverList_, vector<Models::ListAlertEventsResponseBodyListResultDataAlertReceiverList>) };
    inline vector<Models::ListAlertEventsResponseBodyListResultDataAlertReceiverList> alertReceiverList() { DARABONBA_PTR_GET(alertReceiverList_, vector<Models::ListAlertEventsResponseBodyListResultDataAlertReceiverList>) };
    inline ListAlertEventsResponseBodyListResultData& setAlertReceiverList(const vector<Models::ListAlertEventsResponseBodyListResultDataAlertReceiverList> & alertReceiverList) { DARABONBA_PTR_SET_VALUE(alertReceiverList_, alertReceiverList) };
    inline ListAlertEventsResponseBodyListResultData& setAlertReceiverList(vector<Models::ListAlertEventsResponseBodyListResultDataAlertReceiverList> && alertReceiverList) { DARABONBA_PTR_SET_RVALUE(alertReceiverList_, alertReceiverList) };


    // belongProject Field Functions 
    bool hasBelongProject() const { return this->belongProject_ != nullptr;};
    void deleteBelongProject() { this->belongProject_ = nullptr;};
    inline const Models::ListAlertEventsResponseBodyListResultDataBelongProject & belongProject() const { DARABONBA_PTR_GET_CONST(belongProject_, Models::ListAlertEventsResponseBodyListResultDataBelongProject) };
    inline Models::ListAlertEventsResponseBodyListResultDataBelongProject belongProject() { DARABONBA_PTR_GET(belongProject_, Models::ListAlertEventsResponseBodyListResultDataBelongProject) };
    inline ListAlertEventsResponseBodyListResultData& setBelongProject(const Models::ListAlertEventsResponseBodyListResultDataBelongProject & belongProject) { DARABONBA_PTR_SET_VALUE(belongProject_, belongProject) };
    inline ListAlertEventsResponseBodyListResultData& setBelongProject(Models::ListAlertEventsResponseBodyListResultDataBelongProject && belongProject) { DARABONBA_PTR_SET_RVALUE(belongProject_, belongProject) };


    // doNotDisturbEndTime Field Functions 
    bool hasDoNotDisturbEndTime() const { return this->doNotDisturbEndTime_ != nullptr;};
    void deleteDoNotDisturbEndTime() { this->doNotDisturbEndTime_ = nullptr;};
    inline string doNotDisturbEndTime() const { DARABONBA_PTR_GET_DEFAULT(doNotDisturbEndTime_, "") };
    inline ListAlertEventsResponseBodyListResultData& setDoNotDisturbEndTime(string doNotDisturbEndTime) { DARABONBA_PTR_SET_VALUE(doNotDisturbEndTime_, doNotDisturbEndTime) };


    // firstAlertTime Field Functions 
    bool hasFirstAlertTime() const { return this->firstAlertTime_ != nullptr;};
    void deleteFirstAlertTime() { this->firstAlertTime_ = nullptr;};
    inline string firstAlertTime() const { DARABONBA_PTR_GET_DEFAULT(firstAlertTime_, "") };
    inline ListAlertEventsResponseBodyListResultData& setFirstAlertTime(string firstAlertTime) { DARABONBA_PTR_SET_VALUE(firstAlertTime_, firstAlertTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAlertEventsResponseBodyListResultData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // latestAlertTime Field Functions 
    bool hasLatestAlertTime() const { return this->latestAlertTime_ != nullptr;};
    void deleteLatestAlertTime() { this->latestAlertTime_ = nullptr;};
    inline string latestAlertTime() const { DARABONBA_PTR_GET_DEFAULT(latestAlertTime_, "") };
    inline ListAlertEventsResponseBodyListResultData& setLatestAlertTime(string latestAlertTime) { DARABONBA_PTR_SET_VALUE(latestAlertTime_, latestAlertTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAlertEventsResponseBodyListResultData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalAlertTimes Field Functions 
    bool hasTotalAlertTimes() const { return this->totalAlertTimes_ != nullptr;};
    void deleteTotalAlertTimes() { this->totalAlertTimes_ = nullptr;};
    inline int64_t totalAlertTimes() const { DARABONBA_PTR_GET_DEFAULT(totalAlertTimes_, 0L) };
    inline ListAlertEventsResponseBodyListResultData& setTotalAlertTimes(int64_t totalAlertTimes) { DARABONBA_PTR_SET_VALUE(totalAlertTimes_, totalAlertTimes) };


    // urlConfig Field Functions 
    bool hasUrlConfig() const { return this->urlConfig_ != nullptr;};
    void deleteUrlConfig() { this->urlConfig_ = nullptr;};
    inline const Models::ListAlertEventsResponseBodyListResultDataUrlConfig & urlConfig() const { DARABONBA_PTR_GET_CONST(urlConfig_, Models::ListAlertEventsResponseBodyListResultDataUrlConfig) };
    inline Models::ListAlertEventsResponseBodyListResultDataUrlConfig urlConfig() { DARABONBA_PTR_GET(urlConfig_, Models::ListAlertEventsResponseBodyListResultDataUrlConfig) };
    inline ListAlertEventsResponseBodyListResultData& setUrlConfig(const Models::ListAlertEventsResponseBodyListResultDataUrlConfig & urlConfig) { DARABONBA_PTR_SET_VALUE(urlConfig_, urlConfig) };
    inline ListAlertEventsResponseBodyListResultData& setUrlConfig(Models::ListAlertEventsResponseBodyListResultDataUrlConfig && urlConfig) { DARABONBA_PTR_SET_RVALUE(urlConfig_, urlConfig) };


  protected:
    std::shared_ptr<string> alertFrequency_ = nullptr;
    std::shared_ptr<Models::ListAlertEventsResponseBodyListResultDataAlertObject> alertObject_ = nullptr;
    std::shared_ptr<Models::ListAlertEventsResponseBodyListResultDataAlertReason> alertReason_ = nullptr;
    std::shared_ptr<vector<Models::ListAlertEventsResponseBodyListResultDataAlertReceiverList>> alertReceiverList_ = nullptr;
    std::shared_ptr<Models::ListAlertEventsResponseBodyListResultDataBelongProject> belongProject_ = nullptr;
    std::shared_ptr<string> doNotDisturbEndTime_ = nullptr;
    std::shared_ptr<string> firstAlertTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> latestAlertTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> totalAlertTimes_ = nullptr;
    std::shared_ptr<Models::ListAlertEventsResponseBodyListResultDataUrlConfig> urlConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
