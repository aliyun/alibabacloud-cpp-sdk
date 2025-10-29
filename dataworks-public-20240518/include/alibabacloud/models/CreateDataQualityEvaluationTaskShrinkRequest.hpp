// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityEvaluationTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityEvaluationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityRules, dataQualityRulesShrink_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooksShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notifications, notificationsShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_TO_JSON(Target, targetShrink_);
      DARABONBA_PTR_TO_JSON(Trigger, triggerShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityEvaluationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityRules, dataQualityRulesShrink_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooksShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notifications, notificationsShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_FROM_JSON(Target, targetShrink_);
      DARABONBA_PTR_FROM_JSON(Trigger, triggerShrink_);
    };
    CreateDataQualityEvaluationTaskShrinkRequest() = default ;
    CreateDataQualityEvaluationTaskShrinkRequest(const CreateDataQualityEvaluationTaskShrinkRequest &) = default ;
    CreateDataQualityEvaluationTaskShrinkRequest(CreateDataQualityEvaluationTaskShrinkRequest &&) = default ;
    CreateDataQualityEvaluationTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityEvaluationTaskShrinkRequest() = default ;
    CreateDataQualityEvaluationTaskShrinkRequest& operator=(const CreateDataQualityEvaluationTaskShrinkRequest &) = default ;
    CreateDataQualityEvaluationTaskShrinkRequest& operator=(CreateDataQualityEvaluationTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityRulesShrink_ == nullptr
        && return this->dataSourceId_ == nullptr && return this->description_ == nullptr && return this->hooksShrink_ == nullptr && return this->name_ == nullptr && return this->notificationsShrink_ == nullptr
        && return this->projectId_ == nullptr && return this->runtimeConf_ == nullptr && return this->targetShrink_ == nullptr && return this->triggerShrink_ == nullptr; };
    // dataQualityRulesShrink Field Functions 
    bool hasDataQualityRulesShrink() const { return this->dataQualityRulesShrink_ != nullptr;};
    void deleteDataQualityRulesShrink() { this->dataQualityRulesShrink_ = nullptr;};
    inline string dataQualityRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(dataQualityRulesShrink_, "") };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setDataQualityRulesShrink(string dataQualityRulesShrink) { DARABONBA_PTR_SET_VALUE(dataQualityRulesShrink_, dataQualityRulesShrink) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooksShrink Field Functions 
    bool hasHooksShrink() const { return this->hooksShrink_ != nullptr;};
    void deleteHooksShrink() { this->hooksShrink_ = nullptr;};
    inline string hooksShrink() const { DARABONBA_PTR_GET_DEFAULT(hooksShrink_, "") };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setHooksShrink(string hooksShrink) { DARABONBA_PTR_SET_VALUE(hooksShrink_, hooksShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationsShrink Field Functions 
    bool hasNotificationsShrink() const { return this->notificationsShrink_ != nullptr;};
    void deleteNotificationsShrink() { this->notificationsShrink_ = nullptr;};
    inline string notificationsShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationsShrink_, "") };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setNotificationsShrink(string notificationsShrink) { DARABONBA_PTR_SET_VALUE(notificationsShrink_, notificationsShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeConf Field Functions 
    bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
    void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
    inline string runtimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


    // targetShrink Field Functions 
    bool hasTargetShrink() const { return this->targetShrink_ != nullptr;};
    void deleteTargetShrink() { this->targetShrink_ = nullptr;};
    inline string targetShrink() const { DARABONBA_PTR_GET_DEFAULT(targetShrink_, "") };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setTargetShrink(string targetShrink) { DARABONBA_PTR_SET_VALUE(targetShrink_, targetShrink) };


    // triggerShrink Field Functions 
    bool hasTriggerShrink() const { return this->triggerShrink_ != nullptr;};
    void deleteTriggerShrink() { this->triggerShrink_ = nullptr;};
    inline string triggerShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerShrink_, "") };
    inline CreateDataQualityEvaluationTaskShrinkRequest& setTriggerShrink(string triggerShrink) { DARABONBA_PTR_SET_VALUE(triggerShrink_, triggerShrink) };


  protected:
    // The list of monitoring rules that are associated with the monitor. If you configure the ID of a monitoring rule by using the DataQualityRule.Id parameter, the system associates the rule with a created monitor. If you do not configure the ID of a monitoring rule, the system creates a new monitoring rule by using other fields and associates the rule with a created monitor.
    std::shared_ptr<string> dataQualityRulesShrink_ = nullptr;
    // The data source ID. You can call the [ListDataSources](https://help.aliyun.com/document_detail/211431.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    // The description of the monitor.
    std::shared_ptr<string> description_ = nullptr;
    // The hook.
    std::shared_ptr<string> hooksShrink_ = nullptr;
    // The name of the monitor.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The configurations of alert notifications.
    std::shared_ptr<string> notificationsShrink_ = nullptr;
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // You can use this parameter to specify the DataWorks workspace on which you want to perform the API operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The extended configurations in JSON-formatted strings. You can use this parameter only for monitors that are used to monitor the quality of E-MapReduce (EMR) data.
    // 
    // *   queue: The Yarn queue used when a monitor checks the quality of EMR data. By default, the queue configured for the current workspace is used.
    // 
    // *   sqlEngine: The SQL engine used when a monitor checks the quality of EMR data.
    // 
    //     *   HIVE_SQL
    //     *   SPARK_SQL
    std::shared_ptr<string> runtimeConf_ = nullptr;
    // The monitored object of the monitor.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetShrink_ = nullptr;
    // The trigger configuration of the monitor.
    std::shared_ptr<string> triggerShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
