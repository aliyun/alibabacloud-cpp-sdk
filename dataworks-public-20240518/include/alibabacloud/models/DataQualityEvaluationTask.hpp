// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASK_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataQualityEvaluationTaskHooks.hpp>
#include <alibabacloud/models/DataQualityEvaluationTaskNotifications.hpp>
#include <alibabacloud/models/DataQualityEvaluationTaskTarget.hpp>
#include <alibabacloud/models/DataQualityEvaluationTaskTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityEvaluationTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTask& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
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
    friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
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
    DataQualityEvaluationTask() = default ;
    DataQualityEvaluationTask(const DataQualityEvaluationTask &) = default ;
    DataQualityEvaluationTask(DataQualityEvaluationTask &&) = default ;
    DataQualityEvaluationTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityEvaluationTask() = default ;
    DataQualityEvaluationTask& operator=(const DataQualityEvaluationTask &) = default ;
    DataQualityEvaluationTask& operator=(DataQualityEvaluationTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceId_ != nullptr
        && this->description_ != nullptr && this->hooks_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->notifications_ != nullptr
        && this->projectId_ != nullptr && this->runtimeConf_ != nullptr && this->target_ != nullptr && this->tenantId_ != nullptr && this->trigger_ != nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline DataQualityEvaluationTask& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DataQualityEvaluationTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<DataQualityEvaluationTaskHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<DataQualityEvaluationTaskHooks>) };
    inline vector<DataQualityEvaluationTaskHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<DataQualityEvaluationTaskHooks>) };
    inline DataQualityEvaluationTask& setHooks(const vector<DataQualityEvaluationTaskHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline DataQualityEvaluationTask& setHooks(vector<DataQualityEvaluationTaskHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DataQualityEvaluationTask& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataQualityEvaluationTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifications Field Functions 
    bool hasNotifications() const { return this->notifications_ != nullptr;};
    void deleteNotifications() { this->notifications_ = nullptr;};
    inline const vector<DataQualityEvaluationTaskNotifications> & notifications() const { DARABONBA_PTR_GET_CONST(notifications_, vector<DataQualityEvaluationTaskNotifications>) };
    inline vector<DataQualityEvaluationTaskNotifications> notifications() { DARABONBA_PTR_GET(notifications_, vector<DataQualityEvaluationTaskNotifications>) };
    inline DataQualityEvaluationTask& setNotifications(const vector<DataQualityEvaluationTaskNotifications> & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
    inline DataQualityEvaluationTask& setNotifications(vector<DataQualityEvaluationTaskNotifications> && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DataQualityEvaluationTask& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeConf Field Functions 
    bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
    void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
    inline string runtimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
    inline DataQualityEvaluationTask& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const DataQualityEvaluationTaskTarget & target() const { DARABONBA_PTR_GET_CONST(target_, DataQualityEvaluationTaskTarget) };
    inline DataQualityEvaluationTaskTarget target() { DARABONBA_PTR_GET(target_, DataQualityEvaluationTaskTarget) };
    inline DataQualityEvaluationTask& setTarget(const DataQualityEvaluationTaskTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DataQualityEvaluationTask& setTarget(DataQualityEvaluationTaskTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DataQualityEvaluationTask& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const DataQualityEvaluationTaskTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, DataQualityEvaluationTaskTrigger) };
    inline DataQualityEvaluationTaskTrigger trigger() { DARABONBA_PTR_GET(trigger_, DataQualityEvaluationTaskTrigger) };
    inline DataQualityEvaluationTask& setTrigger(const DataQualityEvaluationTaskTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline DataQualityEvaluationTask& setTrigger(DataQualityEvaluationTaskTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<DataQualityEvaluationTaskHooks>> hooks_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<DataQualityEvaluationTaskNotifications>> notifications_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> runtimeConf_ = nullptr;
    std::shared_ptr<DataQualityEvaluationTaskTarget> target_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<DataQualityEvaluationTaskTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
