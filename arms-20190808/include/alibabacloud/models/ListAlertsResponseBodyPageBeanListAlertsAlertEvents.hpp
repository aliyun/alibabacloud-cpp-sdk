// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYPAGEBEANLISTALERTSALERTEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYPAGEBEANLISTALERTSALERTEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertsResponseBodyPageBeanListAlertsAlertEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBodyPageBeanListAlertsAlertEvents& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GeneratorURL, generatorURL_);
      DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(ReceiveTime, receiveTime_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBodyPageBeanListAlertsAlertEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GeneratorURL, generatorURL_);
      DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(ReceiveTime, receiveTime_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListAlertsResponseBodyPageBeanListAlertsAlertEvents() = default ;
    ListAlertsResponseBodyPageBeanListAlertsAlertEvents(const ListAlertsResponseBodyPageBeanListAlertsAlertEvents &) = default ;
    ListAlertsResponseBodyPageBeanListAlertsAlertEvents(ListAlertsResponseBodyPageBeanListAlertsAlertEvents &&) = default ;
    ListAlertsResponseBodyPageBeanListAlertsAlertEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBodyPageBeanListAlertsAlertEvents() = default ;
    ListAlertsResponseBodyPageBeanListAlertsAlertEvents& operator=(const ListAlertsResponseBodyPageBeanListAlertsAlertEvents &) = default ;
    ListAlertsResponseBodyPageBeanListAlertsAlertEvents& operator=(ListAlertsResponseBodyPageBeanListAlertsAlertEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertName_ != nullptr
        && this->annotations_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr && this->generatorURL_ != nullptr && this->integrationName_ != nullptr
        && this->integrationType_ != nullptr && this->labels_ != nullptr && this->receiveTime_ != nullptr && this->severity_ != nullptr && this->startTime_ != nullptr
        && this->state_ != nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // generatorURL Field Functions 
    bool hasGeneratorURL() const { return this->generatorURL_ != nullptr;};
    void deleteGeneratorURL() { this->generatorURL_ = nullptr;};
    inline string generatorURL() const { DARABONBA_PTR_GET_DEFAULT(generatorURL_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setGeneratorURL(string generatorURL) { DARABONBA_PTR_SET_VALUE(generatorURL_, generatorURL) };


    // integrationName Field Functions 
    bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
    void deleteIntegrationName() { this->integrationName_ = nullptr;};
    inline string integrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string integrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // receiveTime Field Functions 
    bool hasReceiveTime() const { return this->receiveTime_ != nullptr;};
    void deleteReceiveTime() { this->receiveTime_ = nullptr;};
    inline string receiveTime() const { DARABONBA_PTR_GET_DEFAULT(receiveTime_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setReceiveTime(string receiveTime) { DARABONBA_PTR_SET_VALUE(receiveTime_, receiveTime) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListAlertsResponseBodyPageBeanListAlertsAlertEvents& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The name of the event.
    std::shared_ptr<string> alertName_ = nullptr;
    // The annotations.
    std::shared_ptr<string> annotations_ = nullptr;
    // The description of the event.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the event ended.
    std::shared_ptr<string> endTime_ = nullptr;
    // The URL of the event.
    std::shared_ptr<string> generatorURL_ = nullptr;
    // The name of the integration that corresponds to the alert event.
    std::shared_ptr<string> integrationName_ = nullptr;
    // The type of the integration that corresponds to the alert event. Valid values:
    // 
    // *   ARMS
    // *   CLOUD_MONITOR
    // *   MSE
    // *   ARMS_CLOUD_DIALTEST
    // *   PROMETHEUS
    // *   LOG_SERVICE
    // *   CUSTOM
    // *   ARMS_PROMETHEUS
    // *   ARMS_APP_MON
    // *   ARMS_FRONT_MON
    // *   ARMS_CUSTOM
    // *   XTRACE
    // *   GRAFANA
    // *   ZABBIX
    // *   SKYWALKING
    // *   EVENT_BRIDGE
    // *   NAGIOS
    // *   OPENFALCON
    // *   ARMS_INSIGHTS
    std::shared_ptr<string> integrationType_ = nullptr;
    // The tags.
    std::shared_ptr<string> labels_ = nullptr;
    // The time when the event was created.
    std::shared_ptr<string> receiveTime_ = nullptr;
    // The severity level of the event. Valid values:
    // 
    // *   critical
    // *   error
    // *   warning
    // *   info
    std::shared_ptr<string> severity_ = nullptr;
    // The time when the event started.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the event. Valid values:
    // 
    // *   Active: The event is not cleared.
    // *   Silenced: The event is silenced.
    // *   Resolved: The event is cleared.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
