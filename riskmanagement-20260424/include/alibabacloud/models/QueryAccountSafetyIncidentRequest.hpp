// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTSAFETYINCIDENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTSAFETYINCIDENTREQUEST_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(CaseCode, caseCode_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_TO_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountSafetyIncidentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(CaseCode, caseCode_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PunishEndTime, punishEndTime_);
      DARABONBA_PTR_FROM_JSON(PunishStartTime, punishStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
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
    virtual bool empty() const override { return this->aliyunLang_ == nullptr
        && this->caseCode_ == nullptr && this->current_ == nullptr && this->eventId_ == nullptr && this->pageSize_ == nullptr && this->punishEndTime_ == nullptr
        && this->punishStartTime_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr; };
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


  protected:
    shared_ptr<string> aliyunLang_ {};
    shared_ptr<string> caseCode_ {};
    shared_ptr<string> current_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> punishEndTime_ {};
    shared_ptr<string> punishStartTime_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
