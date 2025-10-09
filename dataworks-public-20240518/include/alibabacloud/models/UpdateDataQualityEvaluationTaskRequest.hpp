// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestDataQualityRules.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestHooks.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestNotifications.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestTarget.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityEvaluationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityRules, dataQualityRules_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooks_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notifications, notifications_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityRules, dataQualityRules_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notifications, notifications_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    UpdateDataQualityEvaluationTaskRequest() = default ;
    UpdateDataQualityEvaluationTaskRequest(const UpdateDataQualityEvaluationTaskRequest &) = default ;
    UpdateDataQualityEvaluationTaskRequest(UpdateDataQualityEvaluationTaskRequest &&) = default ;
    UpdateDataQualityEvaluationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityEvaluationTaskRequest() = default ;
    UpdateDataQualityEvaluationTaskRequest& operator=(const UpdateDataQualityEvaluationTaskRequest &) = default ;
    UpdateDataQualityEvaluationTaskRequest& operator=(UpdateDataQualityEvaluationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityRules_ != nullptr
        && this->dataSourceId_ != nullptr && this->description_ != nullptr && this->hooks_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->notifications_ != nullptr && this->projectId_ != nullptr && this->runtimeConf_ != nullptr && this->target_ != nullptr && this->trigger_ != nullptr; };
    // dataQualityRules Field Functions 
    bool hasDataQualityRules() const { return this->dataQualityRules_ != nullptr;};
    void deleteDataQualityRules() { this->dataQualityRules_ = nullptr;};
    inline const vector<UpdateDataQualityEvaluationTaskRequestDataQualityRules> & dataQualityRules() const { DARABONBA_PTR_GET_CONST(dataQualityRules_, vector<UpdateDataQualityEvaluationTaskRequestDataQualityRules>) };
    inline vector<UpdateDataQualityEvaluationTaskRequestDataQualityRules> dataQualityRules() { DARABONBA_PTR_GET(dataQualityRules_, vector<UpdateDataQualityEvaluationTaskRequestDataQualityRules>) };
    inline UpdateDataQualityEvaluationTaskRequest& setDataQualityRules(const vector<UpdateDataQualityEvaluationTaskRequestDataQualityRules> & dataQualityRules) { DARABONBA_PTR_SET_VALUE(dataQualityRules_, dataQualityRules) };
    inline UpdateDataQualityEvaluationTaskRequest& setDataQualityRules(vector<UpdateDataQualityEvaluationTaskRequestDataQualityRules> && dataQualityRules) { DARABONBA_PTR_SET_RVALUE(dataQualityRules_, dataQualityRules) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline UpdateDataQualityEvaluationTaskRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataQualityEvaluationTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<UpdateDataQualityEvaluationTaskRequestHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<UpdateDataQualityEvaluationTaskRequestHooks>) };
    inline vector<UpdateDataQualityEvaluationTaskRequestHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<UpdateDataQualityEvaluationTaskRequestHooks>) };
    inline UpdateDataQualityEvaluationTaskRequest& setHooks(const vector<UpdateDataQualityEvaluationTaskRequestHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline UpdateDataQualityEvaluationTaskRequest& setHooks(vector<UpdateDataQualityEvaluationTaskRequestHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityEvaluationTaskRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityEvaluationTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifications Field Functions 
    bool hasNotifications() const { return this->notifications_ != nullptr;};
    void deleteNotifications() { this->notifications_ = nullptr;};
    inline const UpdateDataQualityEvaluationTaskRequestNotifications & notifications() const { DARABONBA_PTR_GET_CONST(notifications_, UpdateDataQualityEvaluationTaskRequestNotifications) };
    inline UpdateDataQualityEvaluationTaskRequestNotifications notifications() { DARABONBA_PTR_GET(notifications_, UpdateDataQualityEvaluationTaskRequestNotifications) };
    inline UpdateDataQualityEvaluationTaskRequest& setNotifications(const UpdateDataQualityEvaluationTaskRequestNotifications & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
    inline UpdateDataQualityEvaluationTaskRequest& setNotifications(UpdateDataQualityEvaluationTaskRequestNotifications && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityEvaluationTaskRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeConf Field Functions 
    bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
    void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
    inline string runtimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
    inline UpdateDataQualityEvaluationTaskRequest& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const UpdateDataQualityEvaluationTaskRequestTarget & target() const { DARABONBA_PTR_GET_CONST(target_, UpdateDataQualityEvaluationTaskRequestTarget) };
    inline UpdateDataQualityEvaluationTaskRequestTarget target() { DARABONBA_PTR_GET(target_, UpdateDataQualityEvaluationTaskRequestTarget) };
    inline UpdateDataQualityEvaluationTaskRequest& setTarget(const UpdateDataQualityEvaluationTaskRequestTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline UpdateDataQualityEvaluationTaskRequest& setTarget(UpdateDataQualityEvaluationTaskRequestTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const UpdateDataQualityEvaluationTaskRequestTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, UpdateDataQualityEvaluationTaskRequestTrigger) };
    inline UpdateDataQualityEvaluationTaskRequestTrigger trigger() { DARABONBA_PTR_GET(trigger_, UpdateDataQualityEvaluationTaskRequestTrigger) };
    inline UpdateDataQualityEvaluationTaskRequest& setTrigger(const UpdateDataQualityEvaluationTaskRequestTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline UpdateDataQualityEvaluationTaskRequest& setTrigger(UpdateDataQualityEvaluationTaskRequestTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The list of monitoring rules that are associated with the monitor.
    std::shared_ptr<vector<UpdateDataQualityEvaluationTaskRequestDataQualityRules>> dataQualityRules_ = nullptr;
    // The data source ID. You can call the [ListDataSources](https://help.aliyun.com/document_detail/211431.html) operation to query the ID.
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    // The description of the monitor.
    std::shared_ptr<string> description_ = nullptr;
    // The hook.
    std::shared_ptr<vector<UpdateDataQualityEvaluationTaskRequestHooks>> hooks_ = nullptr;
    // The ID of the monitor.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the monitor.
    std::shared_ptr<string> name_ = nullptr;
    // The configurations of alert notifications.
    std::shared_ptr<UpdateDataQualityEvaluationTaskRequestNotifications> notifications_ = nullptr;
    // The ID of the DataWorks workspace.
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
    // The monitored object of the data quality monitoring task.
    std::shared_ptr<UpdateDataQualityEvaluationTaskRequestTarget> target_ = nullptr;
    // The trigger configuration of the monitor.
    std::shared_ptr<UpdateDataQualityEvaluationTaskRequestTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
