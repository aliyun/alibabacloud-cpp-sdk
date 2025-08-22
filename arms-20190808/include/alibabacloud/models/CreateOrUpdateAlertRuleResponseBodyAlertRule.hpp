// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations.hpp>
#include <alibabacloud/models/CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters.hpp>
#include <alibabacloud/models/CreateOrUpdateAlertRuleResponseBodyAlertRuleLabels.hpp>
#include <alibabacloud/models/CreateOrUpdateAlertRuleResponseBodyAlertRuleTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleResponseBodyAlertRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleResponseBodyAlertRule& obj) { 
      DARABONBA_PTR_TO_JSON(AlertCheckType, alertCheckType_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertRuleContent, alertRuleContent_);
      DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(AutoAddNewApplication, autoAddNewApplication_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MetricsType, metricsType_);
      DARABONBA_PTR_TO_JSON(NotifyMode, notifyMode_);
      DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(Pids, pids_);
      DARABONBA_PTR_TO_JSON(PromQL, promQL_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleResponseBodyAlertRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertCheckType, alertCheckType_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertRuleContent, alertRuleContent_);
      DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(AutoAddNewApplication, autoAddNewApplication_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MetricsType, metricsType_);
      DARABONBA_PTR_FROM_JSON(NotifyMode, notifyMode_);
      DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(Pids, pids_);
      DARABONBA_PTR_FROM_JSON(PromQL, promQL_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateOrUpdateAlertRuleResponseBodyAlertRule() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRule(const CreateOrUpdateAlertRuleResponseBodyAlertRule &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRule(CreateOrUpdateAlertRuleResponseBodyAlertRule &&) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleResponseBodyAlertRule() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRule& operator=(const CreateOrUpdateAlertRuleResponseBodyAlertRule &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRule& operator=(CreateOrUpdateAlertRuleResponseBodyAlertRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertCheckType_ != nullptr
        && this->alertGroup_ != nullptr && this->alertId_ != nullptr && this->alertName_ != nullptr && this->alertRuleContent_ != nullptr && this->alertStatus_ != nullptr
        && this->alertType_ != nullptr && this->annotations_ != nullptr && this->autoAddNewApplication_ != nullptr && this->clusterId_ != nullptr && this->createdTime_ != nullptr
        && this->duration_ != nullptr && this->extend_ != nullptr && this->filters_ != nullptr && this->labels_ != nullptr && this->level_ != nullptr
        && this->message_ != nullptr && this->metricsType_ != nullptr && this->notifyMode_ != nullptr && this->notifyStrategy_ != nullptr && this->pids_ != nullptr
        && this->promQL_ != nullptr && this->regionId_ != nullptr && this->tags_ != nullptr && this->updatedTime_ != nullptr && this->userId_ != nullptr; };
    // alertCheckType Field Functions 
    bool hasAlertCheckType() const { return this->alertCheckType_ != nullptr;};
    void deleteAlertCheckType() { this->alertCheckType_ = nullptr;};
    inline string alertCheckType() const { DARABONBA_PTR_GET_DEFAULT(alertCheckType_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAlertCheckType(string alertCheckType) { DARABONBA_PTR_SET_VALUE(alertCheckType_, alertCheckType) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline int64_t alertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, 0L) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAlertGroup(int64_t alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertRuleContent Field Functions 
    bool hasAlertRuleContent() const { return this->alertRuleContent_ != nullptr;};
    void deleteAlertRuleContent() { this->alertRuleContent_ = nullptr;};
    inline const Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent & alertRuleContent() const { DARABONBA_PTR_GET_CONST(alertRuleContent_, Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent) };
    inline Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent alertRuleContent() { DARABONBA_PTR_GET(alertRuleContent_, Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAlertRuleContent(const Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent & alertRuleContent) { DARABONBA_PTR_SET_VALUE(alertRuleContent_, alertRuleContent) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAlertRuleContent(Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent && alertRuleContent) { DARABONBA_PTR_SET_RVALUE(alertRuleContent_, alertRuleContent) };


    // alertStatus Field Functions 
    bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
    void deleteAlertStatus() { this->alertStatus_ = nullptr;};
    inline string alertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations>) };
    inline vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAnnotations(const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAnnotations(vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // autoAddNewApplication Field Functions 
    bool hasAutoAddNewApplication() const { return this->autoAddNewApplication_ != nullptr;};
    void deleteAutoAddNewApplication() { this->autoAddNewApplication_ = nullptr;};
    inline bool autoAddNewApplication() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewApplication_, false) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setAutoAddNewApplication(bool autoAddNewApplication) { DARABONBA_PTR_SET_VALUE(autoAddNewApplication_, autoAddNewApplication) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters & filters() const { DARABONBA_PTR_GET_CONST(filters_, Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters) };
    inline Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters filters() { DARABONBA_PTR_GET(filters_, Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setFilters(const Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setFilters(Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleLabels>) };
    inline vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleLabels>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setLabels(const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setLabels(vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricsType Field Functions 
    bool hasMetricsType() const { return this->metricsType_ != nullptr;};
    void deleteMetricsType() { this->metricsType_ = nullptr;};
    inline string metricsType() const { DARABONBA_PTR_GET_DEFAULT(metricsType_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setMetricsType(string metricsType) { DARABONBA_PTR_SET_VALUE(metricsType_, metricsType) };


    // notifyMode Field Functions 
    bool hasNotifyMode() const { return this->notifyMode_ != nullptr;};
    void deleteNotifyMode() { this->notifyMode_ = nullptr;};
    inline string notifyMode() const { DARABONBA_PTR_GET_DEFAULT(notifyMode_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setNotifyMode(string notifyMode) { DARABONBA_PTR_SET_VALUE(notifyMode_, notifyMode) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string notifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline const vector<string> & pids() const { DARABONBA_PTR_GET_CONST(pids_, vector<string>) };
    inline vector<string> pids() { DARABONBA_PTR_GET(pids_, vector<string>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setPids(const vector<string> & pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setPids(vector<string> && pids) { DARABONBA_PTR_SET_RVALUE(pids_, pids) };


    // promQL Field Functions 
    bool hasPromQL() const { return this->promQL_ != nullptr;};
    void deletePromQL() { this->promQL_ = nullptr;};
    inline string promQL() const { DARABONBA_PTR_GET_DEFAULT(promQL_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setPromQL(string promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleTags>) };
    inline vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleTags>) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setTags(const vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setTags(vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The alert check type of the Prometheus alert rule. Valid values:
    // 
    // *   STATIC: a static threshold value.
    // *   CUSTOM: a custom PromQL statement.
    std::shared_ptr<string> alertCheckType_ = nullptr;
    // The alert contact group ID of the Prometheus alert rule. Valid values:
    // 
    // *   \\-1: custom PromQL
    // *   1: Kubernetes load
    // *   15: Kubernetes node
    std::shared_ptr<int64_t> alertGroup_ = nullptr;
    // The alert rule ID.
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> alertName_ = nullptr;
    // The content of the Application Monitoring or Browser Monitoring alert rule.
    std::shared_ptr<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContent> alertRuleContent_ = nullptr;
    // The status of the alert rule. Valid values:
    // 
    // *   RUNNING
    // *   STOPPED
    // *   PAUSED
    // 
    // > The PAUSED status indicates that the alert rule is abnormal and is actively paused by the system. The alert rule may be paused because that it is not unique or the associated cluster has been deleted.
    std::shared_ptr<string> alertStatus_ = nullptr;
    // The type of the alert rule. Valid values:
    // 
    // *   APPLICATION_MONITORING_ALERT_RULE: alert rule for Application Monitoring
    // *   BROWSER_MONITORING_ALERT_RULE: alert rule for Browser Monitoring
    // *   PROMETHEUS_MONITORING_ALERT_RULE: alert rule for Prometheus Service
    std::shared_ptr<string> alertType_ = nullptr;
    // The annotations of the Prometheus alert rule.
    std::shared_ptr<vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations>> annotations_ = nullptr;
    // Indicates whether the alert rule was applied to new applications that were created in Application Monitoring or Browser Monitoring. Valid values:
    // 
    // *   `true`: enables the health check feature.
    // *   `false`: disables the automatic backup feature.
    std::shared_ptr<bool> autoAddNewApplication_ = nullptr;
    // The ID of the monitored cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The timestamp generated when the alert rule was created. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The duration of the Prometheus alert rule. Unit: minutes.
    std::shared_ptr<string> duration_ = nullptr;
    // The extended fields.
    std::shared_ptr<string> extend_ = nullptr;
    // The filter conditions of the Application Monitoring or Browser Monitoring alert rule.
    std::shared_ptr<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleFilters> filters_ = nullptr;
    // The tags of the Prometheus alert rule.
    std::shared_ptr<vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleLabels>> labels_ = nullptr;
    // The severity level of the Prometheus alert rule.
    // 
    // *   P1: Alert notifications are sent for major issues that affect the availability of core business, have a huge impact, and may lead to serious consequences.
    // *   P2: Alert notifications are sent for service errors that affect the system availability with relatively limited impact.
    // *   P3: Alert notifications are sent for issues that may cause service errors or negative effects, or alert notifications for services that are relatively less important.
    // *   P4: Alert notifications are sent for low-priority issues that do not affect your business.
    // *   Default: Alert notifications are sent regardless of alert levels.
    std::shared_ptr<string> level_ = nullptr;
    // The alert message of the Prometheus alert rule.
    std::shared_ptr<string> message_ = nullptr;
    // The metric type of the Application Monitoring or Browser Monitoring alert rule.
    std::shared_ptr<string> metricsType_ = nullptr;
    // Notification Mode.
    std::shared_ptr<string> notifyMode_ = nullptr;
    // The name of the notification policy.
    std::shared_ptr<string> notifyStrategy_ = nullptr;
    // The process ID (PID) that was associated with the Application Monitoring or Browser Monitoring alert rule.
    std::shared_ptr<vector<string>> pids_ = nullptr;
    // The PromQL statement of the Prometheus alert rule.
    std::shared_ptr<string> promQL_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<Models::CreateOrUpdateAlertRuleResponseBodyAlertRuleTags>> tags_ = nullptr;
    // The timestamp generated when the alert rule was updated. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
