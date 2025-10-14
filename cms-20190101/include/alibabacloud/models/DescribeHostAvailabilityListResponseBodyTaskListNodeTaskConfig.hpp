// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig.hpp>
#include <alibabacloud/models/DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances.hpp>
#include <alibabacloud/models/DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskOption, taskOption_);
      DARABONBA_PTR_TO_JSON(TaskScope, taskScope_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskOption, taskOption_);
      DARABONBA_PTR_FROM_JSON(TaskScope, taskScope_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig &&) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& operator=(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& operator=(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && return this->disabled_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->id_ == nullptr && return this->instances_ == nullptr
        && return this->taskName_ == nullptr && return this->taskOption_ == nullptr && return this->taskScope_ == nullptr && return this->taskType_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig) };
    inline Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig alertConfig() { DARABONBA_PTR_GET(alertConfig_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setAlertConfig(const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setAlertConfig(Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances & instances() const { DARABONBA_PTR_GET_CONST(instances_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances) };
    inline Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances instances() { DARABONBA_PTR_GET(instances_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setInstances(const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setInstances(Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskOption Field Functions 
    bool hasTaskOption() const { return this->taskOption_ != nullptr;};
    void deleteTaskOption() { this->taskOption_ = nullptr;};
    inline const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption & taskOption() const { DARABONBA_PTR_GET_CONST(taskOption_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption) };
    inline Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption taskOption() { DARABONBA_PTR_GET(taskOption_, Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setTaskOption(const Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption & taskOption) { DARABONBA_PTR_SET_VALUE(taskOption_, taskOption) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setTaskOption(Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption && taskOption) { DARABONBA_PTR_SET_RVALUE(taskOption_, taskOption) };


    // taskScope Field Functions 
    bool hasTaskScope() const { return this->taskScope_ != nullptr;};
    void deleteTaskScope() { this->taskScope_ = nullptr;};
    inline string taskScope() const { DARABONBA_PTR_GET_DEFAULT(taskScope_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setTaskScope(string taskScope) { DARABONBA_PTR_SET_VALUE(taskScope_, taskScope) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfig& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The configurations of the alert rule.
    std::shared_ptr<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfig> alertConfig_ = nullptr;
    // Indicates whether the availability monitoring task is disabled. Valid values:
    // 
    // *   true: The availability monitoring task is disabled.
    // *   false: The availability monitoring task is enabled.
    std::shared_ptr<bool> disabled_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of the application group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the availability monitoring task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ECS instances that are monitored.
    std::shared_ptr<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigInstances> instances_ = nullptr;
    // The name of the availability monitoring task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The optional parameters of the availability monitoring task.
    std::shared_ptr<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigTaskOption> taskOption_ = nullptr;
    // The range of instances that are monitored by the availability monitoring task. Valid values:
    // 
    // *   GROUP: All ECS instances in the application group are monitored.
    // *   GROUP_SPEC_INSTANCE: Specified ECS instances in the application group are monitored.
    std::shared_ptr<string> taskScope_ = nullptr;
    // The task type. Valid values:
    // 
    // *   PING
    // *   TELNET
    // *   HTTP
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
