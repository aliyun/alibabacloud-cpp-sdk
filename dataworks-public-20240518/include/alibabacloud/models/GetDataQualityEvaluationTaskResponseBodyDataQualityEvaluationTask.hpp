// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODYDATAQUALITYEVALUATIONTASK_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODYDATAQUALITYEVALUATIONTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks.hpp>
#include <alibabacloud/models/GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotifications.hpp>
#include <alibabacloud/models/GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTarget.hpp>
#include <alibabacloud/models/GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& obj) { 
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
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask() = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask(const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask &) = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask(GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask &&) = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask() = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& operator=(const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask &) = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& operator=(GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceId_ != nullptr
        && this->description_ != nullptr && this->hooks_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->notifications_ != nullptr
        && this->projectId_ != nullptr && this->runtimeConf_ != nullptr && this->target_ != nullptr && this->trigger_ != nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks>) };
    inline vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks>) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setHooks(const vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setHooks(vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifications Field Functions 
    bool hasNotifications() const { return this->notifications_ != nullptr;};
    void deleteNotifications() { this->notifications_ = nullptr;};
    inline const Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotifications & notifications() const { DARABONBA_PTR_GET_CONST(notifications_, Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotifications) };
    inline Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotifications notifications() { DARABONBA_PTR_GET(notifications_, Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotifications) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setNotifications(const Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotifications & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setNotifications(Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotifications && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeConf Field Functions 
    bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
    void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
    inline string runtimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTarget) };
    inline Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTarget target() { DARABONBA_PTR_GET(target_, Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTarget) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setTarget(const Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setTarget(Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTrigger) };
    inline Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTrigger) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setTrigger(const Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTask& setTrigger(Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The ID of the data source used for the monitor.
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    // The description of the monitor.
    std::shared_ptr<string> description_ = nullptr;
    // The hook.
    std::shared_ptr<vector<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks>> hooks_ = nullptr;
    // The ID of the data quality monitor.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the monitor.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The configurations of alert notifications.
    std::shared_ptr<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskNotifications> notifications_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // Extended configuration, JSON-formatted string, takes effect only for EMR-type data quality monitoring.
    // 
    // - queue: the yarn queue used when performing EMR data quality verification. The default queue is the queue configured for this project.
    // - sqlEngine: SQL engine used when performing EMR data verification
    //     - HIVE_ SQL
    //     - SPARK_ SQL
    std::shared_ptr<string> runtimeConf_ = nullptr;
    // The monitored object of the monitor.
    std::shared_ptr<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTarget> target_ = nullptr;
    // The trigger configuration of the monitor.
    std::shared_ptr<Models::GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
