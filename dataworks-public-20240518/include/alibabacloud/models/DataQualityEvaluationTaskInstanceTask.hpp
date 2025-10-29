// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCETASK_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCETASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataQualityEvaluationTaskInstanceTaskHooks.hpp>
#include <alibabacloud/models/DataQualityEvaluationTaskInstanceTaskNotifications.hpp>
#include <alibabacloud/models/DataQualityEvaluationTaskInstanceTaskTarget.hpp>
#include <alibabacloud/models/DataQualityEvaluationTaskInstanceTaskTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityEvaluationTaskInstanceTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTaskInstanceTask& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Hooks, hooks_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notifications, notifications_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTaskInstanceTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notifications, notifications_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    DataQualityEvaluationTaskInstanceTask() = default ;
    DataQualityEvaluationTaskInstanceTask(const DataQualityEvaluationTaskInstanceTask &) = default ;
    DataQualityEvaluationTaskInstanceTask(DataQualityEvaluationTaskInstanceTask &&) = default ;
    DataQualityEvaluationTaskInstanceTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityEvaluationTaskInstanceTask() = default ;
    DataQualityEvaluationTaskInstanceTask& operator=(const DataQualityEvaluationTaskInstanceTask &) = default ;
    DataQualityEvaluationTaskInstanceTask& operator=(DataQualityEvaluationTaskInstanceTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && return this->hooks_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->notifications_ == nullptr && return this->projectId_ == nullptr
        && return this->runtimeConf_ == nullptr && return this->target_ == nullptr && return this->tenantId_ == nullptr && return this->trigger_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline DataQualityEvaluationTaskInstanceTask& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<Models::DataQualityEvaluationTaskInstanceTaskHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<Models::DataQualityEvaluationTaskInstanceTaskHooks>) };
    inline vector<Models::DataQualityEvaluationTaskInstanceTaskHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<Models::DataQualityEvaluationTaskInstanceTaskHooks>) };
    inline DataQualityEvaluationTaskInstanceTask& setHooks(const vector<Models::DataQualityEvaluationTaskInstanceTaskHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline DataQualityEvaluationTaskInstanceTask& setHooks(vector<Models::DataQualityEvaluationTaskInstanceTaskHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DataQualityEvaluationTaskInstanceTask& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataQualityEvaluationTaskInstanceTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifications Field Functions 
    bool hasNotifications() const { return this->notifications_ != nullptr;};
    void deleteNotifications() { this->notifications_ = nullptr;};
    inline const vector<Models::DataQualityEvaluationTaskInstanceTaskNotifications> & notifications() const { DARABONBA_PTR_GET_CONST(notifications_, vector<Models::DataQualityEvaluationTaskInstanceTaskNotifications>) };
    inline vector<Models::DataQualityEvaluationTaskInstanceTaskNotifications> notifications() { DARABONBA_PTR_GET(notifications_, vector<Models::DataQualityEvaluationTaskInstanceTaskNotifications>) };
    inline DataQualityEvaluationTaskInstanceTask& setNotifications(const vector<Models::DataQualityEvaluationTaskInstanceTaskNotifications> & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
    inline DataQualityEvaluationTaskInstanceTask& setNotifications(vector<Models::DataQualityEvaluationTaskInstanceTaskNotifications> && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DataQualityEvaluationTaskInstanceTask& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeConf Field Functions 
    bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
    void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
    inline string runtimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
    inline DataQualityEvaluationTaskInstanceTask& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::DataQualityEvaluationTaskInstanceTaskTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::DataQualityEvaluationTaskInstanceTaskTarget) };
    inline Models::DataQualityEvaluationTaskInstanceTaskTarget target() { DARABONBA_PTR_GET(target_, Models::DataQualityEvaluationTaskInstanceTaskTarget) };
    inline DataQualityEvaluationTaskInstanceTask& setTarget(const Models::DataQualityEvaluationTaskInstanceTaskTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DataQualityEvaluationTaskInstanceTask& setTarget(Models::DataQualityEvaluationTaskInstanceTaskTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DataQualityEvaluationTaskInstanceTask& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::DataQualityEvaluationTaskInstanceTaskTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::DataQualityEvaluationTaskInstanceTaskTrigger) };
    inline Models::DataQualityEvaluationTaskInstanceTaskTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::DataQualityEvaluationTaskInstanceTaskTrigger) };
    inline DataQualityEvaluationTaskInstanceTask& setTrigger(const Models::DataQualityEvaluationTaskInstanceTaskTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline DataQualityEvaluationTaskInstanceTask& setTrigger(Models::DataQualityEvaluationTaskInstanceTaskTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    std::shared_ptr<vector<Models::DataQualityEvaluationTaskInstanceTaskHooks>> hooks_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::DataQualityEvaluationTaskInstanceTaskNotifications>> notifications_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> runtimeConf_ = nullptr;
    std::shared_ptr<Models::DataQualityEvaluationTaskInstanceTaskTarget> target_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<Models::DataQualityEvaluationTaskInstanceTaskTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
