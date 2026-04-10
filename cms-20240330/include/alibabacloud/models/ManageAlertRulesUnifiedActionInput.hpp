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
#include <alibabacloud/models/QueryConfigUnified.hpp>
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
      DARABONBA_PTR_TO_JSON(conditionConfig, conditionConfig_);
      DARABONBA_PTR_TO_JSON(contentTemplate, contentTemplate_);
      DARABONBA_PTR_TO_JSON(datasourceConfig, datasourceConfig_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(queryConfig, queryConfig_);
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
      DARABONBA_PTR_FROM_JSON(conditionConfig, conditionConfig_);
      DARABONBA_PTR_FROM_JSON(contentTemplate, contentTemplate_);
      DARABONBA_PTR_FROM_JSON(datasourceConfig, datasourceConfig_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(notifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(queryConfig, queryConfig_);
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
    virtual bool empty() const override { return this->action_ == nullptr
        && this->actionIntegrationConfig_ == nullptr && this->annotations_ == nullptr && this->armsIntegrationConfig_ == nullptr && this->conditionConfig_ == nullptr && this->contentTemplate_ == nullptr
        && this->datasourceConfig_ == nullptr && this->displayName_ == nullptr && this->enabled_ == nullptr && this->labels_ == nullptr && this->notifyConfig_ == nullptr
        && this->queryConfig_ == nullptr && this->scheduleConfig_ == nullptr && this->uuid_ == nullptr && this->uuidList_ == nullptr && this->workspace_ == nullptr; };
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


    // queryConfig Field Functions 
    bool hasQueryConfig() const { return this->queryConfig_ != nullptr;};
    void deleteQueryConfig() { this->queryConfig_ = nullptr;};
    inline const QueryConfigUnified & getQueryConfig() const { DARABONBA_PTR_GET_CONST(queryConfig_, QueryConfigUnified) };
    inline QueryConfigUnified getQueryConfig() { DARABONBA_PTR_GET(queryConfig_, QueryConfigUnified) };
    inline ManageAlertRulesUnifiedActionInput& setQueryConfig(const QueryConfigUnified & queryConfig) { DARABONBA_PTR_SET_VALUE(queryConfig_, queryConfig) };
    inline ManageAlertRulesUnifiedActionInput& setQueryConfig(QueryConfigUnified && queryConfig) { DARABONBA_PTR_SET_RVALUE(queryConfig_, queryConfig) };


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
    // 操作类型
    // 
    // This parameter is required.
    shared_ptr<string> action_ {};
    shared_ptr<ActionIntegrationConfig> actionIntegrationConfig_ {};
    // 注解
    shared_ptr<map<string, string>> annotations_ {};
    shared_ptr<ArmsIntegrationConfig> armsIntegrationConfig_ {};
    shared_ptr<ConditionConfigUnified> conditionConfig_ {};
    // 内容模板
    shared_ptr<string> contentTemplate_ {};
    shared_ptr<DatasourceConfigUnified> datasourceConfig_ {};
    // 显示名称
    shared_ptr<string> displayName_ {};
    // 是否启用
    shared_ptr<bool> enabled_ {};
    // 标签
    shared_ptr<map<string, string>> labels_ {};
    shared_ptr<NotifyConfigUnified> notifyConfig_ {};
    shared_ptr<QueryConfigUnified> queryConfig_ {};
    shared_ptr<ScheduleConfigUnified> scheduleConfig_ {};
    // 规则 UUID（UPDATE/PATCH 必填）
    shared_ptr<string> uuid_ {};
    // 待删除规则 UUID 列表（BATCH_DELETE）
    shared_ptr<vector<string>> uuidList_ {};
    // 工作空间（CREATE/UPDATE 等）
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
