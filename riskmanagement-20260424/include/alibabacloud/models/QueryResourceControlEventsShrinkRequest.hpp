// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCECONTROLEVENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCECONTROLEVENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class QueryResourceControlEventsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourceControlEventsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionCode, actionCode_);
      DARABONBA_PTR_TO_JSON(ActionCodes, actionCodesShrink_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(BusinessCode, businessCode_);
      DARABONBA_PTR_TO_JSON(CaseCodesPrefix, caseCodesPrefixShrink_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(EventCodes, eventCodesShrink_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventIdList, eventIdListShrink_);
      DARABONBA_PTR_TO_JSON(ExcludeActionCodes, excludeActionCodesShrink_);
      DARABONBA_PTR_TO_JSON(ExcludeEventCodes, excludeEventCodesShrink_);
      DARABONBA_PTR_TO_JSON(ExcludeReasons, excludeReasonsShrink_);
      DARABONBA_PTR_TO_JSON(IncludeReasons, includeReasonsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_TO_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(SourceCodes, sourceCodesShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusList, statusListShrink_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourceControlEventsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionCode, actionCode_);
      DARABONBA_PTR_FROM_JSON(ActionCodes, actionCodesShrink_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(BusinessCode, businessCode_);
      DARABONBA_PTR_FROM_JSON(CaseCodesPrefix, caseCodesPrefixShrink_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(EventCodes, eventCodesShrink_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventIdList, eventIdListShrink_);
      DARABONBA_PTR_FROM_JSON(ExcludeActionCodes, excludeActionCodesShrink_);
      DARABONBA_PTR_FROM_JSON(ExcludeEventCodes, excludeEventCodesShrink_);
      DARABONBA_PTR_FROM_JSON(ExcludeReasons, excludeReasonsShrink_);
      DARABONBA_PTR_FROM_JSON(IncludeReasons, includeReasonsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_FROM_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(SourceCodes, sourceCodesShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusListShrink_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    QueryResourceControlEventsShrinkRequest() = default ;
    QueryResourceControlEventsShrinkRequest(const QueryResourceControlEventsShrinkRequest &) = default ;
    QueryResourceControlEventsShrinkRequest(QueryResourceControlEventsShrinkRequest &&) = default ;
    QueryResourceControlEventsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourceControlEventsShrinkRequest() = default ;
    QueryResourceControlEventsShrinkRequest& operator=(const QueryResourceControlEventsShrinkRequest &) = default ;
    QueryResourceControlEventsShrinkRequest& operator=(QueryResourceControlEventsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionCode_ == nullptr
        && this->actionCodesShrink_ == nullptr && this->aliyunLang_ == nullptr && this->businessCode_ == nullptr && this->caseCodesPrefixShrink_ == nullptr && this->current_ == nullptr
        && this->domain_ == nullptr && this->eventCode_ == nullptr && this->eventCodesShrink_ == nullptr && this->eventId_ == nullptr && this->eventIdListShrink_ == nullptr
        && this->excludeActionCodesShrink_ == nullptr && this->excludeEventCodesShrink_ == nullptr && this->excludeReasonsShrink_ == nullptr && this->includeReasonsShrink_ == nullptr && this->instanceId_ == nullptr
        && this->ip_ == nullptr && this->pageSize_ == nullptr && this->punishEndTime_ == nullptr && this->punishStartTime_ == nullptr && this->reason_ == nullptr
        && this->sourceCodesShrink_ == nullptr && this->status_ == nullptr && this->statusListShrink_ == nullptr && this->url_ == nullptr; };
    // actionCode Field Functions 
    bool hasActionCode() const { return this->actionCode_ != nullptr;};
    void deleteActionCode() { this->actionCode_ = nullptr;};
    inline string getActionCode() const { DARABONBA_PTR_GET_DEFAULT(actionCode_, "") };
    inline QueryResourceControlEventsShrinkRequest& setActionCode(string actionCode) { DARABONBA_PTR_SET_VALUE(actionCode_, actionCode) };


    // actionCodesShrink Field Functions 
    bool hasActionCodesShrink() const { return this->actionCodesShrink_ != nullptr;};
    void deleteActionCodesShrink() { this->actionCodesShrink_ = nullptr;};
    inline string getActionCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(actionCodesShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setActionCodesShrink(string actionCodesShrink) { DARABONBA_PTR_SET_VALUE(actionCodesShrink_, actionCodesShrink) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline QueryResourceControlEventsShrinkRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // businessCode Field Functions 
    bool hasBusinessCode() const { return this->businessCode_ != nullptr;};
    void deleteBusinessCode() { this->businessCode_ = nullptr;};
    inline string getBusinessCode() const { DARABONBA_PTR_GET_DEFAULT(businessCode_, "") };
    inline QueryResourceControlEventsShrinkRequest& setBusinessCode(string businessCode) { DARABONBA_PTR_SET_VALUE(businessCode_, businessCode) };


    // caseCodesPrefixShrink Field Functions 
    bool hasCaseCodesPrefixShrink() const { return this->caseCodesPrefixShrink_ != nullptr;};
    void deleteCaseCodesPrefixShrink() { this->caseCodesPrefixShrink_ = nullptr;};
    inline string getCaseCodesPrefixShrink() const { DARABONBA_PTR_GET_DEFAULT(caseCodesPrefixShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setCaseCodesPrefixShrink(string caseCodesPrefixShrink) { DARABONBA_PTR_SET_VALUE(caseCodesPrefixShrink_, caseCodesPrefixShrink) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline QueryResourceControlEventsShrinkRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline QueryResourceControlEventsShrinkRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline QueryResourceControlEventsShrinkRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventCodesShrink Field Functions 
    bool hasEventCodesShrink() const { return this->eventCodesShrink_ != nullptr;};
    void deleteEventCodesShrink() { this->eventCodesShrink_ = nullptr;};
    inline string getEventCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(eventCodesShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setEventCodesShrink(string eventCodesShrink) { DARABONBA_PTR_SET_VALUE(eventCodesShrink_, eventCodesShrink) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline QueryResourceControlEventsShrinkRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventIdListShrink Field Functions 
    bool hasEventIdListShrink() const { return this->eventIdListShrink_ != nullptr;};
    void deleteEventIdListShrink() { this->eventIdListShrink_ = nullptr;};
    inline string getEventIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(eventIdListShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setEventIdListShrink(string eventIdListShrink) { DARABONBA_PTR_SET_VALUE(eventIdListShrink_, eventIdListShrink) };


    // excludeActionCodesShrink Field Functions 
    bool hasExcludeActionCodesShrink() const { return this->excludeActionCodesShrink_ != nullptr;};
    void deleteExcludeActionCodesShrink() { this->excludeActionCodesShrink_ = nullptr;};
    inline string getExcludeActionCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(excludeActionCodesShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setExcludeActionCodesShrink(string excludeActionCodesShrink) { DARABONBA_PTR_SET_VALUE(excludeActionCodesShrink_, excludeActionCodesShrink) };


    // excludeEventCodesShrink Field Functions 
    bool hasExcludeEventCodesShrink() const { return this->excludeEventCodesShrink_ != nullptr;};
    void deleteExcludeEventCodesShrink() { this->excludeEventCodesShrink_ = nullptr;};
    inline string getExcludeEventCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(excludeEventCodesShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setExcludeEventCodesShrink(string excludeEventCodesShrink) { DARABONBA_PTR_SET_VALUE(excludeEventCodesShrink_, excludeEventCodesShrink) };


    // excludeReasonsShrink Field Functions 
    bool hasExcludeReasonsShrink() const { return this->excludeReasonsShrink_ != nullptr;};
    void deleteExcludeReasonsShrink() { this->excludeReasonsShrink_ = nullptr;};
    inline string getExcludeReasonsShrink() const { DARABONBA_PTR_GET_DEFAULT(excludeReasonsShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setExcludeReasonsShrink(string excludeReasonsShrink) { DARABONBA_PTR_SET_VALUE(excludeReasonsShrink_, excludeReasonsShrink) };


    // includeReasonsShrink Field Functions 
    bool hasIncludeReasonsShrink() const { return this->includeReasonsShrink_ != nullptr;};
    void deleteIncludeReasonsShrink() { this->includeReasonsShrink_ = nullptr;};
    inline string getIncludeReasonsShrink() const { DARABONBA_PTR_GET_DEFAULT(includeReasonsShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setIncludeReasonsShrink(string includeReasonsShrink) { DARABONBA_PTR_SET_VALUE(includeReasonsShrink_, includeReasonsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryResourceControlEventsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline QueryResourceControlEventsShrinkRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryResourceControlEventsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // punishEndTime Field Functions 
    bool hasPunishEndTime() const { return this->punishEndTime_ != nullptr;};
    void deletePunishEndTime() { this->punishEndTime_ = nullptr;};
    inline string getPunishEndTime() const { DARABONBA_PTR_GET_DEFAULT(punishEndTime_, "") };
    inline QueryResourceControlEventsShrinkRequest& setPunishEndTime(string punishEndTime) { DARABONBA_PTR_SET_VALUE(punishEndTime_, punishEndTime) };


    // punishStartTime Field Functions 
    bool hasPunishStartTime() const { return this->punishStartTime_ != nullptr;};
    void deletePunishStartTime() { this->punishStartTime_ = nullptr;};
    inline string getPunishStartTime() const { DARABONBA_PTR_GET_DEFAULT(punishStartTime_, "") };
    inline QueryResourceControlEventsShrinkRequest& setPunishStartTime(string punishStartTime) { DARABONBA_PTR_SET_VALUE(punishStartTime_, punishStartTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline QueryResourceControlEventsShrinkRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sourceCodesShrink Field Functions 
    bool hasSourceCodesShrink() const { return this->sourceCodesShrink_ != nullptr;};
    void deleteSourceCodesShrink() { this->sourceCodesShrink_ = nullptr;};
    inline string getSourceCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceCodesShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setSourceCodesShrink(string sourceCodesShrink) { DARABONBA_PTR_SET_VALUE(sourceCodesShrink_, sourceCodesShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryResourceControlEventsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusListShrink Field Functions 
    bool hasStatusListShrink() const { return this->statusListShrink_ != nullptr;};
    void deleteStatusListShrink() { this->statusListShrink_ = nullptr;};
    inline string getStatusListShrink() const { DARABONBA_PTR_GET_DEFAULT(statusListShrink_, "") };
    inline QueryResourceControlEventsShrinkRequest& setStatusListShrink(string statusListShrink) { DARABONBA_PTR_SET_VALUE(statusListShrink_, statusListShrink) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline QueryResourceControlEventsShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> actionCode_ {};
    shared_ptr<string> actionCodesShrink_ {};
    shared_ptr<string> aliyunLang_ {};
    shared_ptr<string> businessCode_ {};
    shared_ptr<string> caseCodesPrefixShrink_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<string> eventCode_ {};
    shared_ptr<string> eventCodesShrink_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> eventIdListShrink_ {};
    shared_ptr<string> excludeActionCodesShrink_ {};
    shared_ptr<string> excludeEventCodesShrink_ {};
    shared_ptr<string> excludeReasonsShrink_ {};
    shared_ptr<string> includeReasonsShrink_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ip_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> punishEndTime_ {};
    shared_ptr<string> punishStartTime_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<string> sourceCodesShrink_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> statusListShrink_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
