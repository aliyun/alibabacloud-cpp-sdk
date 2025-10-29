// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERSCHEDULERTASKINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERSCHEDULERTASKINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TriggerSchedulerTaskInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerSchedulerTaskInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TriggerTime, triggerTime_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerSchedulerTaskInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TriggerTime, triggerTime_);
    };
    TriggerSchedulerTaskInstanceRequest() = default ;
    TriggerSchedulerTaskInstanceRequest(const TriggerSchedulerTaskInstanceRequest &) = default ;
    TriggerSchedulerTaskInstanceRequest(TriggerSchedulerTaskInstanceRequest &&) = default ;
    TriggerSchedulerTaskInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerSchedulerTaskInstanceRequest() = default ;
    TriggerSchedulerTaskInstanceRequest& operator=(const TriggerSchedulerTaskInstanceRequest &) = default ;
    TriggerSchedulerTaskInstanceRequest& operator=(TriggerSchedulerTaskInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envType_ == nullptr
        && return this->taskId_ == nullptr && return this->triggerTime_ == nullptr; };
    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline TriggerSchedulerTaskInstanceRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline TriggerSchedulerTaskInstanceRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // triggerTime Field Functions 
    bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
    void deleteTriggerTime() { this->triggerTime_ = nullptr;};
    inline int64_t triggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, 0L) };
    inline TriggerSchedulerTaskInstanceRequest& setTriggerTime(int64_t triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


  protected:
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> envType_ = nullptr;
    // The task ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The time defined by the HTTP Trigger node. This value is a UNIX timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> triggerTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
