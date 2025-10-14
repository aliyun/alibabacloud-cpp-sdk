// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOSTAVAILABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOSTAVAILABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateHostAvailabilityRequestAlertConfig.hpp>
#include <alibabacloud/models/CreateHostAvailabilityRequestTaskOption.hpp>
#include <vector>
#include <alibabacloud/models/CreateHostAvailabilityRequestAlertConfigEscalationList.hpp>
#include <alibabacloud/models/CreateHostAvailabilityRequestAlertConfigTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateHostAvailabilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHostAvailabilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(TaskOption, taskOption_);
      DARABONBA_PTR_TO_JSON(AlertConfigEscalationList, alertConfigEscalationList_);
      DARABONBA_PTR_TO_JSON(AlertConfigTargetList, alertConfigTargetList_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskScope, taskScope_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHostAvailabilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(TaskOption, taskOption_);
      DARABONBA_PTR_FROM_JSON(AlertConfigEscalationList, alertConfigEscalationList_);
      DARABONBA_PTR_FROM_JSON(AlertConfigTargetList, alertConfigTargetList_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskScope, taskScope_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateHostAvailabilityRequest() = default ;
    CreateHostAvailabilityRequest(const CreateHostAvailabilityRequest &) = default ;
    CreateHostAvailabilityRequest(CreateHostAvailabilityRequest &&) = default ;
    CreateHostAvailabilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHostAvailabilityRequest() = default ;
    CreateHostAvailabilityRequest& operator=(const CreateHostAvailabilityRequest &) = default ;
    CreateHostAvailabilityRequest& operator=(CreateHostAvailabilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && return this->taskOption_ == nullptr && return this->alertConfigEscalationList_ == nullptr && return this->alertConfigTargetList_ == nullptr && return this->groupId_ == nullptr && return this->instanceList_ == nullptr
        && return this->regionId_ == nullptr && return this->taskName_ == nullptr && return this->taskScope_ == nullptr && return this->taskType_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const CreateHostAvailabilityRequestAlertConfig & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, CreateHostAvailabilityRequestAlertConfig) };
    inline CreateHostAvailabilityRequestAlertConfig alertConfig() { DARABONBA_PTR_GET(alertConfig_, CreateHostAvailabilityRequestAlertConfig) };
    inline CreateHostAvailabilityRequest& setAlertConfig(const CreateHostAvailabilityRequestAlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline CreateHostAvailabilityRequest& setAlertConfig(CreateHostAvailabilityRequestAlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // taskOption Field Functions 
    bool hasTaskOption() const { return this->taskOption_ != nullptr;};
    void deleteTaskOption() { this->taskOption_ = nullptr;};
    inline const CreateHostAvailabilityRequestTaskOption & taskOption() const { DARABONBA_PTR_GET_CONST(taskOption_, CreateHostAvailabilityRequestTaskOption) };
    inline CreateHostAvailabilityRequestTaskOption taskOption() { DARABONBA_PTR_GET(taskOption_, CreateHostAvailabilityRequestTaskOption) };
    inline CreateHostAvailabilityRequest& setTaskOption(const CreateHostAvailabilityRequestTaskOption & taskOption) { DARABONBA_PTR_SET_VALUE(taskOption_, taskOption) };
    inline CreateHostAvailabilityRequest& setTaskOption(CreateHostAvailabilityRequestTaskOption && taskOption) { DARABONBA_PTR_SET_RVALUE(taskOption_, taskOption) };


    // alertConfigEscalationList Field Functions 
    bool hasAlertConfigEscalationList() const { return this->alertConfigEscalationList_ != nullptr;};
    void deleteAlertConfigEscalationList() { this->alertConfigEscalationList_ = nullptr;};
    inline const vector<CreateHostAvailabilityRequestAlertConfigEscalationList> & alertConfigEscalationList() const { DARABONBA_PTR_GET_CONST(alertConfigEscalationList_, vector<CreateHostAvailabilityRequestAlertConfigEscalationList>) };
    inline vector<CreateHostAvailabilityRequestAlertConfigEscalationList> alertConfigEscalationList() { DARABONBA_PTR_GET(alertConfigEscalationList_, vector<CreateHostAvailabilityRequestAlertConfigEscalationList>) };
    inline CreateHostAvailabilityRequest& setAlertConfigEscalationList(const vector<CreateHostAvailabilityRequestAlertConfigEscalationList> & alertConfigEscalationList) { DARABONBA_PTR_SET_VALUE(alertConfigEscalationList_, alertConfigEscalationList) };
    inline CreateHostAvailabilityRequest& setAlertConfigEscalationList(vector<CreateHostAvailabilityRequestAlertConfigEscalationList> && alertConfigEscalationList) { DARABONBA_PTR_SET_RVALUE(alertConfigEscalationList_, alertConfigEscalationList) };


    // alertConfigTargetList Field Functions 
    bool hasAlertConfigTargetList() const { return this->alertConfigTargetList_ != nullptr;};
    void deleteAlertConfigTargetList() { this->alertConfigTargetList_ = nullptr;};
    inline const vector<CreateHostAvailabilityRequestAlertConfigTargetList> & alertConfigTargetList() const { DARABONBA_PTR_GET_CONST(alertConfigTargetList_, vector<CreateHostAvailabilityRequestAlertConfigTargetList>) };
    inline vector<CreateHostAvailabilityRequestAlertConfigTargetList> alertConfigTargetList() { DARABONBA_PTR_GET(alertConfigTargetList_, vector<CreateHostAvailabilityRequestAlertConfigTargetList>) };
    inline CreateHostAvailabilityRequest& setAlertConfigTargetList(const vector<CreateHostAvailabilityRequestAlertConfigTargetList> & alertConfigTargetList) { DARABONBA_PTR_SET_VALUE(alertConfigTargetList_, alertConfigTargetList) };
    inline CreateHostAvailabilityRequest& setAlertConfigTargetList(vector<CreateHostAvailabilityRequestAlertConfigTargetList> && alertConfigTargetList) { DARABONBA_PTR_SET_RVALUE(alertConfigTargetList_, alertConfigTargetList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateHostAvailabilityRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<string> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<string>) };
    inline vector<string> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<string>) };
    inline CreateHostAvailabilityRequest& setInstanceList(const vector<string> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline CreateHostAvailabilityRequest& setInstanceList(vector<string> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHostAvailabilityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateHostAvailabilityRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskScope Field Functions 
    bool hasTaskScope() const { return this->taskScope_ != nullptr;};
    void deleteTaskScope() { this->taskScope_ = nullptr;};
    inline string taskScope() const { DARABONBA_PTR_GET_DEFAULT(taskScope_, "") };
    inline CreateHostAvailabilityRequest& setTaskScope(string taskScope) { DARABONBA_PTR_SET_VALUE(taskScope_, taskScope) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateHostAvailabilityRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<CreateHostAvailabilityRequestAlertConfig> alertConfig_ = nullptr;
    std::shared_ptr<CreateHostAvailabilityRequestTaskOption> taskOption_ = nullptr;
    // None
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateHostAvailabilityRequestAlertConfigEscalationList>> alertConfigEscalationList_ = nullptr;
    // The resources for which alerts are triggered.
    std::shared_ptr<vector<CreateHostAvailabilityRequestAlertConfigTargetList>> alertConfigTargetList_ = nullptr;
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ECS instances that are monitored. Valid values of N: 1 to 21.
    // 
    // > This parameter must be specified when `TaskScope` is set to `GROUP_SPEC_INSTANCE`.
    std::shared_ptr<vector<string>> instanceList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the availability monitoring task. The name must be 4 to 100 characters in length, and can contain letters, digits, and underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    // The range of instances that are monitored by the availability monitoring task. Valid values:
    // 
    // *   GROUP: All ECS instances in the application group are monitored.
    // *   GROUP_SPEC_INSTANCE: Specified ECS instances in the application group are monitored. The TaskScope parameter must be used in combination with the InstanceList parameter. The InstanceList parameter specifies the ECS instances to be monitored.
    std::shared_ptr<string> taskScope_ = nullptr;
    // The monitoring type of the availability monitoring task. Valid values:
    // 
    // *   PING
    // *   TELNET
    // *   HTTP
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
