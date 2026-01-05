// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityEvaluationTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityEvaluationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityRules, dataQualityRulesShrink_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooksShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notifications, notificationsShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_TO_JSON(Target, targetShrink_);
      DARABONBA_PTR_TO_JSON(Trigger, triggerShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityEvaluationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityRules, dataQualityRulesShrink_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooksShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notifications, notificationsShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_FROM_JSON(Target, targetShrink_);
      DARABONBA_PTR_FROM_JSON(Trigger, triggerShrink_);
    };
    UpdateDataQualityEvaluationTaskShrinkRequest() = default ;
    UpdateDataQualityEvaluationTaskShrinkRequest(const UpdateDataQualityEvaluationTaskShrinkRequest &) = default ;
    UpdateDataQualityEvaluationTaskShrinkRequest(UpdateDataQualityEvaluationTaskShrinkRequest &&) = default ;
    UpdateDataQualityEvaluationTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityEvaluationTaskShrinkRequest() = default ;
    UpdateDataQualityEvaluationTaskShrinkRequest& operator=(const UpdateDataQualityEvaluationTaskShrinkRequest &) = default ;
    UpdateDataQualityEvaluationTaskShrinkRequest& operator=(UpdateDataQualityEvaluationTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityRulesShrink_ == nullptr
        && this->dataSourceId_ == nullptr && this->description_ == nullptr && this->hooksShrink_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->notificationsShrink_ == nullptr && this->projectId_ == nullptr && this->runtimeConf_ == nullptr && this->targetShrink_ == nullptr && this->triggerShrink_ == nullptr; };
    // dataQualityRulesShrink Field Functions 
    bool hasDataQualityRulesShrink() const { return this->dataQualityRulesShrink_ != nullptr;};
    void deleteDataQualityRulesShrink() { this->dataQualityRulesShrink_ = nullptr;};
    inline string getDataQualityRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(dataQualityRulesShrink_, "") };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setDataQualityRulesShrink(string dataQualityRulesShrink) { DARABONBA_PTR_SET_VALUE(dataQualityRulesShrink_, dataQualityRulesShrink) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooksShrink Field Functions 
    bool hasHooksShrink() const { return this->hooksShrink_ != nullptr;};
    void deleteHooksShrink() { this->hooksShrink_ = nullptr;};
    inline string getHooksShrink() const { DARABONBA_PTR_GET_DEFAULT(hooksShrink_, "") };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setHooksShrink(string hooksShrink) { DARABONBA_PTR_SET_VALUE(hooksShrink_, hooksShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationsShrink Field Functions 
    bool hasNotificationsShrink() const { return this->notificationsShrink_ != nullptr;};
    void deleteNotificationsShrink() { this->notificationsShrink_ = nullptr;};
    inline string getNotificationsShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationsShrink_, "") };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setNotificationsShrink(string notificationsShrink) { DARABONBA_PTR_SET_VALUE(notificationsShrink_, notificationsShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeConf Field Functions 
    bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
    void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
    inline string getRuntimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


    // targetShrink Field Functions 
    bool hasTargetShrink() const { return this->targetShrink_ != nullptr;};
    void deleteTargetShrink() { this->targetShrink_ = nullptr;};
    inline string getTargetShrink() const { DARABONBA_PTR_GET_DEFAULT(targetShrink_, "") };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setTargetShrink(string targetShrink) { DARABONBA_PTR_SET_VALUE(targetShrink_, targetShrink) };


    // triggerShrink Field Functions 
    bool hasTriggerShrink() const { return this->triggerShrink_ != nullptr;};
    void deleteTriggerShrink() { this->triggerShrink_ = nullptr;};
    inline string getTriggerShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerShrink_, "") };
    inline UpdateDataQualityEvaluationTaskShrinkRequest& setTriggerShrink(string triggerShrink) { DARABONBA_PTR_SET_VALUE(triggerShrink_, triggerShrink) };


  protected:
    // The list of monitoring rules that are associated with the monitor.
    shared_ptr<string> dataQualityRulesShrink_ {};
    // The data source ID. You can call the [ListDataSources](https://help.aliyun.com/document_detail/211431.html) operation to query the ID.
    shared_ptr<int64_t> dataSourceId_ {};
    // The description of the monitor.
    shared_ptr<string> description_ {};
    // The hook.
    shared_ptr<string> hooksShrink_ {};
    // The ID of the monitor.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The name of the monitor.
    shared_ptr<string> name_ {};
    // The configurations of alert notifications.
    shared_ptr<string> notificationsShrink_ {};
    // The ID of the DataWorks workspace.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The extended configurations in JSON-formatted strings. You can use this parameter only for monitors that are used to monitor the quality of E-MapReduce (EMR) data.
    // 
    // *   queue: The Yarn queue used when a monitor checks the quality of EMR data. By default, the queue configured for the current workspace is used.
    // 
    // *   sqlEngine: The SQL engine used when a monitor checks the quality of EMR data.
    // 
    //     *   HIVE_SQL
    //     *   SPARK_SQL
    shared_ptr<string> runtimeConf_ {};
    // The monitored object of the data quality monitoring task.
    shared_ptr<string> targetShrink_ {};
    // The trigger configuration of the monitor.
    shared_ptr<string> triggerShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
