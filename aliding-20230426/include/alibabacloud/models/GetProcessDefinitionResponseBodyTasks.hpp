// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProcessDefinitionResponseBodyTasksActivity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetProcessDefinitionResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProcessDefinitionResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ActionerId, actionerId_);
      DARABONBA_PTR_TO_JSON(Activity, activity_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProcessDefinitionResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionerId, actionerId_);
      DARABONBA_PTR_FROM_JSON(Activity, activity_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetProcessDefinitionResponseBodyTasks() = default ;
    GetProcessDefinitionResponseBodyTasks(const GetProcessDefinitionResponseBodyTasks &) = default ;
    GetProcessDefinitionResponseBodyTasks(GetProcessDefinitionResponseBodyTasks &&) = default ;
    GetProcessDefinitionResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProcessDefinitionResponseBodyTasks() = default ;
    GetProcessDefinitionResponseBodyTasks& operator=(const GetProcessDefinitionResponseBodyTasks &) = default ;
    GetProcessDefinitionResponseBodyTasks& operator=(GetProcessDefinitionResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionerId_ == nullptr
        && return this->activity_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // actionerId Field Functions 
    bool hasActionerId() const { return this->actionerId_ != nullptr;};
    void deleteActionerId() { this->actionerId_ = nullptr;};
    inline string actionerId() const { DARABONBA_PTR_GET_DEFAULT(actionerId_, "") };
    inline GetProcessDefinitionResponseBodyTasks& setActionerId(string actionerId) { DARABONBA_PTR_SET_VALUE(actionerId_, actionerId) };


    // activity Field Functions 
    bool hasActivity() const { return this->activity_ != nullptr;};
    void deleteActivity() { this->activity_ = nullptr;};
    inline const Models::GetProcessDefinitionResponseBodyTasksActivity & activity() const { DARABONBA_PTR_GET_CONST(activity_, Models::GetProcessDefinitionResponseBodyTasksActivity) };
    inline Models::GetProcessDefinitionResponseBodyTasksActivity activity() { DARABONBA_PTR_GET(activity_, Models::GetProcessDefinitionResponseBodyTasksActivity) };
    inline GetProcessDefinitionResponseBodyTasks& setActivity(const Models::GetProcessDefinitionResponseBodyTasksActivity & activity) { DARABONBA_PTR_SET_VALUE(activity_, activity) };
    inline GetProcessDefinitionResponseBodyTasks& setActivity(Models::GetProcessDefinitionResponseBodyTasksActivity && activity) { DARABONBA_PTR_SET_RVALUE(activity_, activity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetProcessDefinitionResponseBodyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetProcessDefinitionResponseBodyTasks& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> actionerId_ = nullptr;
    std::shared_ptr<Models::GetProcessDefinitionResponseBodyTasksActivity> activity_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
