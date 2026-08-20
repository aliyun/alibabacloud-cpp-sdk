// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTSAFETYINCIDENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTSAFETYINCIDENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class QueryAccountSafetyIncidentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountSafetyIncidentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionCodes, actionCodesShrink_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(CaseCode, caseCode_);
      DARABONBA_PTR_TO_JSON(CaseCodes, caseCodesShrink_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventIds, eventIdsShrink_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_TO_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Statuses, statusesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountSafetyIncidentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionCodes, actionCodesShrink_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(CaseCode, caseCode_);
      DARABONBA_PTR_FROM_JSON(CaseCodes, caseCodesShrink_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventIds, eventIdsShrink_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_FROM_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Statuses, statusesShrink_);
    };
    QueryAccountSafetyIncidentShrinkRequest() = default ;
    QueryAccountSafetyIncidentShrinkRequest(const QueryAccountSafetyIncidentShrinkRequest &) = default ;
    QueryAccountSafetyIncidentShrinkRequest(QueryAccountSafetyIncidentShrinkRequest &&) = default ;
    QueryAccountSafetyIncidentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountSafetyIncidentShrinkRequest() = default ;
    QueryAccountSafetyIncidentShrinkRequest& operator=(const QueryAccountSafetyIncidentShrinkRequest &) = default ;
    QueryAccountSafetyIncidentShrinkRequest& operator=(QueryAccountSafetyIncidentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionCodesShrink_ == nullptr
        && this->aliyunLang_ == nullptr && this->caseCode_ == nullptr && this->caseCodesShrink_ == nullptr && this->current_ == nullptr && this->eventId_ == nullptr
        && this->eventIdsShrink_ == nullptr && this->pageSize_ == nullptr && this->punishEndTime_ == nullptr && this->punishStartTime_ == nullptr && this->resourceId_ == nullptr
        && this->status_ == nullptr && this->statusesShrink_ == nullptr; };
    // actionCodesShrink Field Functions 
    bool hasActionCodesShrink() const { return this->actionCodesShrink_ != nullptr;};
    void deleteActionCodesShrink() { this->actionCodesShrink_ = nullptr;};
    inline string getActionCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(actionCodesShrink_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setActionCodesShrink(string actionCodesShrink) { DARABONBA_PTR_SET_VALUE(actionCodesShrink_, actionCodesShrink) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // caseCode Field Functions 
    bool hasCaseCode() const { return this->caseCode_ != nullptr;};
    void deleteCaseCode() { this->caseCode_ = nullptr;};
    inline string getCaseCode() const { DARABONBA_PTR_GET_DEFAULT(caseCode_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setCaseCode(string caseCode) { DARABONBA_PTR_SET_VALUE(caseCode_, caseCode) };


    // caseCodesShrink Field Functions 
    bool hasCaseCodesShrink() const { return this->caseCodesShrink_ != nullptr;};
    void deleteCaseCodesShrink() { this->caseCodesShrink_ = nullptr;};
    inline string getCaseCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(caseCodesShrink_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setCaseCodesShrink(string caseCodesShrink) { DARABONBA_PTR_SET_VALUE(caseCodesShrink_, caseCodesShrink) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline string getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventIdsShrink Field Functions 
    bool hasEventIdsShrink() const { return this->eventIdsShrink_ != nullptr;};
    void deleteEventIdsShrink() { this->eventIdsShrink_ = nullptr;};
    inline string getEventIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(eventIdsShrink_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setEventIdsShrink(string eventIdsShrink) { DARABONBA_PTR_SET_VALUE(eventIdsShrink_, eventIdsShrink) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // punishEndTime Field Functions 
    bool hasPunishEndTime() const { return this->punishEndTime_ != nullptr;};
    void deletePunishEndTime() { this->punishEndTime_ = nullptr;};
    inline string getPunishEndTime() const { DARABONBA_PTR_GET_DEFAULT(punishEndTime_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setPunishEndTime(string punishEndTime) { DARABONBA_PTR_SET_VALUE(punishEndTime_, punishEndTime) };


    // punishStartTime Field Functions 
    bool hasPunishStartTime() const { return this->punishStartTime_ != nullptr;};
    void deletePunishStartTime() { this->punishStartTime_ = nullptr;};
    inline string getPunishStartTime() const { DARABONBA_PTR_GET_DEFAULT(punishStartTime_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setPunishStartTime(string punishStartTime) { DARABONBA_PTR_SET_VALUE(punishStartTime_, punishStartTime) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusesShrink Field Functions 
    bool hasStatusesShrink() const { return this->statusesShrink_ != nullptr;};
    void deleteStatusesShrink() { this->statusesShrink_ = nullptr;};
    inline string getStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(statusesShrink_, "") };
    inline QueryAccountSafetyIncidentShrinkRequest& setStatusesShrink(string statusesShrink) { DARABONBA_PTR_SET_VALUE(statusesShrink_, statusesShrink) };


  protected:
    // The list of control action codes.
    shared_ptr<string> actionCodesShrink_ {};
    // The internationalization language. Default value: zh. Valid values:
    // 
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> aliyunLang_ {};
    // The event name code.
    shared_ptr<string> caseCode_ {};
    // The list of event name codes.
    shared_ptr<string> caseCodesShrink_ {};
    // The current page number. The value must be greater than 0.
    shared_ptr<string> current_ {};
    // The event ID.
    shared_ptr<string> eventId_ {};
    shared_ptr<string> eventIdsShrink_ {};
    // The number of records per page. Valid values: 1 to 100.
    shared_ptr<string> pageSize_ {};
    // The control end time.
    // 
    // > Format: yyyy-MM-dd HH:mm:ss
    shared_ptr<string> punishEndTime_ {};
    // The control start time.
    // 
    // > Format: yyyy-MM-dd HH:mm:ss
    shared_ptr<string> punishStartTime_ {};
    // The resource ID.
    shared_ptr<string> resourceId_ {};
    // The event status. Valid values:
    // 
    // - **Executing**: In progress.
    // - **Removed**: Removed.
    // - **Alerting**: Alerting.
    // - **Ended**: Ended.
    shared_ptr<string> status_ {};
    shared_ptr<string> statusesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
