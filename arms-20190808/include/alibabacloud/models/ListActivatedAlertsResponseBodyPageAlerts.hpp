// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODYPAGEALERTS_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIVATEDALERTSRESPONSEBODYPAGEALERTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListActivatedAlertsResponseBodyPageAlertsDispatchRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListActivatedAlertsResponseBodyPageAlerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActivatedAlertsResponseBodyPageAlerts& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DispatchRules, dispatchRules_);
      DARABONBA_PTR_TO_JSON(EndsAt, endsAt_);
      DARABONBA_ANY_TO_JSON(ExpandFields, expandFields_);
      DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(InvolvedObjectKind, involvedObjectKind_);
      DARABONBA_PTR_TO_JSON(InvolvedObjectName, involvedObjectName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(StartsAt, startsAt_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListActivatedAlertsResponseBodyPageAlerts& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DispatchRules, dispatchRules_);
      DARABONBA_PTR_FROM_JSON(EndsAt, endsAt_);
      DARABONBA_ANY_FROM_JSON(ExpandFields, expandFields_);
      DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(InvolvedObjectKind, involvedObjectKind_);
      DARABONBA_PTR_FROM_JSON(InvolvedObjectName, involvedObjectName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(StartsAt, startsAt_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListActivatedAlertsResponseBodyPageAlerts() = default ;
    ListActivatedAlertsResponseBodyPageAlerts(const ListActivatedAlertsResponseBodyPageAlerts &) = default ;
    ListActivatedAlertsResponseBodyPageAlerts(ListActivatedAlertsResponseBodyPageAlerts &&) = default ;
    ListActivatedAlertsResponseBodyPageAlerts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActivatedAlertsResponseBodyPageAlerts() = default ;
    ListActivatedAlertsResponseBodyPageAlerts& operator=(const ListActivatedAlertsResponseBodyPageAlerts &) = default ;
    ListActivatedAlertsResponseBodyPageAlerts& operator=(ListActivatedAlertsResponseBodyPageAlerts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->alertName_ != nullptr && this->alertType_ != nullptr && this->count_ != nullptr && this->createTime_ != nullptr && this->dispatchRules_ != nullptr
        && this->endsAt_ != nullptr && this->expandFields_ != nullptr && this->integrationName_ != nullptr && this->integrationType_ != nullptr && this->involvedObjectKind_ != nullptr
        && this->involvedObjectName_ != nullptr && this->message_ != nullptr && this->severity_ != nullptr && this->startsAt_ != nullptr && this->status_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline string alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setAlertId(string alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListActivatedAlertsResponseBodyPageAlerts& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListActivatedAlertsResponseBodyPageAlerts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dispatchRules Field Functions 
    bool hasDispatchRules() const { return this->dispatchRules_ != nullptr;};
    void deleteDispatchRules() { this->dispatchRules_ = nullptr;};
    inline const vector<Models::ListActivatedAlertsResponseBodyPageAlertsDispatchRules> & dispatchRules() const { DARABONBA_PTR_GET_CONST(dispatchRules_, vector<Models::ListActivatedAlertsResponseBodyPageAlertsDispatchRules>) };
    inline vector<Models::ListActivatedAlertsResponseBodyPageAlertsDispatchRules> dispatchRules() { DARABONBA_PTR_GET(dispatchRules_, vector<Models::ListActivatedAlertsResponseBodyPageAlertsDispatchRules>) };
    inline ListActivatedAlertsResponseBodyPageAlerts& setDispatchRules(const vector<Models::ListActivatedAlertsResponseBodyPageAlertsDispatchRules> & dispatchRules) { DARABONBA_PTR_SET_VALUE(dispatchRules_, dispatchRules) };
    inline ListActivatedAlertsResponseBodyPageAlerts& setDispatchRules(vector<Models::ListActivatedAlertsResponseBodyPageAlertsDispatchRules> && dispatchRules) { DARABONBA_PTR_SET_RVALUE(dispatchRules_, dispatchRules) };


    // endsAt Field Functions 
    bool hasEndsAt() const { return this->endsAt_ != nullptr;};
    void deleteEndsAt() { this->endsAt_ = nullptr;};
    inline int64_t endsAt() const { DARABONBA_PTR_GET_DEFAULT(endsAt_, 0L) };
    inline ListActivatedAlertsResponseBodyPageAlerts& setEndsAt(int64_t endsAt) { DARABONBA_PTR_SET_VALUE(endsAt_, endsAt) };


    // expandFields Field Functions 
    bool hasExpandFields() const { return this->expandFields_ != nullptr;};
    void deleteExpandFields() { this->expandFields_ = nullptr;};
    inline     const Darabonba::Json & expandFields() const { DARABONBA_GET(expandFields_) };
    Darabonba::Json & expandFields() { DARABONBA_GET(expandFields_) };
    inline ListActivatedAlertsResponseBodyPageAlerts& setExpandFields(const Darabonba::Json & expandFields) { DARABONBA_SET_VALUE(expandFields_, expandFields) };
    inline ListActivatedAlertsResponseBodyPageAlerts& setExpandFields(Darabonba::Json & expandFields) { DARABONBA_SET_RVALUE(expandFields_, expandFields) };


    // integrationName Field Functions 
    bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
    void deleteIntegrationName() { this->integrationName_ = nullptr;};
    inline string integrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string integrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // involvedObjectKind Field Functions 
    bool hasInvolvedObjectKind() const { return this->involvedObjectKind_ != nullptr;};
    void deleteInvolvedObjectKind() { this->involvedObjectKind_ = nullptr;};
    inline string involvedObjectKind() const { DARABONBA_PTR_GET_DEFAULT(involvedObjectKind_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setInvolvedObjectKind(string involvedObjectKind) { DARABONBA_PTR_SET_VALUE(involvedObjectKind_, involvedObjectKind) };


    // involvedObjectName Field Functions 
    bool hasInvolvedObjectName() const { return this->involvedObjectName_ != nullptr;};
    void deleteInvolvedObjectName() { this->involvedObjectName_ = nullptr;};
    inline string involvedObjectName() const { DARABONBA_PTR_GET_DEFAULT(involvedObjectName_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setInvolvedObjectName(string involvedObjectName) { DARABONBA_PTR_SET_VALUE(involvedObjectName_, involvedObjectName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // startsAt Field Functions 
    bool hasStartsAt() const { return this->startsAt_ != nullptr;};
    void deleteStartsAt() { this->startsAt_ = nullptr;};
    inline int64_t startsAt() const { DARABONBA_PTR_GET_DEFAULT(startsAt_, 0L) };
    inline ListActivatedAlertsResponseBodyPageAlerts& setStartsAt(int64_t startsAt) { DARABONBA_PTR_SET_VALUE(startsAt_, startsAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListActivatedAlertsResponseBodyPageAlerts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the alert rule.
    std::shared_ptr<string> alertId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> alertName_ = nullptr;
    // The type of the alert.
    std::shared_ptr<string> alertType_ = nullptr;
    // The number of times that the alert event was received.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The timestamp when the alert rule was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The notification policies.
    std::shared_ptr<vector<Models::ListActivatedAlertsResponseBodyPageAlertsDispatchRules>> dispatchRules_ = nullptr;
    // The timestamp when the alert was ended.
    std::shared_ptr<int64_t> endsAt_ = nullptr;
    // The extended fields that indicate the following tags:
    // 
    // *   The tags that are carried in the metrics of the alert rule expression.
    // *   The tags that are created based on the alert rule.
    // *   The default tags of Application Real-Time Monitoring Service (ARMS).
    Darabonba::Json expandFields_ = nullptr;
    // The name of the object that is associated with the alert.
    std::shared_ptr<string> integrationName_ = nullptr;
    // The type of the service integration that generated the alert.
    std::shared_ptr<string> integrationType_ = nullptr;
    // The type of the object that is associated with the alert.
    std::shared_ptr<string> involvedObjectKind_ = nullptr;
    // The name of the service integration that generated the alert.
    std::shared_ptr<string> involvedObjectName_ = nullptr;
    // The description of the alert.
    std::shared_ptr<string> message_ = nullptr;
    // The level of the alert. Valid values:
    // 
    // *   `critical`
    // *   `error`
    // *   `warn`
    // *   `page`
    std::shared_ptr<string> severity_ = nullptr;
    // The timestamp when the alert was generated.
    std::shared_ptr<int64_t> startsAt_ = nullptr;
    // The status of the alert. Valid values:
    // 
    // *   `Active`
    // *   `Inhibited`
    // *   `Silenced`
    // *   `Resolved`
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
