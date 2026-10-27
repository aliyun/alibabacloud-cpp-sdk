// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGEALERTRULESUNIFIEDACTIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_MANAGEALERTRULESUNIFIEDACTIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ActionIntegrationConfig.hpp>
#include <map>
#include <alibabacloud/models/ArmsIntegrationConfig.hpp>
#include <alibabacloud/models/ConditionConfigUnified.hpp>
#include <alibabacloud/models/DatasourceConfigUnified.hpp>
#include <alibabacloud/models/NotifyConfigUnified.hpp>
#include <alibabacloud/models/ObserveResourceConfig.hpp>
#include <alibabacloud/models/QueryConfigUnified.hpp>
#include <alibabacloud/models/AlertRuleRcaConfig.hpp>
#include <alibabacloud/models/ScheduleConfigUnified.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ManageAlertRulesUnifiedActionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageAlertRulesUnifiedActionInput& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(actionIntegrationConfig, actionIntegrationConfig_);
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_PTR_TO_JSON(armsIntegrationConfig, armsIntegrationConfig_);
      DARABONBA_PTR_TO_JSON(bizSource, bizSource_);
      DARABONBA_PTR_TO_JSON(conditionConfig, conditionConfig_);
      DARABONBA_PTR_TO_JSON(contentTemplate, contentTemplate_);
      DARABONBA_PTR_TO_JSON(datasourceConfig, datasourceConfig_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(drillEvalTime, drillEvalTime_);
      DARABONBA_PTR_TO_JSON(drillMode, drillMode_);
      DARABONBA_PTR_TO_JSON(drillTimeRange, drillTimeRange_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(observeResourceConfig, observeResourceConfig_);
      DARABONBA_PTR_TO_JSON(observeResourceInstanceId, observeResourceInstanceId_);
      DARABONBA_PTR_TO_JSON(observeResourceType, observeResourceType_);
      DARABONBA_PTR_TO_JSON(queryConfig, queryConfig_);
      DARABONBA_PTR_TO_JSON(rcaConfig, rcaConfig_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(scheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(uuidList, uuidList_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ManageAlertRulesUnifiedActionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(actionIntegrationConfig, actionIntegrationConfig_);
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(armsIntegrationConfig, armsIntegrationConfig_);
      DARABONBA_PTR_FROM_JSON(bizSource, bizSource_);
      DARABONBA_PTR_FROM_JSON(conditionConfig, conditionConfig_);
      DARABONBA_PTR_FROM_JSON(contentTemplate, contentTemplate_);
      DARABONBA_PTR_FROM_JSON(datasourceConfig, datasourceConfig_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(drillEvalTime, drillEvalTime_);
      DARABONBA_PTR_FROM_JSON(drillMode, drillMode_);
      DARABONBA_PTR_FROM_JSON(drillTimeRange, drillTimeRange_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(observeResourceConfig, observeResourceConfig_);
      DARABONBA_PTR_FROM_JSON(observeResourceInstanceId, observeResourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(observeResourceType, observeResourceType_);
      DARABONBA_PTR_FROM_JSON(queryConfig, queryConfig_);
      DARABONBA_PTR_FROM_JSON(rcaConfig, rcaConfig_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(scheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(uuidList, uuidList_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ManageAlertRulesUnifiedActionInput() = default ;
    ManageAlertRulesUnifiedActionInput(const ManageAlertRulesUnifiedActionInput &) = default ;
    ManageAlertRulesUnifiedActionInput(ManageAlertRulesUnifiedActionInput &&) = default ;
    ManageAlertRulesUnifiedActionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageAlertRulesUnifiedActionInput() = default ;
    ManageAlertRulesUnifiedActionInput& operator=(const ManageAlertRulesUnifiedActionInput &) = default ;
    ManageAlertRulesUnifiedActionInput& operator=(ManageAlertRulesUnifiedActionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DrillTimeRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DrillTimeRange& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, DrillTimeRange& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      DrillTimeRange() = default ;
      DrillTimeRange(const DrillTimeRange &) = default ;
      DrillTimeRange(DrillTimeRange &&) = default ;
      DrillTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DrillTimeRange() = default ;
      DrillTimeRange& operator=(const DrillTimeRange &) = default ;
      DrillTimeRange& operator=(DrillTimeRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline DrillTimeRange& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline DrillTimeRange& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The drill end time in Unix milliseconds. The end time must be later than the start time.
      shared_ptr<int64_t> endTime_ {};
      // The drill start time in Unix milliseconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->action_ == nullptr
        && this->actionIntegrationConfig_ == nullptr && this->annotations_ == nullptr && this->armsIntegrationConfig_ == nullptr && this->bizSource_ == nullptr && this->conditionConfig_ == nullptr
        && this->contentTemplate_ == nullptr && this->datasourceConfig_ == nullptr && this->displayName_ == nullptr && this->drillEvalTime_ == nullptr && this->drillMode_ == nullptr
        && this->drillTimeRange_ == nullptr && this->enabled_ == nullptr && this->labels_ == nullptr && this->notifyConfig_ == nullptr && this->observeResourceConfig_ == nullptr
        && this->observeResourceInstanceId_ == nullptr && this->observeResourceType_ == nullptr && this->queryConfig_ == nullptr && this->rcaConfig_ == nullptr && this->regionId_ == nullptr
        && this->scheduleConfig_ == nullptr && this->uuid_ == nullptr && this->uuidList_ == nullptr && this->workspace_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ManageAlertRulesUnifiedActionInput& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionIntegrationConfig Field Functions 
    bool hasActionIntegrationConfig() const { return this->actionIntegrationConfig_ != nullptr;};
    void deleteActionIntegrationConfig() { this->actionIntegrationConfig_ = nullptr;};
    inline const ActionIntegrationConfig & getActionIntegrationConfig() const { DARABONBA_PTR_GET_CONST(actionIntegrationConfig_, ActionIntegrationConfig) };
    inline ActionIntegrationConfig getActionIntegrationConfig() { DARABONBA_PTR_GET(actionIntegrationConfig_, ActionIntegrationConfig) };
    inline ManageAlertRulesUnifiedActionInput& setActionIntegrationConfig(const ActionIntegrationConfig & actionIntegrationConfig) { DARABONBA_PTR_SET_VALUE(actionIntegrationConfig_, actionIntegrationConfig) };
    inline ManageAlertRulesUnifiedActionInput& setActionIntegrationConfig(ActionIntegrationConfig && actionIntegrationConfig) { DARABONBA_PTR_SET_RVALUE(actionIntegrationConfig_, actionIntegrationConfig) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const map<string, string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, map<string, string>) };
    inline map<string, string> getAnnotations() { DARABONBA_PTR_GET(annotations_, map<string, string>) };
    inline ManageAlertRulesUnifiedActionInput& setAnnotations(const map<string, string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline ManageAlertRulesUnifiedActionInput& setAnnotations(map<string, string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // armsIntegrationConfig Field Functions 
    bool hasArmsIntegrationConfig() const { return this->armsIntegrationConfig_ != nullptr;};
    void deleteArmsIntegrationConfig() { this->armsIntegrationConfig_ = nullptr;};
    inline const ArmsIntegrationConfig & getArmsIntegrationConfig() const { DARABONBA_PTR_GET_CONST(armsIntegrationConfig_, ArmsIntegrationConfig) };
    inline ArmsIntegrationConfig getArmsIntegrationConfig() { DARABONBA_PTR_GET(armsIntegrationConfig_, ArmsIntegrationConfig) };
    inline ManageAlertRulesUnifiedActionInput& setArmsIntegrationConfig(const ArmsIntegrationConfig & armsIntegrationConfig) { DARABONBA_PTR_SET_VALUE(armsIntegrationConfig_, armsIntegrationConfig) };
    inline ManageAlertRulesUnifiedActionInput& setArmsIntegrationConfig(ArmsIntegrationConfig && armsIntegrationConfig) { DARABONBA_PTR_SET_RVALUE(armsIntegrationConfig_, armsIntegrationConfig) };


    // bizSource Field Functions 
    bool hasBizSource() const { return this->bizSource_ != nullptr;};
    void deleteBizSource() { this->bizSource_ = nullptr;};
    inline string getBizSource() const { DARABONBA_PTR_GET_DEFAULT(bizSource_, "") };
    inline ManageAlertRulesUnifiedActionInput& setBizSource(string bizSource) { DARABONBA_PTR_SET_VALUE(bizSource_, bizSource) };


    // conditionConfig Field Functions 
    bool hasConditionConfig() const { return this->conditionConfig_ != nullptr;};
    void deleteConditionConfig() { this->conditionConfig_ = nullptr;};
    inline const ConditionConfigUnified & getConditionConfig() const { DARABONBA_PTR_GET_CONST(conditionConfig_, ConditionConfigUnified) };
    inline ConditionConfigUnified getConditionConfig() { DARABONBA_PTR_GET(conditionConfig_, ConditionConfigUnified) };
    inline ManageAlertRulesUnifiedActionInput& setConditionConfig(const ConditionConfigUnified & conditionConfig) { DARABONBA_PTR_SET_VALUE(conditionConfig_, conditionConfig) };
    inline ManageAlertRulesUnifiedActionInput& setConditionConfig(ConditionConfigUnified && conditionConfig) { DARABONBA_PTR_SET_RVALUE(conditionConfig_, conditionConfig) };


    // contentTemplate Field Functions 
    bool hasContentTemplate() const { return this->contentTemplate_ != nullptr;};
    void deleteContentTemplate() { this->contentTemplate_ = nullptr;};
    inline string getContentTemplate() const { DARABONBA_PTR_GET_DEFAULT(contentTemplate_, "") };
    inline ManageAlertRulesUnifiedActionInput& setContentTemplate(string contentTemplate) { DARABONBA_PTR_SET_VALUE(contentTemplate_, contentTemplate) };


    // datasourceConfig Field Functions 
    bool hasDatasourceConfig() const { return this->datasourceConfig_ != nullptr;};
    void deleteDatasourceConfig() { this->datasourceConfig_ = nullptr;};
    inline const DatasourceConfigUnified & getDatasourceConfig() const { DARABONBA_PTR_GET_CONST(datasourceConfig_, DatasourceConfigUnified) };
    inline DatasourceConfigUnified getDatasourceConfig() { DARABONBA_PTR_GET(datasourceConfig_, DatasourceConfigUnified) };
    inline ManageAlertRulesUnifiedActionInput& setDatasourceConfig(const DatasourceConfigUnified & datasourceConfig) { DARABONBA_PTR_SET_VALUE(datasourceConfig_, datasourceConfig) };
    inline ManageAlertRulesUnifiedActionInput& setDatasourceConfig(DatasourceConfigUnified && datasourceConfig) { DARABONBA_PTR_SET_RVALUE(datasourceConfig_, datasourceConfig) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ManageAlertRulesUnifiedActionInput& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // drillEvalTime Field Functions 
    bool hasDrillEvalTime() const { return this->drillEvalTime_ != nullptr;};
    void deleteDrillEvalTime() { this->drillEvalTime_ = nullptr;};
    inline int64_t getDrillEvalTime() const { DARABONBA_PTR_GET_DEFAULT(drillEvalTime_, 0L) };
    inline ManageAlertRulesUnifiedActionInput& setDrillEvalTime(int64_t drillEvalTime) { DARABONBA_PTR_SET_VALUE(drillEvalTime_, drillEvalTime) };


    // drillMode Field Functions 
    bool hasDrillMode() const { return this->drillMode_ != nullptr;};
    void deleteDrillMode() { this->drillMode_ = nullptr;};
    inline string getDrillMode() const { DARABONBA_PTR_GET_DEFAULT(drillMode_, "") };
    inline ManageAlertRulesUnifiedActionInput& setDrillMode(string drillMode) { DARABONBA_PTR_SET_VALUE(drillMode_, drillMode) };


    // drillTimeRange Field Functions 
    bool hasDrillTimeRange() const { return this->drillTimeRange_ != nullptr;};
    void deleteDrillTimeRange() { this->drillTimeRange_ = nullptr;};
    inline const ManageAlertRulesUnifiedActionInput::DrillTimeRange & getDrillTimeRange() const { DARABONBA_PTR_GET_CONST(drillTimeRange_, ManageAlertRulesUnifiedActionInput::DrillTimeRange) };
    inline ManageAlertRulesUnifiedActionInput::DrillTimeRange getDrillTimeRange() { DARABONBA_PTR_GET(drillTimeRange_, ManageAlertRulesUnifiedActionInput::DrillTimeRange) };
    inline ManageAlertRulesUnifiedActionInput& setDrillTimeRange(const ManageAlertRulesUnifiedActionInput::DrillTimeRange & drillTimeRange) { DARABONBA_PTR_SET_VALUE(drillTimeRange_, drillTimeRange) };
    inline ManageAlertRulesUnifiedActionInput& setDrillTimeRange(ManageAlertRulesUnifiedActionInput::DrillTimeRange && drillTimeRange) { DARABONBA_PTR_SET_RVALUE(drillTimeRange_, drillTimeRange) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ManageAlertRulesUnifiedActionInput& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline ManageAlertRulesUnifiedActionInput& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ManageAlertRulesUnifiedActionInput& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const NotifyConfigUnified & getNotifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, NotifyConfigUnified) };
    inline NotifyConfigUnified getNotifyConfig() { DARABONBA_PTR_GET(notifyConfig_, NotifyConfigUnified) };
    inline ManageAlertRulesUnifiedActionInput& setNotifyConfig(const NotifyConfigUnified & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline ManageAlertRulesUnifiedActionInput& setNotifyConfig(NotifyConfigUnified && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // observeResourceConfig Field Functions 
    bool hasObserveResourceConfig() const { return this->observeResourceConfig_ != nullptr;};
    void deleteObserveResourceConfig() { this->observeResourceConfig_ = nullptr;};
    inline const ObserveResourceConfig & getObserveResourceConfig() const { DARABONBA_PTR_GET_CONST(observeResourceConfig_, ObserveResourceConfig) };
    inline ObserveResourceConfig getObserveResourceConfig() { DARABONBA_PTR_GET(observeResourceConfig_, ObserveResourceConfig) };
    inline ManageAlertRulesUnifiedActionInput& setObserveResourceConfig(const ObserveResourceConfig & observeResourceConfig) { DARABONBA_PTR_SET_VALUE(observeResourceConfig_, observeResourceConfig) };
    inline ManageAlertRulesUnifiedActionInput& setObserveResourceConfig(ObserveResourceConfig && observeResourceConfig) { DARABONBA_PTR_SET_RVALUE(observeResourceConfig_, observeResourceConfig) };


    // observeResourceInstanceId Field Functions 
    bool hasObserveResourceInstanceId() const { return this->observeResourceInstanceId_ != nullptr;};
    void deleteObserveResourceInstanceId() { this->observeResourceInstanceId_ = nullptr;};
    inline string getObserveResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(observeResourceInstanceId_, "") };
    inline ManageAlertRulesUnifiedActionInput& setObserveResourceInstanceId(string observeResourceInstanceId) { DARABONBA_PTR_SET_VALUE(observeResourceInstanceId_, observeResourceInstanceId) };


    // observeResourceType Field Functions 
    bool hasObserveResourceType() const { return this->observeResourceType_ != nullptr;};
    void deleteObserveResourceType() { this->observeResourceType_ = nullptr;};
    inline string getObserveResourceType() const { DARABONBA_PTR_GET_DEFAULT(observeResourceType_, "") };
    inline ManageAlertRulesUnifiedActionInput& setObserveResourceType(string observeResourceType) { DARABONBA_PTR_SET_VALUE(observeResourceType_, observeResourceType) };


    // queryConfig Field Functions 
    bool hasQueryConfig() const { return this->queryConfig_ != nullptr;};
    void deleteQueryConfig() { this->queryConfig_ = nullptr;};
    inline const QueryConfigUnified & getQueryConfig() const { DARABONBA_PTR_GET_CONST(queryConfig_, QueryConfigUnified) };
    inline QueryConfigUnified getQueryConfig() { DARABONBA_PTR_GET(queryConfig_, QueryConfigUnified) };
    inline ManageAlertRulesUnifiedActionInput& setQueryConfig(const QueryConfigUnified & queryConfig) { DARABONBA_PTR_SET_VALUE(queryConfig_, queryConfig) };
    inline ManageAlertRulesUnifiedActionInput& setQueryConfig(QueryConfigUnified && queryConfig) { DARABONBA_PTR_SET_RVALUE(queryConfig_, queryConfig) };


    // rcaConfig Field Functions 
    bool hasRcaConfig() const { return this->rcaConfig_ != nullptr;};
    void deleteRcaConfig() { this->rcaConfig_ = nullptr;};
    inline const AlertRuleRcaConfig & getRcaConfig() const { DARABONBA_PTR_GET_CONST(rcaConfig_, AlertRuleRcaConfig) };
    inline AlertRuleRcaConfig getRcaConfig() { DARABONBA_PTR_GET(rcaConfig_, AlertRuleRcaConfig) };
    inline ManageAlertRulesUnifiedActionInput& setRcaConfig(const AlertRuleRcaConfig & rcaConfig) { DARABONBA_PTR_SET_VALUE(rcaConfig_, rcaConfig) };
    inline ManageAlertRulesUnifiedActionInput& setRcaConfig(AlertRuleRcaConfig && rcaConfig) { DARABONBA_PTR_SET_RVALUE(rcaConfig_, rcaConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ManageAlertRulesUnifiedActionInput& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const ScheduleConfigUnified & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, ScheduleConfigUnified) };
    inline ScheduleConfigUnified getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, ScheduleConfigUnified) };
    inline ManageAlertRulesUnifiedActionInput& setScheduleConfig(const ScheduleConfigUnified & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline ManageAlertRulesUnifiedActionInput& setScheduleConfig(ScheduleConfigUnified && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ManageAlertRulesUnifiedActionInput& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline ManageAlertRulesUnifiedActionInput& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline ManageAlertRulesUnifiedActionInput& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ManageAlertRulesUnifiedActionInput& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The action type.
    // 
    // This parameter is required.
    shared_ptr<string> action_ {};
    // The action integration configuration.
    shared_ptr<ActionIntegrationConfig> actionIntegrationConfig_ {};
    // The annotations.
    shared_ptr<map<string, string>> annotations_ {};
    // The ARMS integration configuration.
    shared_ptr<ArmsIntegrationConfig> armsIntegrationConfig_ {};
    // The business source. Valid values include managed_service_for_prometheus, umodel, application_insights, cloud_monitoring, and sls. Pass this field as needed for CREATE, UPDATE, and PATCH actions.
    shared_ptr<string> bizSource_ {};
    // The condition aggregation configuration.
    shared_ptr<ConditionConfigUnified> conditionConfig_ {};
    // The content template.
    shared_ptr<string> contentTemplate_ {};
    // The data source aggregation configuration.
    shared_ptr<DatasourceConfigUnified> datasourceConfig_ {};
    // The display name.
    shared_ptr<string> displayName_ {};
    // The alert drill evaluation time in Unix milliseconds. This field is required by the backend when drillMode is ONE_SHOT. The time cannot be later than the current time or earlier than 90 days ago.
    shared_ptr<int64_t> drillEvalTime_ {};
    // The alert drill mode. This field is required by the backend when the action is DRILL_ALERT. Valid values: ONE_SHOT specifies a single point in time to simulate a complete lifecycle consisting of three events: OCCURRED, PERSISTENT, and RECOVERED. TIME_TRAVEL specifies a time range to simulate the lifecycle in multiple rounds based on the rule scheduling interval.
    shared_ptr<string> drillMode_ {};
    // The alert drill time range in Unix milliseconds. This field is required by the backend when drillMode is TIME_TRAVEL. The endTime must be later than the startTime and cannot be later than the current time. The lifecycle is simulated in multiple rounds based on the rule scheduling interval. The maximum number of rounds is 500. If the limit is exceeded, the backend returns a 400 error.
    shared_ptr<ManageAlertRulesUnifiedActionInput::DrillTimeRange> drillTimeRange_ {};
    // Specifies whether the rule is enabled.
    shared_ptr<bool> enabled_ {};
    // The labels.
    shared_ptr<map<string, string>> labels_ {};
    // The notification aggregation configuration.
    shared_ptr<NotifyConfigUnified> notifyConfig_ {};
    // The observable resource configuration.
    shared_ptr<ObserveResourceConfig> observeResourceConfig_ {};
    // **[Deprecated]** The ID of the monitored object instance. For new integrations, use observeResourceConfig.resources instead. This field is retained only for compatibility with legacy SDKs.
    shared_ptr<string> observeResourceInstanceId_ {};
    // **[Deprecated]** The resource type of the monitored object. For new integrations, use observeResourceConfig.entityType instead. This field is retained only for compatibility with legacy SDKs.
    shared_ptr<string> observeResourceType_ {};
    // The query aggregation configuration.
    shared_ptr<QueryConfigUnified> queryConfig_ {};
    // The root cause analysis (RCA) configuration. Pass this field as needed for CREATE, UPDATE, and PATCH actions.
    shared_ptr<AlertRuleRcaConfig> rcaConfig_ {};
    // The region ID. This aligns with V1 AlertRule.regionId. If not provided, the gateway callerRegionId is used.
    shared_ptr<string> regionId_ {};
    // The schedule aggregation configuration.
    shared_ptr<ScheduleConfigUnified> scheduleConfig_ {};
    // The UUID of the rule. This field is required for UPDATE and PATCH actions.
    shared_ptr<string> uuid_ {};
    // The list of UUIDs for the rules to be deleted. This is used for the BATCH_DELETE action.
    shared_ptr<vector<string>> uuidList_ {};
    // The workspace ID. This field is required for CREATE, UPDATE, PATCH, DELETE, ENABLE, DISABLE, BATCH_DELETE, BATCH_ENABLE, and BATCH_DISABLE actions. It identifies the CloudMonitor workspace to which the rule belongs.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
