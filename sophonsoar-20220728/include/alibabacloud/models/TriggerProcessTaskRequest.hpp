// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERPROCESSTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERPROCESSTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class TriggerProcessTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerProcessTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerProcessTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    TriggerProcessTaskRequest() = default ;
    TriggerProcessTaskRequest(const TriggerProcessTaskRequest &) = default ;
    TriggerProcessTaskRequest(TriggerProcessTaskRequest &&) = default ;
    TriggerProcessTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerProcessTaskRequest() = default ;
    TriggerProcessTaskRequest& operator=(const TriggerProcessTaskRequest &) = default ;
    TriggerProcessTaskRequest& operator=(TriggerProcessTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->taskId_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline TriggerProcessTaskRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline TriggerProcessTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The type of the action. Valid values:
    // 
    // *   **remove**: cancels blocking or isolation.
    // *   **retry**: submits the task again.
    // 
    // This parameter is required.
    std::shared_ptr<string> actionType_ = nullptr;
    // The ID of the handling task.
    // 
    // >  You can call the [DescribeProcessTasks](~~DescribeProcessTasks~~) operation to query the IDs of handling tasks.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
