// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTSAFETYINCIDENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTSAFETYINCIDENTREQUEST_HPP_
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
  class QueryAccountSafetyIncidentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountSafetyIncidentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionCodes, actionCodes_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(CaseCode, caseCode_);
      DARABONBA_PTR_TO_JSON(CaseCodes, caseCodes_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventIds, eventIds_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_TO_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountSafetyIncidentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionCodes, actionCodes_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(CaseCode, caseCode_);
      DARABONBA_PTR_FROM_JSON(CaseCodes, caseCodes_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventIds, eventIds_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_FROM_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    QueryAccountSafetyIncidentRequest() = default ;
    QueryAccountSafetyIncidentRequest(const QueryAccountSafetyIncidentRequest &) = default ;
    QueryAccountSafetyIncidentRequest(QueryAccountSafetyIncidentRequest &&) = default ;
    QueryAccountSafetyIncidentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountSafetyIncidentRequest() = default ;
    QueryAccountSafetyIncidentRequest& operator=(const QueryAccountSafetyIncidentRequest &) = default ;
    QueryAccountSafetyIncidentRequest& operator=(QueryAccountSafetyIncidentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionCodes_ == nullptr
        && this->aliyunLang_ == nullptr && this->caseCode_ == nullptr && this->caseCodes_ == nullptr && this->current_ == nullptr && this->eventId_ == nullptr
        && this->eventIds_ == nullptr && this->pageSize_ == nullptr && this->punishEndTime_ == nullptr && this->punishStartTime_ == nullptr && this->resourceId_ == nullptr
        && this->status_ == nullptr && this->statuses_ == nullptr; };
    // actionCodes Field Functions 
    bool hasActionCodes() const { return this->actionCodes_ != nullptr;};
    void deleteActionCodes() { this->actionCodes_ = nullptr;};
    inline const vector<string> & getActionCodes() const { DARABONBA_PTR_GET_CONST(actionCodes_, vector<string>) };
    inline vector<string> getActionCodes() { DARABONBA_PTR_GET(actionCodes_, vector<string>) };
    inline QueryAccountSafetyIncidentRequest& setActionCodes(const vector<string> & actionCodes) { DARABONBA_PTR_SET_VALUE(actionCodes_, actionCodes) };
    inline QueryAccountSafetyIncidentRequest& setActionCodes(vector<string> && actionCodes) { DARABONBA_PTR_SET_RVALUE(actionCodes_, actionCodes) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline QueryAccountSafetyIncidentRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // caseCode Field Functions 
    bool hasCaseCode() const { return this->caseCode_ != nullptr;};
    void deleteCaseCode() { this->caseCode_ = nullptr;};
    inline string getCaseCode() const { DARABONBA_PTR_GET_DEFAULT(caseCode_, "") };
    inline QueryAccountSafetyIncidentRequest& setCaseCode(string caseCode) { DARABONBA_PTR_SET_VALUE(caseCode_, caseCode) };


    // caseCodes Field Functions 
    bool hasCaseCodes() const { return this->caseCodes_ != nullptr;};
    void deleteCaseCodes() { this->caseCodes_ = nullptr;};
    inline const vector<string> & getCaseCodes() const { DARABONBA_PTR_GET_CONST(caseCodes_, vector<string>) };
    inline vector<string> getCaseCodes() { DARABONBA_PTR_GET(caseCodes_, vector<string>) };
    inline QueryAccountSafetyIncidentRequest& setCaseCodes(const vector<string> & caseCodes) { DARABONBA_PTR_SET_VALUE(caseCodes_, caseCodes) };
    inline QueryAccountSafetyIncidentRequest& setCaseCodes(vector<string> && caseCodes) { DARABONBA_PTR_SET_RVALUE(caseCodes_, caseCodes) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline string getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
    inline QueryAccountSafetyIncidentRequest& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline QueryAccountSafetyIncidentRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventIds Field Functions 
    bool hasEventIds() const { return this->eventIds_ != nullptr;};
    void deleteEventIds() { this->eventIds_ = nullptr;};
    inline const vector<string> & getEventIds() const { DARABONBA_PTR_GET_CONST(eventIds_, vector<string>) };
    inline vector<string> getEventIds() { DARABONBA_PTR_GET(eventIds_, vector<string>) };
    inline QueryAccountSafetyIncidentRequest& setEventIds(const vector<string> & eventIds) { DARABONBA_PTR_SET_VALUE(eventIds_, eventIds) };
    inline QueryAccountSafetyIncidentRequest& setEventIds(vector<string> && eventIds) { DARABONBA_PTR_SET_RVALUE(eventIds_, eventIds) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline QueryAccountSafetyIncidentRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // punishEndTime Field Functions 
    bool hasPunishEndTime() const { return this->punishEndTime_ != nullptr;};
    void deletePunishEndTime() { this->punishEndTime_ = nullptr;};
    inline string getPunishEndTime() const { DARABONBA_PTR_GET_DEFAULT(punishEndTime_, "") };
    inline QueryAccountSafetyIncidentRequest& setPunishEndTime(string punishEndTime) { DARABONBA_PTR_SET_VALUE(punishEndTime_, punishEndTime) };


    // punishStartTime Field Functions 
    bool hasPunishStartTime() const { return this->punishStartTime_ != nullptr;};
    void deletePunishStartTime() { this->punishStartTime_ = nullptr;};
    inline string getPunishStartTime() const { DARABONBA_PTR_GET_DEFAULT(punishStartTime_, "") };
    inline QueryAccountSafetyIncidentRequest& setPunishStartTime(string punishStartTime) { DARABONBA_PTR_SET_VALUE(punishStartTime_, punishStartTime) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline QueryAccountSafetyIncidentRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryAccountSafetyIncidentRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline QueryAccountSafetyIncidentRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline QueryAccountSafetyIncidentRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // The list of control action codes.
    shared_ptr<vector<string>> actionCodes_ {};
    // The internationalization language. Default value: zh. Valid values:
    // 
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> aliyunLang_ {};
    // The event name code.
    shared_ptr<string> caseCode_ {};
    // The list of event name codes.
    shared_ptr<vector<string>> caseCodes_ {};
    // The current page number. The value must be greater than 0.
    shared_ptr<string> current_ {};
    // The event ID.
    shared_ptr<string> eventId_ {};
    shared_ptr<vector<string>> eventIds_ {};
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
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
