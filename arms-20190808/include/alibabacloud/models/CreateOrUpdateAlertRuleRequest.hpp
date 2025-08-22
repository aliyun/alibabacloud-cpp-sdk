// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateAlertRuleRequestMarkTags.hpp>
#include <alibabacloud/models/CreateOrUpdateAlertRuleRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertCheckType, alertCheckType_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertPiplines, alertPiplines_);
      DARABONBA_PTR_TO_JSON(AlertRuleContent, alertRuleContent_);
      DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(AutoAddNewApplication, autoAddNewApplication_);
      DARABONBA_PTR_TO_JSON(AutoAddTargetConfig, autoAddTargetConfig_);
      DARABONBA_PTR_TO_JSON(CheckCycle, checkCycle_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataConfig, dataConfig_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MarkTags, markTags_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MetricsKey, metricsKey_);
      DARABONBA_PTR_TO_JSON(MetricsType, metricsType_);
      DARABONBA_PTR_TO_JSON(Notice, notice_);
      DARABONBA_PTR_TO_JSON(NotifyMode, notifyMode_);
      DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(Pids, pids_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(PromQL, promQL_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertCheckType, alertCheckType_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertPiplines, alertPiplines_);
      DARABONBA_PTR_FROM_JSON(AlertRuleContent, alertRuleContent_);
      DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(AutoAddNewApplication, autoAddNewApplication_);
      DARABONBA_PTR_FROM_JSON(AutoAddTargetConfig, autoAddTargetConfig_);
      DARABONBA_PTR_FROM_JSON(CheckCycle, checkCycle_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataConfig, dataConfig_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MarkTags, markTags_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MetricsKey, metricsKey_);
      DARABONBA_PTR_FROM_JSON(MetricsType, metricsType_);
      DARABONBA_PTR_FROM_JSON(Notice, notice_);
      DARABONBA_PTR_FROM_JSON(NotifyMode, notifyMode_);
      DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(Pids, pids_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(PromQL, promQL_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateOrUpdateAlertRuleRequest() = default ;
    CreateOrUpdateAlertRuleRequest(const CreateOrUpdateAlertRuleRequest &) = default ;
    CreateOrUpdateAlertRuleRequest(CreateOrUpdateAlertRuleRequest &&) = default ;
    CreateOrUpdateAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleRequest() = default ;
    CreateOrUpdateAlertRuleRequest& operator=(const CreateOrUpdateAlertRuleRequest &) = default ;
    CreateOrUpdateAlertRuleRequest& operator=(CreateOrUpdateAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertCheckType_ != nullptr
        && this->alertGroup_ != nullptr && this->alertId_ != nullptr && this->alertName_ != nullptr && this->alertPiplines_ != nullptr && this->alertRuleContent_ != nullptr
        && this->alertStatus_ != nullptr && this->alertType_ != nullptr && this->annotations_ != nullptr && this->autoAddNewApplication_ != nullptr && this->autoAddTargetConfig_ != nullptr
        && this->checkCycle_ != nullptr && this->clusterId_ != nullptr && this->dataConfig_ != nullptr && this->duration_ != nullptr && this->filters_ != nullptr
        && this->labels_ != nullptr && this->level_ != nullptr && this->markTags_ != nullptr && this->message_ != nullptr && this->metricsKey_ != nullptr
        && this->metricsType_ != nullptr && this->notice_ != nullptr && this->notifyMode_ != nullptr && this->notifyStrategy_ != nullptr && this->pids_ != nullptr
        && this->product_ != nullptr && this->promQL_ != nullptr && this->regionId_ != nullptr && this->tags_ != nullptr; };
    // alertCheckType Field Functions 
    bool hasAlertCheckType() const { return this->alertCheckType_ != nullptr;};
    void deleteAlertCheckType() { this->alertCheckType_ = nullptr;};
    inline string alertCheckType() const { DARABONBA_PTR_GET_DEFAULT(alertCheckType_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertCheckType(string alertCheckType) { DARABONBA_PTR_SET_VALUE(alertCheckType_, alertCheckType) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline int64_t alertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, 0L) };
    inline CreateOrUpdateAlertRuleRequest& setAlertGroup(int64_t alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline CreateOrUpdateAlertRuleRequest& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertPiplines Field Functions 
    bool hasAlertPiplines() const { return this->alertPiplines_ != nullptr;};
    void deleteAlertPiplines() { this->alertPiplines_ = nullptr;};
    inline string alertPiplines() const { DARABONBA_PTR_GET_DEFAULT(alertPiplines_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertPiplines(string alertPiplines) { DARABONBA_PTR_SET_VALUE(alertPiplines_, alertPiplines) };


    // alertRuleContent Field Functions 
    bool hasAlertRuleContent() const { return this->alertRuleContent_ != nullptr;};
    void deleteAlertRuleContent() { this->alertRuleContent_ = nullptr;};
    inline string alertRuleContent() const { DARABONBA_PTR_GET_DEFAULT(alertRuleContent_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertRuleContent(string alertRuleContent) { DARABONBA_PTR_SET_VALUE(alertRuleContent_, alertRuleContent) };


    // alertStatus Field Functions 
    bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
    void deleteAlertStatus() { this->alertStatus_ = nullptr;};
    inline string alertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // autoAddNewApplication Field Functions 
    bool hasAutoAddNewApplication() const { return this->autoAddNewApplication_ != nullptr;};
    void deleteAutoAddNewApplication() { this->autoAddNewApplication_ = nullptr;};
    inline bool autoAddNewApplication() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewApplication_, false) };
    inline CreateOrUpdateAlertRuleRequest& setAutoAddNewApplication(bool autoAddNewApplication) { DARABONBA_PTR_SET_VALUE(autoAddNewApplication_, autoAddNewApplication) };


    // autoAddTargetConfig Field Functions 
    bool hasAutoAddTargetConfig() const { return this->autoAddTargetConfig_ != nullptr;};
    void deleteAutoAddTargetConfig() { this->autoAddTargetConfig_ = nullptr;};
    inline string autoAddTargetConfig() const { DARABONBA_PTR_GET_DEFAULT(autoAddTargetConfig_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAutoAddTargetConfig(string autoAddTargetConfig) { DARABONBA_PTR_SET_VALUE(autoAddTargetConfig_, autoAddTargetConfig) };


    // checkCycle Field Functions 
    bool hasCheckCycle() const { return this->checkCycle_ != nullptr;};
    void deleteCheckCycle() { this->checkCycle_ = nullptr;};
    inline int64_t checkCycle() const { DARABONBA_PTR_GET_DEFAULT(checkCycle_, 0L) };
    inline CreateOrUpdateAlertRuleRequest& setCheckCycle(int64_t checkCycle) { DARABONBA_PTR_SET_VALUE(checkCycle_, checkCycle) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateOrUpdateAlertRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataConfig Field Functions 
    bool hasDataConfig() const { return this->dataConfig_ != nullptr;};
    void deleteDataConfig() { this->dataConfig_ = nullptr;};
    inline string dataConfig() const { DARABONBA_PTR_GET_DEFAULT(dataConfig_, "") };
    inline CreateOrUpdateAlertRuleRequest& setDataConfig(string dataConfig) { DARABONBA_PTR_SET_VALUE(dataConfig_, dataConfig) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline CreateOrUpdateAlertRuleRequest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline string filters() const { DARABONBA_PTR_GET_DEFAULT(filters_, "") };
    inline CreateOrUpdateAlertRuleRequest& setFilters(string filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline CreateOrUpdateAlertRuleRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline CreateOrUpdateAlertRuleRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // markTags Field Functions 
    bool hasMarkTags() const { return this->markTags_ != nullptr;};
    void deleteMarkTags() { this->markTags_ = nullptr;};
    inline const vector<CreateOrUpdateAlertRuleRequestMarkTags> & markTags() const { DARABONBA_PTR_GET_CONST(markTags_, vector<CreateOrUpdateAlertRuleRequestMarkTags>) };
    inline vector<CreateOrUpdateAlertRuleRequestMarkTags> markTags() { DARABONBA_PTR_GET(markTags_, vector<CreateOrUpdateAlertRuleRequestMarkTags>) };
    inline CreateOrUpdateAlertRuleRequest& setMarkTags(const vector<CreateOrUpdateAlertRuleRequestMarkTags> & markTags) { DARABONBA_PTR_SET_VALUE(markTags_, markTags) };
    inline CreateOrUpdateAlertRuleRequest& setMarkTags(vector<CreateOrUpdateAlertRuleRequestMarkTags> && markTags) { DARABONBA_PTR_SET_RVALUE(markTags_, markTags) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateOrUpdateAlertRuleRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricsKey Field Functions 
    bool hasMetricsKey() const { return this->metricsKey_ != nullptr;};
    void deleteMetricsKey() { this->metricsKey_ = nullptr;};
    inline string metricsKey() const { DARABONBA_PTR_GET_DEFAULT(metricsKey_, "") };
    inline CreateOrUpdateAlertRuleRequest& setMetricsKey(string metricsKey) { DARABONBA_PTR_SET_VALUE(metricsKey_, metricsKey) };


    // metricsType Field Functions 
    bool hasMetricsType() const { return this->metricsType_ != nullptr;};
    void deleteMetricsType() { this->metricsType_ = nullptr;};
    inline string metricsType() const { DARABONBA_PTR_GET_DEFAULT(metricsType_, "") };
    inline CreateOrUpdateAlertRuleRequest& setMetricsType(string metricsType) { DARABONBA_PTR_SET_VALUE(metricsType_, metricsType) };


    // notice Field Functions 
    bool hasNotice() const { return this->notice_ != nullptr;};
    void deleteNotice() { this->notice_ = nullptr;};
    inline string notice() const { DARABONBA_PTR_GET_DEFAULT(notice_, "") };
    inline CreateOrUpdateAlertRuleRequest& setNotice(string notice) { DARABONBA_PTR_SET_VALUE(notice_, notice) };


    // notifyMode Field Functions 
    bool hasNotifyMode() const { return this->notifyMode_ != nullptr;};
    void deleteNotifyMode() { this->notifyMode_ = nullptr;};
    inline string notifyMode() const { DARABONBA_PTR_GET_DEFAULT(notifyMode_, "") };
    inline CreateOrUpdateAlertRuleRequest& setNotifyMode(string notifyMode) { DARABONBA_PTR_SET_VALUE(notifyMode_, notifyMode) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string notifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline CreateOrUpdateAlertRuleRequest& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline string pids() const { DARABONBA_PTR_GET_DEFAULT(pids_, "") };
    inline CreateOrUpdateAlertRuleRequest& setPids(string pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline CreateOrUpdateAlertRuleRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // promQL Field Functions 
    bool hasPromQL() const { return this->promQL_ != nullptr;};
    void deletePromQL() { this->promQL_ = nullptr;};
    inline string promQL() const { DARABONBA_PTR_GET_DEFAULT(promQL_, "") };
    inline CreateOrUpdateAlertRuleRequest& setPromQL(string promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrUpdateAlertRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateOrUpdateAlertRuleRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateOrUpdateAlertRuleRequestTags>) };
    inline vector<CreateOrUpdateAlertRuleRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateOrUpdateAlertRuleRequestTags>) };
    inline CreateOrUpdateAlertRuleRequest& setTags(const vector<CreateOrUpdateAlertRuleRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateOrUpdateAlertRuleRequest& setTags(vector<CreateOrUpdateAlertRuleRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The alert check type of the Prometheus alert rule. Valid values:
    // 
    // *   STATIC: a static threshold value. If you set the parameter to STATIC, you must specify the **MetricsKey** parameter. For more information, see the **Correspondence between AlertGroup and MetricsKey for Prometheus Service** table.
    // *   CUSTOM: a custom PromQL statement. If you set the parameter to CUSTOM, you must specify the **PromQL**, **Duration**, and **Message** parameters to create a Prometheus alert rule.
    std::shared_ptr<string> alertCheckType_ = nullptr;
    // The alert contact group ID of the Prometheus alert rule. Valid values:
    // 
    // *   \\-1: custom PromQL
    // *   1: Kubernetes load
    // *   15: Kubernetes node
    std::shared_ptr<int64_t> alertGroup_ = nullptr;
    // The ID of the alert rule.
    // 
    // *   If you do not specify this parameter, a new alert rule is created.
    // *   If you specify this parameter, the specified alert rule is modified.
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The name of the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> alertName_ = nullptr;
    // The configuration of the alert sending channel. This parameter is used to be compatible with the old version of the rule.
    std::shared_ptr<string> alertPiplines_ = nullptr;
    // The content of the Application Monitoring or Browser Monitoring alert rule. The following code provides an example of the **AlertRuleContent** parameter. For more information about the meaning of each field, see the supplementary description.
    // 
    // ```json
    // { 
    //     "Condition": "OR",
    //      "AlertRuleItems": [
    //              { "Operator": "CURRENT_LTE",
    //                  "MetricKey": "appstat.jvm.threadcount",
    //                  "Value": 1000,
    //                  "Aggregate": "AVG",
    //                   "N": 10,
    //                   "Tolerability": 169
    //             } 
    //        ]  
    //   }
    // ```
    // 
    // >  The filter conditions specified by the **AlertRuleItems.MetricKey** field depends on the value of the **MetricsType** parameter. For more information about the types of metrics supported by Application Monitoring and Browser Monitoring and the alert rule fields corresponding to each metric, see the supplementary description.
    std::shared_ptr<string> alertRuleContent_ = nullptr;
    // The status of the alert rule. Valid values:
    // 
    // *   RUNNING (default)
    // *   STOPPED
    std::shared_ptr<string> alertStatus_ = nullptr;
    // The type of the alert rule. Valid values:
    // 
    // *   APPLICATION_MONITORING_ALERT_RULE: an alert rule for Application Monitoring.
    // *   BROWSER_MONITORING_ALERT_RULE: an alert rule for Browser Monitoring.
    // *   PROMETHEUS_MONITORING_ALERT_RULE: an alert rule for Managed Service for Prometheus.
    // *   XTRACE_MONITORING_ALERT_RULE: an alert rule for Managed Service for OpenTelemetry.
    // *   EBPF_MONITORING_ALERT_RULE: an alert rule for Application Monitoring eBPF Edition.
    // *   RUM_MONITORING_ALERT_RULE: an alert rule for Real User Monitoring.
    // 
    // Valid values:
    // 
    // *   PROMETHEUS_MONITORING_ALERT_RULE
    // *   APPLICATION_MONITORING_ALERT_RULE
    // *   BROWSER_MONITORING_ALERT_RULE
    // *   prometheus monitoring alert
    // *   application monitoring alert
    // *   browser monitoring alert
    // *   XTRACE_MONITORING_ALERT_RULE
    // *   EBPF_MONITORING_ALERT_RULE
    // *   RUM_MONITORING_ALERT_RULE
    // 
    // This parameter is required.
    std::shared_ptr<string> alertType_ = nullptr;
    // The annotations of the Prometheus alert rule.
    std::shared_ptr<string> annotations_ = nullptr;
    // Specifies whether to apply the alert rule to new applications that are created in Application Monitoring or Browser Monitoring. Valid values:
    // 
    // *   `true`: enables the health check feature.
    // *   `false`: disables the automatic backup feature.
    std::shared_ptr<bool> autoAddNewApplication_ = nullptr;
    // The configurations that are automatically appended to monitor the application based on the specified alert rule.
    // 
    // *   autoAddMatchType:
    // 
    //     the matching mode. Valid values: REGULAR and NOT_REGULAR.
    // 
    // *   autoAddMatchExp: the regular expression
    std::shared_ptr<string> autoAddTargetConfig_ = nullptr;
    // The interval for checking the alerts in Managed Service for Prometheus.
    std::shared_ptr<int64_t> checkCycle_ = nullptr;
    // The ID of the monitored cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Data Configuration. The dataRevision field specifies the data repair method when there is no data for the metric.
    // 
    // - Fill with zero: 0
    // - Fill with one: 1
    // - Fill with null: 2 (default, does not trigger an alarm)
    std::shared_ptr<string> dataConfig_ = nullptr;
    // The duration of the Prometheus alert rule, in minutes, in the range of [0,1440].
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The filter conditions of the Application Monitoring or Browser Monitoring alert rule. Format:
    // 
    //     "DimFilters": [ 
    //     { 
    //      "FilterOpt": "ALL",
    //     "FilterValues": [],         //The value of the filter condition.
    //     "FilterKey": "rootIp"     //The key of the filter condition.
    //     }
    //     ]
    // 
    // Valid values of **FilterOpt**:
    // 
    // *   STATIC: matches the value of the specified dimension.
    // *   ALL: traverses all dimension values. Dynamic thresholds do not support traversal.
    // *   DISABLE: aggregates the values of all dimensions.
    std::shared_ptr<string> filters_ = nullptr;
    // The tags of the Prometheus alert rule.
    std::shared_ptr<string> labels_ = nullptr;
    // The severity level of the Prometheus alert rule.
    // 
    // *   P1: Alert notifications are sent for major issues that affect the availability of core business, have a huge impact, and may lead to serious consequences.
    // *   P2: Alert notifications are sent for service errors that affect the system availability with relatively limited impact.
    // *   P3: Alert notifications are sent for issues that may cause service errors or negative effects, or alert notifications for services that are relatively less important.
    // *   P4: Alert notifications are sent for low-priority issues that do not affect your business.
    // *   Default: Alert notifications are sent regardless of alert levels.
    std::shared_ptr<string> level_ = nullptr;
    // Application Tags. Used for application monitoring alert rules, to filter applications associated with alert rules.
    std::shared_ptr<vector<CreateOrUpdateAlertRuleRequestMarkTags>> markTags_ = nullptr;
    // The alert message of the Prometheus alert rule.
    std::shared_ptr<string> message_ = nullptr;
    // The alert metrics. If you set the **AlertCheckType** parameter to **STATIC** when you create a Prometheus alert rule, you must specify the **MetricsKey** parameter.
    // 
    // > Alert metrics vary depending on the value of the **AlertGroup** parameter. For more information about the correspondence between **AlertGroup** and **MetricsKey**, see the supplementary description.
    std::shared_ptr<string> metricsKey_ = nullptr;
    // The metric type of the Application Monitoring or Browser Monitoring alert rule. For more information, see the following table.
    std::shared_ptr<string> metricsType_ = nullptr;
    // The effective time and notification time. This parameter is used to be compatible with the old version of the rule.
    std::shared_ptr<string> notice_ = nullptr;
    // The notification mode. You can specify normal mode or simple mode.
    // 
    // *   DIRECTED_MODE
    // *   NORMAL_MODE
    std::shared_ptr<string> notifyMode_ = nullptr;
    // The notification policy.
    // 
    // *   If you set this parameter to null, no notification policy is specified. After you create an alert rule, you can create a notification policy and specify match rules and match conditions. For example, you can specify the name of the alert rule as the match condition. When the alert rule is triggered, an alert event is generated and an alert notification is sent to the contacts or contact groups that are specified in the notification policy.
    // *   To specify a notification policy, set this parameter to the ID of the notification policy. Application Real-Time Monitoring Service (ARMS) automatically adds a match rule to the notification policy and specifies the ID of the alert rule as the match condition. The name of the alert rule is also displayed. This way, the alert events that are generated based on the alert rule can be matched by the specified notification policy.
    std::shared_ptr<string> notifyStrategy_ = nullptr;
    // The process ID (PID) that is associated with the Application Monitoring or Browser Monitoring alert rule.
    std::shared_ptr<string> pids_ = nullptr;
    // The product code. If you specify this parameter when you create a Prometheus alert rule, the backend checks whether the product exists.
    std::shared_ptr<string> product_ = nullptr;
    // The PromQL statement of the Prometheus alert rule.
    std::shared_ptr<string> promQL_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<CreateOrUpdateAlertRuleRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
