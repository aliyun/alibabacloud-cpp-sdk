// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADRESOURCECONTROLEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADRESOURCECONTROLEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class DownloadResourceControlEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadResourceControlEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionCode, actionCode_);
      DARABONBA_PTR_TO_JSON(ActionCodes, actionCodes_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(BusinessCode, businessCode_);
      DARABONBA_PTR_TO_JSON(CaseCodesPrefix, caseCodesPrefix_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(EventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(ExcludeActionCodes, excludeActionCodes_);
      DARABONBA_PTR_TO_JSON(ExcludeEventCodes, excludeEventCodes_);
      DARABONBA_PTR_TO_JSON(ExcludeReasons, excludeReasons_);
      DARABONBA_PTR_TO_JSON(IncludeReasons, includeReasons_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_TO_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(SourceCodes, sourceCodes_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadResourceControlEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionCode, actionCode_);
      DARABONBA_PTR_FROM_JSON(ActionCodes, actionCodes_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(BusinessCode, businessCode_);
      DARABONBA_PTR_FROM_JSON(CaseCodesPrefix, caseCodesPrefix_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(EventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(ExcludeActionCodes, excludeActionCodes_);
      DARABONBA_PTR_FROM_JSON(ExcludeEventCodes, excludeEventCodes_);
      DARABONBA_PTR_FROM_JSON(ExcludeReasons, excludeReasons_);
      DARABONBA_PTR_FROM_JSON(IncludeReasons, includeReasons_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_FROM_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(SourceCodes, sourceCodes_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DownloadResourceControlEventsRequest() = default ;
    DownloadResourceControlEventsRequest(const DownloadResourceControlEventsRequest &) = default ;
    DownloadResourceControlEventsRequest(DownloadResourceControlEventsRequest &&) = default ;
    DownloadResourceControlEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadResourceControlEventsRequest() = default ;
    DownloadResourceControlEventsRequest& operator=(const DownloadResourceControlEventsRequest &) = default ;
    DownloadResourceControlEventsRequest& operator=(DownloadResourceControlEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionCode_ == nullptr
        && this->actionCodes_ == nullptr && this->aliyunLang_ == nullptr && this->businessCode_ == nullptr && this->caseCodesPrefix_ == nullptr && this->current_ == nullptr
        && this->domain_ == nullptr && this->eventCode_ == nullptr && this->eventCodes_ == nullptr && this->eventId_ == nullptr && this->excludeActionCodes_ == nullptr
        && this->excludeEventCodes_ == nullptr && this->excludeReasons_ == nullptr && this->includeReasons_ == nullptr && this->instanceId_ == nullptr && this->ip_ == nullptr
        && this->pageSize_ == nullptr && this->punishEndTime_ == nullptr && this->punishStartTime_ == nullptr && this->reason_ == nullptr && this->sourceCodes_ == nullptr
        && this->status_ == nullptr && this->statusList_ == nullptr && this->url_ == nullptr; };
    // actionCode Field Functions 
    bool hasActionCode() const { return this->actionCode_ != nullptr;};
    void deleteActionCode() { this->actionCode_ = nullptr;};
    inline string getActionCode() const { DARABONBA_PTR_GET_DEFAULT(actionCode_, "") };
    inline DownloadResourceControlEventsRequest& setActionCode(string actionCode) { DARABONBA_PTR_SET_VALUE(actionCode_, actionCode) };


    // actionCodes Field Functions 
    bool hasActionCodes() const { return this->actionCodes_ != nullptr;};
    void deleteActionCodes() { this->actionCodes_ = nullptr;};
    inline const vector<string> & getActionCodes() const { DARABONBA_PTR_GET_CONST(actionCodes_, vector<string>) };
    inline vector<string> getActionCodes() { DARABONBA_PTR_GET(actionCodes_, vector<string>) };
    inline DownloadResourceControlEventsRequest& setActionCodes(const vector<string> & actionCodes) { DARABONBA_PTR_SET_VALUE(actionCodes_, actionCodes) };
    inline DownloadResourceControlEventsRequest& setActionCodes(vector<string> && actionCodes) { DARABONBA_PTR_SET_RVALUE(actionCodes_, actionCodes) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline DownloadResourceControlEventsRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // businessCode Field Functions 
    bool hasBusinessCode() const { return this->businessCode_ != nullptr;};
    void deleteBusinessCode() { this->businessCode_ = nullptr;};
    inline string getBusinessCode() const { DARABONBA_PTR_GET_DEFAULT(businessCode_, "") };
    inline DownloadResourceControlEventsRequest& setBusinessCode(string businessCode) { DARABONBA_PTR_SET_VALUE(businessCode_, businessCode) };


    // caseCodesPrefix Field Functions 
    bool hasCaseCodesPrefix() const { return this->caseCodesPrefix_ != nullptr;};
    void deleteCaseCodesPrefix() { this->caseCodesPrefix_ = nullptr;};
    inline const vector<string> & getCaseCodesPrefix() const { DARABONBA_PTR_GET_CONST(caseCodesPrefix_, vector<string>) };
    inline vector<string> getCaseCodesPrefix() { DARABONBA_PTR_GET(caseCodesPrefix_, vector<string>) };
    inline DownloadResourceControlEventsRequest& setCaseCodesPrefix(const vector<string> & caseCodesPrefix) { DARABONBA_PTR_SET_VALUE(caseCodesPrefix_, caseCodesPrefix) };
    inline DownloadResourceControlEventsRequest& setCaseCodesPrefix(vector<string> && caseCodesPrefix) { DARABONBA_PTR_SET_RVALUE(caseCodesPrefix_, caseCodesPrefix) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline DownloadResourceControlEventsRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DownloadResourceControlEventsRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DownloadResourceControlEventsRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline const vector<string> & getEventCodes() const { DARABONBA_PTR_GET_CONST(eventCodes_, vector<string>) };
    inline vector<string> getEventCodes() { DARABONBA_PTR_GET(eventCodes_, vector<string>) };
    inline DownloadResourceControlEventsRequest& setEventCodes(const vector<string> & eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };
    inline DownloadResourceControlEventsRequest& setEventCodes(vector<string> && eventCodes) { DARABONBA_PTR_SET_RVALUE(eventCodes_, eventCodes) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DownloadResourceControlEventsRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // excludeActionCodes Field Functions 
    bool hasExcludeActionCodes() const { return this->excludeActionCodes_ != nullptr;};
    void deleteExcludeActionCodes() { this->excludeActionCodes_ = nullptr;};
    inline const vector<string> & getExcludeActionCodes() const { DARABONBA_PTR_GET_CONST(excludeActionCodes_, vector<string>) };
    inline vector<string> getExcludeActionCodes() { DARABONBA_PTR_GET(excludeActionCodes_, vector<string>) };
    inline DownloadResourceControlEventsRequest& setExcludeActionCodes(const vector<string> & excludeActionCodes) { DARABONBA_PTR_SET_VALUE(excludeActionCodes_, excludeActionCodes) };
    inline DownloadResourceControlEventsRequest& setExcludeActionCodes(vector<string> && excludeActionCodes) { DARABONBA_PTR_SET_RVALUE(excludeActionCodes_, excludeActionCodes) };


    // excludeEventCodes Field Functions 
    bool hasExcludeEventCodes() const { return this->excludeEventCodes_ != nullptr;};
    void deleteExcludeEventCodes() { this->excludeEventCodes_ = nullptr;};
    inline const vector<string> & getExcludeEventCodes() const { DARABONBA_PTR_GET_CONST(excludeEventCodes_, vector<string>) };
    inline vector<string> getExcludeEventCodes() { DARABONBA_PTR_GET(excludeEventCodes_, vector<string>) };
    inline DownloadResourceControlEventsRequest& setExcludeEventCodes(const vector<string> & excludeEventCodes) { DARABONBA_PTR_SET_VALUE(excludeEventCodes_, excludeEventCodes) };
    inline DownloadResourceControlEventsRequest& setExcludeEventCodes(vector<string> && excludeEventCodes) { DARABONBA_PTR_SET_RVALUE(excludeEventCodes_, excludeEventCodes) };


    // excludeReasons Field Functions 
    bool hasExcludeReasons() const { return this->excludeReasons_ != nullptr;};
    void deleteExcludeReasons() { this->excludeReasons_ = nullptr;};
    inline const vector<string> & getExcludeReasons() const { DARABONBA_PTR_GET_CONST(excludeReasons_, vector<string>) };
    inline vector<string> getExcludeReasons() { DARABONBA_PTR_GET(excludeReasons_, vector<string>) };
    inline DownloadResourceControlEventsRequest& setExcludeReasons(const vector<string> & excludeReasons) { DARABONBA_PTR_SET_VALUE(excludeReasons_, excludeReasons) };
    inline DownloadResourceControlEventsRequest& setExcludeReasons(vector<string> && excludeReasons) { DARABONBA_PTR_SET_RVALUE(excludeReasons_, excludeReasons) };


    // includeReasons Field Functions 
    bool hasIncludeReasons() const { return this->includeReasons_ != nullptr;};
    void deleteIncludeReasons() { this->includeReasons_ = nullptr;};
    inline const vector<string> & getIncludeReasons() const { DARABONBA_PTR_GET_CONST(includeReasons_, vector<string>) };
    inline vector<string> getIncludeReasons() { DARABONBA_PTR_GET(includeReasons_, vector<string>) };
    inline DownloadResourceControlEventsRequest& setIncludeReasons(const vector<string> & includeReasons) { DARABONBA_PTR_SET_VALUE(includeReasons_, includeReasons) };
    inline DownloadResourceControlEventsRequest& setIncludeReasons(vector<string> && includeReasons) { DARABONBA_PTR_SET_RVALUE(includeReasons_, includeReasons) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DownloadResourceControlEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DownloadResourceControlEventsRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DownloadResourceControlEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // punishEndTime Field Functions 
    bool hasPunishEndTime() const { return this->punishEndTime_ != nullptr;};
    void deletePunishEndTime() { this->punishEndTime_ = nullptr;};
    inline string getPunishEndTime() const { DARABONBA_PTR_GET_DEFAULT(punishEndTime_, "") };
    inline DownloadResourceControlEventsRequest& setPunishEndTime(string punishEndTime) { DARABONBA_PTR_SET_VALUE(punishEndTime_, punishEndTime) };


    // punishStartTime Field Functions 
    bool hasPunishStartTime() const { return this->punishStartTime_ != nullptr;};
    void deletePunishStartTime() { this->punishStartTime_ = nullptr;};
    inline string getPunishStartTime() const { DARABONBA_PTR_GET_DEFAULT(punishStartTime_, "") };
    inline DownloadResourceControlEventsRequest& setPunishStartTime(string punishStartTime) { DARABONBA_PTR_SET_VALUE(punishStartTime_, punishStartTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DownloadResourceControlEventsRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sourceCodes Field Functions 
    bool hasSourceCodes() const { return this->sourceCodes_ != nullptr;};
    void deleteSourceCodes() { this->sourceCodes_ = nullptr;};
    inline const vector<string> & getSourceCodes() const { DARABONBA_PTR_GET_CONST(sourceCodes_, vector<string>) };
    inline vector<string> getSourceCodes() { DARABONBA_PTR_GET(sourceCodes_, vector<string>) };
    inline DownloadResourceControlEventsRequest& setSourceCodes(const vector<string> & sourceCodes) { DARABONBA_PTR_SET_VALUE(sourceCodes_, sourceCodes) };
    inline DownloadResourceControlEventsRequest& setSourceCodes(vector<string> && sourceCodes) { DARABONBA_PTR_SET_RVALUE(sourceCodes_, sourceCodes) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DownloadResourceControlEventsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline DownloadResourceControlEventsRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline DownloadResourceControlEventsRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DownloadResourceControlEventsRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The action name code.
    shared_ptr<string> actionCode_ {};
    // The collection of control action name codes.
    // 
    // > Example: [\\\\\\"shutdown\\\\\\"]
    shared_ptr<vector<string>> actionCodes_ {};
    // The language. Valid values:
    // 
    // - **zh**: Chinese (default).
    // - **en**: English.
    shared_ptr<string> aliyunLang_ {};
    // The product.
    shared_ptr<string> businessCode_ {};
    // The collection of event name code prefixes.
    // 
    // > Example: [\\\\\\"BANFF\\\\\\"]
    shared_ptr<vector<string>> caseCodesPrefix_ {};
    // The current page number.
    // 
    // > Must be greater than 0.
    shared_ptr<int32_t> current_ {};
    // The domain name.
    shared_ptr<string> domain_ {};
    // The event name code.
    shared_ptr<string> eventCode_ {};
    // The collection of event name codes.
    // 
    // > Example: [\\\\\\"BANFF_ECS_PE_ECS_MINING_SHUTDOWN\\\\\\"]
    shared_ptr<vector<string>> eventCodes_ {};
    // The alert event ID.
    shared_ptr<string> eventId_ {};
    // The collection of excluded control action name codes.
    // 
    // > Example: [\\\\\\"shutdown\\\\\\"]
    shared_ptr<vector<string>> excludeActionCodes_ {};
    // The collection of excluded event name codes.
    // 
    // > Example: [\\\\\\"TEST_CASE\\\\\\"]
    shared_ptr<vector<string>> excludeEventCodes_ {};
    // The collection of excluded event reasons.
    // 
    // > Example: [\\\\\\"Mining alert\\\\\\"]
    shared_ptr<vector<string>> excludeReasons_ {};
    // The collection of included event reasons.
    // 
    // > Example: [\\\\\\"Mining alert\\\\\\"]
    shared_ptr<vector<string>> includeReasons_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // IP
    shared_ptr<string> ip_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // The penalty end time.
    // 
    // > Format: yyyy-MM-dd HH:mm:ss
    shared_ptr<string> punishEndTime_ {};
    // The penalty start time.
    // 
    // > Format: yyyy-MM-dd HH:mm:ss
    shared_ptr<string> punishStartTime_ {};
    // The event reason.
    shared_ptr<string> reason_ {};
    // The collection of event source codes.
    // 
    // > Example: [\\\\\\"MRM\\\\\\"]
    shared_ptr<vector<string>> sourceCodes_ {};
    // The task status.
    // 
    // - **Executing**: In progress.
    // - **Removed**: Removed.
    // - **Alerting**: Alerting.
    // - **Ended**: Ended.
    // - **Processed**: Processed by the user and pending platform review.
    shared_ptr<string> status_ {};
    // The collection of task statuses.
    // - **Executing**: In progress.
    // - **Removed**: Removed.
    // - **Alerting**: Alerting.
    // - **Ended**: Ended.
    // - **Processed**: Processed by the user and pending platform review.
    shared_ptr<vector<string>> statusList_ {};
    // The control URL.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
