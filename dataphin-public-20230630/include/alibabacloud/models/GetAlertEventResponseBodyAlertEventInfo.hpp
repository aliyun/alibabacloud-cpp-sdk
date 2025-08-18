// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlertEventResponseBodyAlertEventInfoAlertObject.hpp>
#include <alibabacloud/models/GetAlertEventResponseBodyAlertEventInfoAlertReason.hpp>
#include <vector>
#include <alibabacloud/models/GetAlertEventResponseBodyAlertEventInfoAlertReceiverList.hpp>
#include <alibabacloud/models/GetAlertEventResponseBodyAlertEventInfoBelongProject.hpp>
#include <alibabacloud/models/GetAlertEventResponseBodyAlertEventInfoUrlConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAlertEventResponseBodyAlertEventInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertEventResponseBodyAlertEventInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAlertEventResponseBodyAlertEventInfo& obj) { 
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
    GetAlertEventResponseBodyAlertEventInfo() = default ;
    GetAlertEventResponseBodyAlertEventInfo(const GetAlertEventResponseBodyAlertEventInfo &) = default ;
    GetAlertEventResponseBodyAlertEventInfo(GetAlertEventResponseBodyAlertEventInfo &&) = default ;
    GetAlertEventResponseBodyAlertEventInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertEventResponseBodyAlertEventInfo() = default ;
    GetAlertEventResponseBodyAlertEventInfo& operator=(const GetAlertEventResponseBodyAlertEventInfo &) = default ;
    GetAlertEventResponseBodyAlertEventInfo& operator=(GetAlertEventResponseBodyAlertEventInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertFrequency_ != nullptr
        && this->alertObject_ != nullptr && this->alertReason_ != nullptr && this->alertReceiverList_ != nullptr && this->belongProject_ != nullptr && this->doNotDisturbEndTime_ != nullptr
        && this->firstAlertTime_ != nullptr && this->id_ != nullptr && this->latestAlertTime_ != nullptr && this->status_ != nullptr && this->totalAlertTimes_ != nullptr
        && this->urlConfig_ != nullptr; };
    // alertFrequency Field Functions 
    bool hasAlertFrequency() const { return this->alertFrequency_ != nullptr;};
    void deleteAlertFrequency() { this->alertFrequency_ = nullptr;};
    inline string alertFrequency() const { DARABONBA_PTR_GET_DEFAULT(alertFrequency_, "") };
    inline GetAlertEventResponseBodyAlertEventInfo& setAlertFrequency(string alertFrequency) { DARABONBA_PTR_SET_VALUE(alertFrequency_, alertFrequency) };


    // alertObject Field Functions 
    bool hasAlertObject() const { return this->alertObject_ != nullptr;};
    void deleteAlertObject() { this->alertObject_ = nullptr;};
    inline const Models::GetAlertEventResponseBodyAlertEventInfoAlertObject & alertObject() const { DARABONBA_PTR_GET_CONST(alertObject_, Models::GetAlertEventResponseBodyAlertEventInfoAlertObject) };
    inline Models::GetAlertEventResponseBodyAlertEventInfoAlertObject alertObject() { DARABONBA_PTR_GET(alertObject_, Models::GetAlertEventResponseBodyAlertEventInfoAlertObject) };
    inline GetAlertEventResponseBodyAlertEventInfo& setAlertObject(const Models::GetAlertEventResponseBodyAlertEventInfoAlertObject & alertObject) { DARABONBA_PTR_SET_VALUE(alertObject_, alertObject) };
    inline GetAlertEventResponseBodyAlertEventInfo& setAlertObject(Models::GetAlertEventResponseBodyAlertEventInfoAlertObject && alertObject) { DARABONBA_PTR_SET_RVALUE(alertObject_, alertObject) };


    // alertReason Field Functions 
    bool hasAlertReason() const { return this->alertReason_ != nullptr;};
    void deleteAlertReason() { this->alertReason_ = nullptr;};
    inline const Models::GetAlertEventResponseBodyAlertEventInfoAlertReason & alertReason() const { DARABONBA_PTR_GET_CONST(alertReason_, Models::GetAlertEventResponseBodyAlertEventInfoAlertReason) };
    inline Models::GetAlertEventResponseBodyAlertEventInfoAlertReason alertReason() { DARABONBA_PTR_GET(alertReason_, Models::GetAlertEventResponseBodyAlertEventInfoAlertReason) };
    inline GetAlertEventResponseBodyAlertEventInfo& setAlertReason(const Models::GetAlertEventResponseBodyAlertEventInfoAlertReason & alertReason) { DARABONBA_PTR_SET_VALUE(alertReason_, alertReason) };
    inline GetAlertEventResponseBodyAlertEventInfo& setAlertReason(Models::GetAlertEventResponseBodyAlertEventInfoAlertReason && alertReason) { DARABONBA_PTR_SET_RVALUE(alertReason_, alertReason) };


    // alertReceiverList Field Functions 
    bool hasAlertReceiverList() const { return this->alertReceiverList_ != nullptr;};
    void deleteAlertReceiverList() { this->alertReceiverList_ = nullptr;};
    inline const vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverList> & alertReceiverList() const { DARABONBA_PTR_GET_CONST(alertReceiverList_, vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverList>) };
    inline vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverList> alertReceiverList() { DARABONBA_PTR_GET(alertReceiverList_, vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverList>) };
    inline GetAlertEventResponseBodyAlertEventInfo& setAlertReceiverList(const vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverList> & alertReceiverList) { DARABONBA_PTR_SET_VALUE(alertReceiverList_, alertReceiverList) };
    inline GetAlertEventResponseBodyAlertEventInfo& setAlertReceiverList(vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverList> && alertReceiverList) { DARABONBA_PTR_SET_RVALUE(alertReceiverList_, alertReceiverList) };


    // belongProject Field Functions 
    bool hasBelongProject() const { return this->belongProject_ != nullptr;};
    void deleteBelongProject() { this->belongProject_ = nullptr;};
    inline const Models::GetAlertEventResponseBodyAlertEventInfoBelongProject & belongProject() const { DARABONBA_PTR_GET_CONST(belongProject_, Models::GetAlertEventResponseBodyAlertEventInfoBelongProject) };
    inline Models::GetAlertEventResponseBodyAlertEventInfoBelongProject belongProject() { DARABONBA_PTR_GET(belongProject_, Models::GetAlertEventResponseBodyAlertEventInfoBelongProject) };
    inline GetAlertEventResponseBodyAlertEventInfo& setBelongProject(const Models::GetAlertEventResponseBodyAlertEventInfoBelongProject & belongProject) { DARABONBA_PTR_SET_VALUE(belongProject_, belongProject) };
    inline GetAlertEventResponseBodyAlertEventInfo& setBelongProject(Models::GetAlertEventResponseBodyAlertEventInfoBelongProject && belongProject) { DARABONBA_PTR_SET_RVALUE(belongProject_, belongProject) };


    // doNotDisturbEndTime Field Functions 
    bool hasDoNotDisturbEndTime() const { return this->doNotDisturbEndTime_ != nullptr;};
    void deleteDoNotDisturbEndTime() { this->doNotDisturbEndTime_ = nullptr;};
    inline string doNotDisturbEndTime() const { DARABONBA_PTR_GET_DEFAULT(doNotDisturbEndTime_, "") };
    inline GetAlertEventResponseBodyAlertEventInfo& setDoNotDisturbEndTime(string doNotDisturbEndTime) { DARABONBA_PTR_SET_VALUE(doNotDisturbEndTime_, doNotDisturbEndTime) };


    // firstAlertTime Field Functions 
    bool hasFirstAlertTime() const { return this->firstAlertTime_ != nullptr;};
    void deleteFirstAlertTime() { this->firstAlertTime_ = nullptr;};
    inline string firstAlertTime() const { DARABONBA_PTR_GET_DEFAULT(firstAlertTime_, "") };
    inline GetAlertEventResponseBodyAlertEventInfo& setFirstAlertTime(string firstAlertTime) { DARABONBA_PTR_SET_VALUE(firstAlertTime_, firstAlertTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAlertEventResponseBodyAlertEventInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // latestAlertTime Field Functions 
    bool hasLatestAlertTime() const { return this->latestAlertTime_ != nullptr;};
    void deleteLatestAlertTime() { this->latestAlertTime_ = nullptr;};
    inline string latestAlertTime() const { DARABONBA_PTR_GET_DEFAULT(latestAlertTime_, "") };
    inline GetAlertEventResponseBodyAlertEventInfo& setLatestAlertTime(string latestAlertTime) { DARABONBA_PTR_SET_VALUE(latestAlertTime_, latestAlertTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAlertEventResponseBodyAlertEventInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalAlertTimes Field Functions 
    bool hasTotalAlertTimes() const { return this->totalAlertTimes_ != nullptr;};
    void deleteTotalAlertTimes() { this->totalAlertTimes_ = nullptr;};
    inline int64_t totalAlertTimes() const { DARABONBA_PTR_GET_DEFAULT(totalAlertTimes_, 0L) };
    inline GetAlertEventResponseBodyAlertEventInfo& setTotalAlertTimes(int64_t totalAlertTimes) { DARABONBA_PTR_SET_VALUE(totalAlertTimes_, totalAlertTimes) };


    // urlConfig Field Functions 
    bool hasUrlConfig() const { return this->urlConfig_ != nullptr;};
    void deleteUrlConfig() { this->urlConfig_ = nullptr;};
    inline const Models::GetAlertEventResponseBodyAlertEventInfoUrlConfig & urlConfig() const { DARABONBA_PTR_GET_CONST(urlConfig_, Models::GetAlertEventResponseBodyAlertEventInfoUrlConfig) };
    inline Models::GetAlertEventResponseBodyAlertEventInfoUrlConfig urlConfig() { DARABONBA_PTR_GET(urlConfig_, Models::GetAlertEventResponseBodyAlertEventInfoUrlConfig) };
    inline GetAlertEventResponseBodyAlertEventInfo& setUrlConfig(const Models::GetAlertEventResponseBodyAlertEventInfoUrlConfig & urlConfig) { DARABONBA_PTR_SET_VALUE(urlConfig_, urlConfig) };
    inline GetAlertEventResponseBodyAlertEventInfo& setUrlConfig(Models::GetAlertEventResponseBodyAlertEventInfoUrlConfig && urlConfig) { DARABONBA_PTR_SET_RVALUE(urlConfig_, urlConfig) };


  protected:
    std::shared_ptr<string> alertFrequency_ = nullptr;
    std::shared_ptr<Models::GetAlertEventResponseBodyAlertEventInfoAlertObject> alertObject_ = nullptr;
    std::shared_ptr<Models::GetAlertEventResponseBodyAlertEventInfoAlertReason> alertReason_ = nullptr;
    std::shared_ptr<vector<Models::GetAlertEventResponseBodyAlertEventInfoAlertReceiverList>> alertReceiverList_ = nullptr;
    std::shared_ptr<Models::GetAlertEventResponseBodyAlertEventInfoBelongProject> belongProject_ = nullptr;
    std::shared_ptr<string> doNotDisturbEndTime_ = nullptr;
    std::shared_ptr<string> firstAlertTime_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> latestAlertTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> totalAlertTimes_ = nullptr;
    std::shared_ptr<Models::GetAlertEventResponseBodyAlertEventInfoUrlConfig> urlConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
