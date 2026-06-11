// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEV2_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEV2_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ActionIntegrationConfig.hpp>
#include <map>
#include <alibabacloud/models/ArmsIntegrationConfig.hpp>
#include <alibabacloud/models/ConditionConfigUnified.hpp>
#include <alibabacloud/models/DatasourceConfigUnified.hpp>
#include <alibabacloud/models/NotifyConfigUnified.hpp>
#include <alibabacloud/models/QueryConfigUnified.hpp>
#include <alibabacloud/models/ScheduleConfigUnified.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleV2 : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleV2& obj) { 
      DARABONBA_PTR_TO_JSON(actionIntegrationConfig, actionIntegrationConfig_);
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_PTR_TO_JSON(armsIntegrationConfig, armsIntegrationConfig_);
      DARABONBA_PTR_TO_JSON(conditionConfig, conditionConfig_);
      DARABONBA_PTR_TO_JSON(contentTemplate, contentTemplate_);
      DARABONBA_PTR_TO_JSON(coveredSeverityLevels, coveredSeverityLevels_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(datasourceConfig, datasourceConfig_);
      DARABONBA_PTR_TO_JSON(datasourceType, datasourceType_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(observeResourceGlobalScope, observeResourceGlobalScope_);
      DARABONBA_PTR_TO_JSON(observeResourceList, observeResourceList_);
      DARABONBA_PTR_TO_JSON(observeResourceType, observeResourceType_);
      DARABONBA_PTR_TO_JSON(queryConfig, queryConfig_);
      DARABONBA_PTR_TO_JSON(scheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleV2& obj) { 
      DARABONBA_PTR_FROM_JSON(actionIntegrationConfig, actionIntegrationConfig_);
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(armsIntegrationConfig, armsIntegrationConfig_);
      DARABONBA_PTR_FROM_JSON(conditionConfig, conditionConfig_);
      DARABONBA_PTR_FROM_JSON(contentTemplate, contentTemplate_);
      DARABONBA_PTR_FROM_JSON(coveredSeverityLevels, coveredSeverityLevels_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(datasourceConfig, datasourceConfig_);
      DARABONBA_PTR_FROM_JSON(datasourceType, datasourceType_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(observeResourceGlobalScope, observeResourceGlobalScope_);
      DARABONBA_PTR_FROM_JSON(observeResourceList, observeResourceList_);
      DARABONBA_PTR_FROM_JSON(observeResourceType, observeResourceType_);
      DARABONBA_PTR_FROM_JSON(queryConfig, queryConfig_);
      DARABONBA_PTR_FROM_JSON(scheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    AlertRuleV2() = default ;
    AlertRuleV2(const AlertRuleV2 &) = default ;
    AlertRuleV2(AlertRuleV2 &&) = default ;
    AlertRuleV2(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleV2() = default ;
    AlertRuleV2& operator=(const AlertRuleV2 &) = default ;
    AlertRuleV2& operator=(AlertRuleV2 &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionIntegrationConfig_ == nullptr
        && this->annotations_ == nullptr && this->armsIntegrationConfig_ == nullptr && this->conditionConfig_ == nullptr && this->contentTemplate_ == nullptr && this->coveredSeverityLevels_ == nullptr
        && this->createdAt_ == nullptr && this->datasourceConfig_ == nullptr && this->datasourceType_ == nullptr && this->displayName_ == nullptr && this->enabled_ == nullptr
        && this->labels_ == nullptr && this->notifyConfig_ == nullptr && this->observeResourceGlobalScope_ == nullptr && this->observeResourceList_ == nullptr && this->observeResourceType_ == nullptr
        && this->queryConfig_ == nullptr && this->scheduleConfig_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr && this->uuid_ == nullptr
        && this->workspace_ == nullptr; };
    // actionIntegrationConfig Field Functions 
    bool hasActionIntegrationConfig() const { return this->actionIntegrationConfig_ != nullptr;};
    void deleteActionIntegrationConfig() { this->actionIntegrationConfig_ = nullptr;};
    inline const ActionIntegrationConfig & getActionIntegrationConfig() const { DARABONBA_PTR_GET_CONST(actionIntegrationConfig_, ActionIntegrationConfig) };
    inline ActionIntegrationConfig getActionIntegrationConfig() { DARABONBA_PTR_GET(actionIntegrationConfig_, ActionIntegrationConfig) };
    inline AlertRuleV2& setActionIntegrationConfig(const ActionIntegrationConfig & actionIntegrationConfig) { DARABONBA_PTR_SET_VALUE(actionIntegrationConfig_, actionIntegrationConfig) };
    inline AlertRuleV2& setActionIntegrationConfig(ActionIntegrationConfig && actionIntegrationConfig) { DARABONBA_PTR_SET_RVALUE(actionIntegrationConfig_, actionIntegrationConfig) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const map<string, string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, map<string, string>) };
    inline map<string, string> getAnnotations() { DARABONBA_PTR_GET(annotations_, map<string, string>) };
    inline AlertRuleV2& setAnnotations(const map<string, string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline AlertRuleV2& setAnnotations(map<string, string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // armsIntegrationConfig Field Functions 
    bool hasArmsIntegrationConfig() const { return this->armsIntegrationConfig_ != nullptr;};
    void deleteArmsIntegrationConfig() { this->armsIntegrationConfig_ = nullptr;};
    inline const ArmsIntegrationConfig & getArmsIntegrationConfig() const { DARABONBA_PTR_GET_CONST(armsIntegrationConfig_, ArmsIntegrationConfig) };
    inline ArmsIntegrationConfig getArmsIntegrationConfig() { DARABONBA_PTR_GET(armsIntegrationConfig_, ArmsIntegrationConfig) };
    inline AlertRuleV2& setArmsIntegrationConfig(const ArmsIntegrationConfig & armsIntegrationConfig) { DARABONBA_PTR_SET_VALUE(armsIntegrationConfig_, armsIntegrationConfig) };
    inline AlertRuleV2& setArmsIntegrationConfig(ArmsIntegrationConfig && armsIntegrationConfig) { DARABONBA_PTR_SET_RVALUE(armsIntegrationConfig_, armsIntegrationConfig) };


    // conditionConfig Field Functions 
    bool hasConditionConfig() const { return this->conditionConfig_ != nullptr;};
    void deleteConditionConfig() { this->conditionConfig_ = nullptr;};
    inline const ConditionConfigUnified & getConditionConfig() const { DARABONBA_PTR_GET_CONST(conditionConfig_, ConditionConfigUnified) };
    inline ConditionConfigUnified getConditionConfig() { DARABONBA_PTR_GET(conditionConfig_, ConditionConfigUnified) };
    inline AlertRuleV2& setConditionConfig(const ConditionConfigUnified & conditionConfig) { DARABONBA_PTR_SET_VALUE(conditionConfig_, conditionConfig) };
    inline AlertRuleV2& setConditionConfig(ConditionConfigUnified && conditionConfig) { DARABONBA_PTR_SET_RVALUE(conditionConfig_, conditionConfig) };


    // contentTemplate Field Functions 
    bool hasContentTemplate() const { return this->contentTemplate_ != nullptr;};
    void deleteContentTemplate() { this->contentTemplate_ = nullptr;};
    inline string getContentTemplate() const { DARABONBA_PTR_GET_DEFAULT(contentTemplate_, "") };
    inline AlertRuleV2& setContentTemplate(string contentTemplate) { DARABONBA_PTR_SET_VALUE(contentTemplate_, contentTemplate) };


    // coveredSeverityLevels Field Functions 
    bool hasCoveredSeverityLevels() const { return this->coveredSeverityLevels_ != nullptr;};
    void deleteCoveredSeverityLevels() { this->coveredSeverityLevels_ = nullptr;};
    inline string getCoveredSeverityLevels() const { DARABONBA_PTR_GET_DEFAULT(coveredSeverityLevels_, "") };
    inline AlertRuleV2& setCoveredSeverityLevels(string coveredSeverityLevels) { DARABONBA_PTR_SET_VALUE(coveredSeverityLevels_, coveredSeverityLevels) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline AlertRuleV2& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // datasourceConfig Field Functions 
    bool hasDatasourceConfig() const { return this->datasourceConfig_ != nullptr;};
    void deleteDatasourceConfig() { this->datasourceConfig_ = nullptr;};
    inline const DatasourceConfigUnified & getDatasourceConfig() const { DARABONBA_PTR_GET_CONST(datasourceConfig_, DatasourceConfigUnified) };
    inline DatasourceConfigUnified getDatasourceConfig() { DARABONBA_PTR_GET(datasourceConfig_, DatasourceConfigUnified) };
    inline AlertRuleV2& setDatasourceConfig(const DatasourceConfigUnified & datasourceConfig) { DARABONBA_PTR_SET_VALUE(datasourceConfig_, datasourceConfig) };
    inline AlertRuleV2& setDatasourceConfig(DatasourceConfigUnified && datasourceConfig) { DARABONBA_PTR_SET_RVALUE(datasourceConfig_, datasourceConfig) };


    // datasourceType Field Functions 
    bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
    void deleteDatasourceType() { this->datasourceType_ = nullptr;};
    inline string getDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, "") };
    inline AlertRuleV2& setDatasourceType(string datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline AlertRuleV2& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline AlertRuleV2& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline AlertRuleV2& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline AlertRuleV2& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const NotifyConfigUnified & getNotifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, NotifyConfigUnified) };
    inline NotifyConfigUnified getNotifyConfig() { DARABONBA_PTR_GET(notifyConfig_, NotifyConfigUnified) };
    inline AlertRuleV2& setNotifyConfig(const NotifyConfigUnified & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline AlertRuleV2& setNotifyConfig(NotifyConfigUnified && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // observeResourceGlobalScope Field Functions 
    bool hasObserveResourceGlobalScope() const { return this->observeResourceGlobalScope_ != nullptr;};
    void deleteObserveResourceGlobalScope() { this->observeResourceGlobalScope_ = nullptr;};
    inline bool getObserveResourceGlobalScope() const { DARABONBA_PTR_GET_DEFAULT(observeResourceGlobalScope_, false) };
    inline AlertRuleV2& setObserveResourceGlobalScope(bool observeResourceGlobalScope) { DARABONBA_PTR_SET_VALUE(observeResourceGlobalScope_, observeResourceGlobalScope) };


    // observeResourceList Field Functions 
    bool hasObserveResourceList() const { return this->observeResourceList_ != nullptr;};
    void deleteObserveResourceList() { this->observeResourceList_ = nullptr;};
    inline string getObserveResourceList() const { DARABONBA_PTR_GET_DEFAULT(observeResourceList_, "") };
    inline AlertRuleV2& setObserveResourceList(string observeResourceList) { DARABONBA_PTR_SET_VALUE(observeResourceList_, observeResourceList) };


    // observeResourceType Field Functions 
    bool hasObserveResourceType() const { return this->observeResourceType_ != nullptr;};
    void deleteObserveResourceType() { this->observeResourceType_ = nullptr;};
    inline string getObserveResourceType() const { DARABONBA_PTR_GET_DEFAULT(observeResourceType_, "") };
    inline AlertRuleV2& setObserveResourceType(string observeResourceType) { DARABONBA_PTR_SET_VALUE(observeResourceType_, observeResourceType) };


    // queryConfig Field Functions 
    bool hasQueryConfig() const { return this->queryConfig_ != nullptr;};
    void deleteQueryConfig() { this->queryConfig_ = nullptr;};
    inline const QueryConfigUnified & getQueryConfig() const { DARABONBA_PTR_GET_CONST(queryConfig_, QueryConfigUnified) };
    inline QueryConfigUnified getQueryConfig() { DARABONBA_PTR_GET(queryConfig_, QueryConfigUnified) };
    inline AlertRuleV2& setQueryConfig(const QueryConfigUnified & queryConfig) { DARABONBA_PTR_SET_VALUE(queryConfig_, queryConfig) };
    inline AlertRuleV2& setQueryConfig(QueryConfigUnified && queryConfig) { DARABONBA_PTR_SET_RVALUE(queryConfig_, queryConfig) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const ScheduleConfigUnified & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, ScheduleConfigUnified) };
    inline ScheduleConfigUnified getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, ScheduleConfigUnified) };
    inline AlertRuleV2& setScheduleConfig(const ScheduleConfigUnified & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline AlertRuleV2& setScheduleConfig(ScheduleConfigUnified && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AlertRuleV2& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline AlertRuleV2& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline AlertRuleV2& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline AlertRuleV2& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Configuration for action integrations, such as webhooks, that execute when an alert is triggered.
    shared_ptr<ActionIntegrationConfig> actionIntegrationConfig_ {};
    // A set of key-value pairs that serve as annotations, providing additional, non-identifying information, such as a description or a runbook link.
    shared_ptr<map<string, string>> annotations_ {};
    // The configuration for integrating the alert rule with Application Real-Time Monitoring Service (ARMS).
    shared_ptr<ArmsIntegrationConfig> armsIntegrationConfig_ {};
    // The configuration for the conditions that trigger an alert.
    shared_ptr<ConditionConfigUnified> conditionConfig_ {};
    // The template for the alert notification content.
    shared_ptr<string> contentTemplate_ {};
    shared_ptr<string> coveredSeverityLevels_ {};
    // The time the alert rule was created.
    shared_ptr<string> createdAt_ {};
    // The configuration for the data source to be evaluated.
    shared_ptr<DatasourceConfigUnified> datasourceConfig_ {};
    // The data source type. Examples: `sls`, `prometheus`.
    shared_ptr<string> datasourceType_ {};
    // The user-defined display name for the alert rule.
    shared_ptr<string> displayName_ {};
    // Indicates whether the alert rule is active. Set to `true` to enable the rule, or `false` to disable it.
    shared_ptr<bool> enabled_ {};
    // A set of key-value pairs that serve as labels to filter and group alert rules.
    shared_ptr<map<string, string>> labels_ {};
    // The configuration for sending notifications when an alert is triggered.
    shared_ptr<NotifyConfigUnified> notifyConfig_ {};
    // Indicates whether the alert rule monitors all resources of the specified type. If `true`, the rule applies globally within the workspace.
    shared_ptr<bool> observeResourceGlobalScope_ {};
    // A list of specific resource IDs to monitor, used only when `observeResourceGlobalScope` is `false`.
    shared_ptr<string> observeResourceList_ {};
    // The type of resource that the alert rule monitors.
    shared_ptr<string> observeResourceType_ {};
    // The configuration for querying and processing data from the data source.
    shared_ptr<QueryConfigUnified> queryConfig_ {};
    // The configuration for how often the alert rule is evaluated.
    shared_ptr<ScheduleConfigUnified> scheduleConfig_ {};
    // The current status of the alert rule. Examples: `RUNNING`, `STOPPED`.
    shared_ptr<string> status_ {};
    // The time the alert rule was last updated.
    shared_ptr<string> updatedAt_ {};
    // The unique identifier for the alert rule.
    shared_ptr<string> uuid_ {};
    // The ID of the workspace that contains the alert rule.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
