// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOUTBOUNDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOUTBOUNDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CreateOutboundTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOutboundTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ani, ani_);
      DARABONBA_PTR_TO_JSON(CallInfos, callInfos_);
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExtAttrs, extAttrs_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOutboundTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ani, ani_);
      DARABONBA_PTR_FROM_JSON(CallInfos, callInfos_);
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExtAttrs, extAttrs_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
      DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateOutboundTaskRequest() = default ;
    CreateOutboundTaskRequest(const CreateOutboundTaskRequest &) = default ;
    CreateOutboundTaskRequest(CreateOutboundTaskRequest &&) = default ;
    CreateOutboundTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOutboundTaskRequest() = default ;
    CreateOutboundTaskRequest& operator=(const CreateOutboundTaskRequest &) = default ;
    CreateOutboundTaskRequest& operator=(CreateOutboundTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ani_ == nullptr
        && return this->callInfos_ == nullptr && return this->departmentId_ == nullptr && return this->description_ == nullptr && return this->endDate_ == nullptr && return this->endTime_ == nullptr
        && return this->extAttrs_ == nullptr && return this->groupName_ == nullptr && return this->instanceId_ == nullptr && return this->model_ == nullptr && return this->retryInterval_ == nullptr
        && return this->retryTime_ == nullptr && return this->skillGroup_ == nullptr && return this->startDate_ == nullptr && return this->startTime_ == nullptr && return this->taskName_ == nullptr
        && return this->taskType_ == nullptr; };
    // ani Field Functions 
    bool hasAni() const { return this->ani_ != nullptr;};
    void deleteAni() { this->ani_ = nullptr;};
    inline string ani() const { DARABONBA_PTR_GET_DEFAULT(ani_, "") };
    inline CreateOutboundTaskRequest& setAni(string ani) { DARABONBA_PTR_SET_VALUE(ani_, ani) };


    // callInfos Field Functions 
    bool hasCallInfos() const { return this->callInfos_ != nullptr;};
    void deleteCallInfos() { this->callInfos_ = nullptr;};
    inline string callInfos() const { DARABONBA_PTR_GET_DEFAULT(callInfos_, "") };
    inline CreateOutboundTaskRequest& setCallInfos(string callInfos) { DARABONBA_PTR_SET_VALUE(callInfos_, callInfos) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline int64_t departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, 0L) };
    inline CreateOutboundTaskRequest& setDepartmentId(int64_t departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOutboundTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline CreateOutboundTaskRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateOutboundTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extAttrs Field Functions 
    bool hasExtAttrs() const { return this->extAttrs_ != nullptr;};
    void deleteExtAttrs() { this->extAttrs_ = nullptr;};
    inline string extAttrs() const { DARABONBA_PTR_GET_DEFAULT(extAttrs_, "") };
    inline CreateOutboundTaskRequest& setExtAttrs(string extAttrs) { DARABONBA_PTR_SET_VALUE(extAttrs_, extAttrs) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateOutboundTaskRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateOutboundTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline int32_t model() const { DARABONBA_PTR_GET_DEFAULT(model_, 0) };
    inline CreateOutboundTaskRequest& setModel(int32_t model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int32_t retryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
    inline CreateOutboundTaskRequest& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // retryTime Field Functions 
    bool hasRetryTime() const { return this->retryTime_ != nullptr;};
    void deleteRetryTime() { this->retryTime_ = nullptr;};
    inline int32_t retryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
    inline CreateOutboundTaskRequest& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


    // skillGroup Field Functions 
    bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
    void deleteSkillGroup() { this->skillGroup_ = nullptr;};
    inline int64_t skillGroup() const { DARABONBA_PTR_GET_DEFAULT(skillGroup_, 0L) };
    inline CreateOutboundTaskRequest& setSkillGroup(int64_t skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline CreateOutboundTaskRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateOutboundTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateOutboundTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline CreateOutboundTaskRequest& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> ani_ = nullptr;
    std::shared_ptr<string> callInfos_ = nullptr;
    std::shared_ptr<int64_t> departmentId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> extAttrs_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> model_ = nullptr;
    std::shared_ptr<int32_t> retryInterval_ = nullptr;
    std::shared_ptr<int32_t> retryTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> skillGroup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
