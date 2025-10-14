// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTAVAILABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTAVAILABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyHostAvailabilityRequestAlertConfig.hpp>
#include <alibabacloud/models/ModifyHostAvailabilityRequestTaskOption.hpp>
#include <vector>
#include <alibabacloud/models/ModifyHostAvailabilityRequestAlertConfigEscalationList.hpp>
#include <alibabacloud/models/ModifyHostAvailabilityRequestAlertConfigTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHostAvailabilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostAvailabilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(TaskOption, taskOption_);
      DARABONBA_PTR_TO_JSON(AlertConfigEscalationList, alertConfigEscalationList_);
      DARABONBA_PTR_TO_JSON(AlertConfigTargetList, alertConfigTargetList_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskScope, taskScope_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostAvailabilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(TaskOption, taskOption_);
      DARABONBA_PTR_FROM_JSON(AlertConfigEscalationList, alertConfigEscalationList_);
      DARABONBA_PTR_FROM_JSON(AlertConfigTargetList, alertConfigTargetList_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskScope, taskScope_);
    };
    ModifyHostAvailabilityRequest() = default ;
    ModifyHostAvailabilityRequest(const ModifyHostAvailabilityRequest &) = default ;
    ModifyHostAvailabilityRequest(ModifyHostAvailabilityRequest &&) = default ;
    ModifyHostAvailabilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostAvailabilityRequest() = default ;
    ModifyHostAvailabilityRequest& operator=(const ModifyHostAvailabilityRequest &) = default ;
    ModifyHostAvailabilityRequest& operator=(ModifyHostAvailabilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && return this->taskOption_ == nullptr && return this->alertConfigEscalationList_ == nullptr && return this->alertConfigTargetList_ == nullptr && return this->groupId_ == nullptr && return this->id_ == nullptr
        && return this->instanceList_ == nullptr && return this->regionId_ == nullptr && return this->taskName_ == nullptr && return this->taskScope_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const ModifyHostAvailabilityRequestAlertConfig & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, ModifyHostAvailabilityRequestAlertConfig) };
    inline ModifyHostAvailabilityRequestAlertConfig alertConfig() { DARABONBA_PTR_GET(alertConfig_, ModifyHostAvailabilityRequestAlertConfig) };
    inline ModifyHostAvailabilityRequest& setAlertConfig(const ModifyHostAvailabilityRequestAlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline ModifyHostAvailabilityRequest& setAlertConfig(ModifyHostAvailabilityRequestAlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // taskOption Field Functions 
    bool hasTaskOption() const { return this->taskOption_ != nullptr;};
    void deleteTaskOption() { this->taskOption_ = nullptr;};
    inline const ModifyHostAvailabilityRequestTaskOption & taskOption() const { DARABONBA_PTR_GET_CONST(taskOption_, ModifyHostAvailabilityRequestTaskOption) };
    inline ModifyHostAvailabilityRequestTaskOption taskOption() { DARABONBA_PTR_GET(taskOption_, ModifyHostAvailabilityRequestTaskOption) };
    inline ModifyHostAvailabilityRequest& setTaskOption(const ModifyHostAvailabilityRequestTaskOption & taskOption) { DARABONBA_PTR_SET_VALUE(taskOption_, taskOption) };
    inline ModifyHostAvailabilityRequest& setTaskOption(ModifyHostAvailabilityRequestTaskOption && taskOption) { DARABONBA_PTR_SET_RVALUE(taskOption_, taskOption) };


    // alertConfigEscalationList Field Functions 
    bool hasAlertConfigEscalationList() const { return this->alertConfigEscalationList_ != nullptr;};
    void deleteAlertConfigEscalationList() { this->alertConfigEscalationList_ = nullptr;};
    inline const vector<ModifyHostAvailabilityRequestAlertConfigEscalationList> & alertConfigEscalationList() const { DARABONBA_PTR_GET_CONST(alertConfigEscalationList_, vector<ModifyHostAvailabilityRequestAlertConfigEscalationList>) };
    inline vector<ModifyHostAvailabilityRequestAlertConfigEscalationList> alertConfigEscalationList() { DARABONBA_PTR_GET(alertConfigEscalationList_, vector<ModifyHostAvailabilityRequestAlertConfigEscalationList>) };
    inline ModifyHostAvailabilityRequest& setAlertConfigEscalationList(const vector<ModifyHostAvailabilityRequestAlertConfigEscalationList> & alertConfigEscalationList) { DARABONBA_PTR_SET_VALUE(alertConfigEscalationList_, alertConfigEscalationList) };
    inline ModifyHostAvailabilityRequest& setAlertConfigEscalationList(vector<ModifyHostAvailabilityRequestAlertConfigEscalationList> && alertConfigEscalationList) { DARABONBA_PTR_SET_RVALUE(alertConfigEscalationList_, alertConfigEscalationList) };


    // alertConfigTargetList Field Functions 
    bool hasAlertConfigTargetList() const { return this->alertConfigTargetList_ != nullptr;};
    void deleteAlertConfigTargetList() { this->alertConfigTargetList_ = nullptr;};
    inline const vector<ModifyHostAvailabilityRequestAlertConfigTargetList> & alertConfigTargetList() const { DARABONBA_PTR_GET_CONST(alertConfigTargetList_, vector<ModifyHostAvailabilityRequestAlertConfigTargetList>) };
    inline vector<ModifyHostAvailabilityRequestAlertConfigTargetList> alertConfigTargetList() { DARABONBA_PTR_GET(alertConfigTargetList_, vector<ModifyHostAvailabilityRequestAlertConfigTargetList>) };
    inline ModifyHostAvailabilityRequest& setAlertConfigTargetList(const vector<ModifyHostAvailabilityRequestAlertConfigTargetList> & alertConfigTargetList) { DARABONBA_PTR_SET_VALUE(alertConfigTargetList_, alertConfigTargetList) };
    inline ModifyHostAvailabilityRequest& setAlertConfigTargetList(vector<ModifyHostAvailabilityRequestAlertConfigTargetList> && alertConfigTargetList) { DARABONBA_PTR_SET_RVALUE(alertConfigTargetList_, alertConfigTargetList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ModifyHostAvailabilityRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyHostAvailabilityRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<string> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<string>) };
    inline vector<string> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<string>) };
    inline ModifyHostAvailabilityRequest& setInstanceList(const vector<string> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ModifyHostAvailabilityRequest& setInstanceList(vector<string> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHostAvailabilityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ModifyHostAvailabilityRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskScope Field Functions 
    bool hasTaskScope() const { return this->taskScope_ != nullptr;};
    void deleteTaskScope() { this->taskScope_ = nullptr;};
    inline string taskScope() const { DARABONBA_PTR_GET_DEFAULT(taskScope_, "") };
    inline ModifyHostAvailabilityRequest& setTaskScope(string taskScope) { DARABONBA_PTR_SET_VALUE(taskScope_, taskScope) };


  protected:
    std::shared_ptr<ModifyHostAvailabilityRequestAlertConfig> alertConfig_ = nullptr;
    std::shared_ptr<ModifyHostAvailabilityRequestTaskOption> taskOption_ = nullptr;
    // The alert configurations.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ModifyHostAvailabilityRequestAlertConfigEscalationList>> alertConfigEscalationList_ = nullptr;
    // The information about the resources for which alerts are triggered.
    std::shared_ptr<vector<ModifyHostAvailabilityRequestAlertConfigTargetList>> alertConfigTargetList_ = nullptr;
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the availability monitoring task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ECS instances that are monitored. Valid values of N: 1 to 21.
    // 
    // > This parameter must be specified when `TaskScope` is set to `GROUP_SPEC_INSTANCE`.
    std::shared_ptr<vector<string>> instanceList_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the availability monitoring task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    // The range of instances that are monitored by the availability monitoring task. Valid values:
    // 
    // *   GROUP: All ECS instances in the application group are monitored.
    // *   GROUP_SPEC_INSTANCE: Specified ECS instances in the application group are monitored. The TaskScope parameter must be used in combination with the InstanceList parameter. The InstanceList parameter specifies the ECS instances to be monitored.
    std::shared_ptr<string> taskScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
