// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYPAGEBEANEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYPAGEBEANEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertEventsResponseBodyPageBeanEventsAlarms.hpp>
#include <alibabacloud/models/ListAlertEventsResponseBodyPageBeanEventsNotificationPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertEventsResponseBodyPageBeanEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertEventsResponseBodyPageBeanEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Alarms, alarms_);
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GeneratorURL, generatorURL_);
      DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(NotificationPolicies, notificationPolicies_);
      DARABONBA_PTR_TO_JSON(ReceiveTime, receiveTime_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TriggerCount, triggerCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertEventsResponseBodyPageBeanEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarms, alarms_);
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GeneratorURL, generatorURL_);
      DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
      DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(NotificationPolicies, notificationPolicies_);
      DARABONBA_PTR_FROM_JSON(ReceiveTime, receiveTime_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TriggerCount, triggerCount_);
    };
    ListAlertEventsResponseBodyPageBeanEvents() = default ;
    ListAlertEventsResponseBodyPageBeanEvents(const ListAlertEventsResponseBodyPageBeanEvents &) = default ;
    ListAlertEventsResponseBodyPageBeanEvents(ListAlertEventsResponseBodyPageBeanEvents &&) = default ;
    ListAlertEventsResponseBodyPageBeanEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertEventsResponseBodyPageBeanEvents() = default ;
    ListAlertEventsResponseBodyPageBeanEvents& operator=(const ListAlertEventsResponseBodyPageBeanEvents &) = default ;
    ListAlertEventsResponseBodyPageBeanEvents& operator=(ListAlertEventsResponseBodyPageBeanEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarms_ != nullptr
        && this->alertName_ != nullptr && this->annotations_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr && this->generatorURL_ != nullptr
        && this->handlerName_ != nullptr && this->integrationName_ != nullptr && this->integrationType_ != nullptr && this->labels_ != nullptr && this->notificationPolicies_ != nullptr
        && this->receiveTime_ != nullptr && this->severity_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->triggerCount_ != nullptr; };
    // alarms Field Functions 
    bool hasAlarms() const { return this->alarms_ != nullptr;};
    void deleteAlarms() { this->alarms_ = nullptr;};
    inline const vector<Models::ListAlertEventsResponseBodyPageBeanEventsAlarms> & alarms() const { DARABONBA_PTR_GET_CONST(alarms_, vector<Models::ListAlertEventsResponseBodyPageBeanEventsAlarms>) };
    inline vector<Models::ListAlertEventsResponseBodyPageBeanEventsAlarms> alarms() { DARABONBA_PTR_GET(alarms_, vector<Models::ListAlertEventsResponseBodyPageBeanEventsAlarms>) };
    inline ListAlertEventsResponseBodyPageBeanEvents& setAlarms(const vector<Models::ListAlertEventsResponseBodyPageBeanEventsAlarms> & alarms) { DARABONBA_PTR_SET_VALUE(alarms_, alarms) };
    inline ListAlertEventsResponseBodyPageBeanEvents& setAlarms(vector<Models::ListAlertEventsResponseBodyPageBeanEventsAlarms> && alarms) { DARABONBA_PTR_SET_RVALUE(alarms_, alarms) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // generatorURL Field Functions 
    bool hasGeneratorURL() const { return this->generatorURL_ != nullptr;};
    void deleteGeneratorURL() { this->generatorURL_ = nullptr;};
    inline string generatorURL() const { DARABONBA_PTR_GET_DEFAULT(generatorURL_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setGeneratorURL(string generatorURL) { DARABONBA_PTR_SET_VALUE(generatorURL_, generatorURL) };


    // handlerName Field Functions 
    bool hasHandlerName() const { return this->handlerName_ != nullptr;};
    void deleteHandlerName() { this->handlerName_ = nullptr;};
    inline string handlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


    // integrationName Field Functions 
    bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
    void deleteIntegrationName() { this->integrationName_ = nullptr;};
    inline string integrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string integrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // notificationPolicies Field Functions 
    bool hasNotificationPolicies() const { return this->notificationPolicies_ != nullptr;};
    void deleteNotificationPolicies() { this->notificationPolicies_ = nullptr;};
    inline const vector<Models::ListAlertEventsResponseBodyPageBeanEventsNotificationPolicies> & notificationPolicies() const { DARABONBA_PTR_GET_CONST(notificationPolicies_, vector<Models::ListAlertEventsResponseBodyPageBeanEventsNotificationPolicies>) };
    inline vector<Models::ListAlertEventsResponseBodyPageBeanEventsNotificationPolicies> notificationPolicies() { DARABONBA_PTR_GET(notificationPolicies_, vector<Models::ListAlertEventsResponseBodyPageBeanEventsNotificationPolicies>) };
    inline ListAlertEventsResponseBodyPageBeanEvents& setNotificationPolicies(const vector<Models::ListAlertEventsResponseBodyPageBeanEventsNotificationPolicies> & notificationPolicies) { DARABONBA_PTR_SET_VALUE(notificationPolicies_, notificationPolicies) };
    inline ListAlertEventsResponseBodyPageBeanEvents& setNotificationPolicies(vector<Models::ListAlertEventsResponseBodyPageBeanEventsNotificationPolicies> && notificationPolicies) { DARABONBA_PTR_SET_RVALUE(notificationPolicies_, notificationPolicies) };


    // receiveTime Field Functions 
    bool hasReceiveTime() const { return this->receiveTime_ != nullptr;};
    void deleteReceiveTime() { this->receiveTime_ = nullptr;};
    inline string receiveTime() const { DARABONBA_PTR_GET_DEFAULT(receiveTime_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setReceiveTime(string receiveTime) { DARABONBA_PTR_SET_VALUE(receiveTime_, receiveTime) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAlertEventsResponseBodyPageBeanEvents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerCount Field Functions 
    bool hasTriggerCount() const { return this->triggerCount_ != nullptr;};
    void deleteTriggerCount() { this->triggerCount_ = nullptr;};
    inline int64_t triggerCount() const { DARABONBA_PTR_GET_DEFAULT(triggerCount_, 0L) };
    inline ListAlertEventsResponseBodyPageBeanEvents& setTriggerCount(int64_t triggerCount) { DARABONBA_PTR_SET_VALUE(triggerCount_, triggerCount) };


  protected:
    // The associated alerts.
    std::shared_ptr<vector<Models::ListAlertEventsResponseBodyPageBeanEventsAlarms>> alarms_ = nullptr;
    // The name of the alert.
    std::shared_ptr<string> alertName_ = nullptr;
    // The annotations.
    std::shared_ptr<string> annotations_ = nullptr;
    // The description of the alert event.
    std::shared_ptr<string> description_ = nullptr;
    // The end time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The URL of the alert event.
    std::shared_ptr<string> generatorURL_ = nullptr;
    // The user who handled the alert.
    std::shared_ptr<string> handlerName_ = nullptr;
    // The name of the alert integration.
    std::shared_ptr<string> integrationName_ = nullptr;
    // The type of the alert integration.
    std::shared_ptr<string> integrationType_ = nullptr;
    // The tags.
    std::shared_ptr<string> labels_ = nullptr;
    // The associated notification policies.
    std::shared_ptr<vector<Models::ListAlertEventsResponseBodyPageBeanEventsNotificationPolicies>> notificationPolicies_ = nullptr;
    // The time when the alert event was received.
    std::shared_ptr<string> receiveTime_ = nullptr;
    // The severity level of the alert. Valid values:
    // 
    // *   critical: P1
    // *   error: P2
    // *   warning: P3
    // *   page: P4
    // *   default: P6
    std::shared_ptr<string> severity_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the alert event. Valid values:
    // 
    // *   Active
    // *   Silenced
    // *   Resolved
    std::shared_ptr<string> status_ = nullptr;
    // The number of times the event is triggered.
    std::shared_ptr<int64_t> triggerCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
