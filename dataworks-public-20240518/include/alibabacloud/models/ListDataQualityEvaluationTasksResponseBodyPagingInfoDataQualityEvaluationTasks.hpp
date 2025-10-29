// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKSRESPONSEBODYPAGINGINFODATAQUALITYEVALUATIONTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKSRESPONSEBODYPAGINGINFODATAQUALITYEVALUATIONTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksHooks.hpp>
#include <alibabacloud/models/ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications.hpp>
#include <alibabacloud/models/ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTarget.hpp>
#include <alibabacloud/models/ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& obj) { 
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
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks() = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks(const ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks &) = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks(ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks &&) = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks() = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& operator=(const ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks &) = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& operator=(ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && return this->description_ == nullptr && return this->hooks_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->notifications_ == nullptr
        && return this->projectId_ == nullptr && return this->runtimeConf_ == nullptr && return this->target_ == nullptr && return this->trigger_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksHooks>) };
    inline vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksHooks>) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setHooks(const vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setHooks(vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifications Field Functions 
    bool hasNotifications() const { return this->notifications_ != nullptr;};
    void deleteNotifications() { this->notifications_ = nullptr;};
    inline const Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications & notifications() const { DARABONBA_PTR_GET_CONST(notifications_, Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications) };
    inline Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications notifications() { DARABONBA_PTR_GET(notifications_, Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setNotifications(const Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setNotifications(Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeConf Field Functions 
    bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
    void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
    inline string runtimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTarget) };
    inline Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTarget target() { DARABONBA_PTR_GET(target_, Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTarget) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setTarget(const Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setTarget(Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTrigger) };
    inline Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTrigger) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setTrigger(const Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks& setTrigger(Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    // The description of the data quality monitoring task. The description can be up to 65,535 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The callback configurations of the task during the instance lifecycle. Blocking an auto triggered node is a type of callback event. Only this type is supported.
    std::shared_ptr<vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksHooks>> hooks_ = nullptr;
    // The ID of the data quality monitoring task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the data quality monitoring task. The name can be up to 255 characters in length and can contain digits, letters, and punctuation marks.
    std::shared_ptr<string> name_ = nullptr;
    // The configurations for alert notifications.
    std::shared_ptr<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksNotifications> notifications_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The configuration of the data source. The value of the queue field is default, and that of the sqlEngine field can be set to SPARK_SQL, KYUUBI, PRESTO_SQL, or HIVE_SQL. The value default indicates the YARN queue for E-MapReduce (EMR) tasks.
    std::shared_ptr<string> runtimeConf_ = nullptr;
    // The monitored object of the task.
    std::shared_ptr<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTarget> target_ = nullptr;
    // The trigger configuration of the task.
    std::shared_ptr<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasksTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
