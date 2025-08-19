// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterTasksResponseBodyTasksError.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
      DARABONBA_PTR_TO_JSON(task_type, taskType_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
      DARABONBA_PTR_FROM_JSON(task_type, taskType_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    DescribeClusterTasksResponseBodyTasks() = default ;
    DescribeClusterTasksResponseBodyTasks(const DescribeClusterTasksResponseBodyTasks &) = default ;
    DescribeClusterTasksResponseBodyTasks(DescribeClusterTasksResponseBodyTasks &&) = default ;
    DescribeClusterTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterTasksResponseBodyTasks() = default ;
    DescribeClusterTasksResponseBodyTasks& operator=(const DescribeClusterTasksResponseBodyTasks &) = default ;
    DescribeClusterTasksResponseBodyTasks& operator=(DescribeClusterTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->created_ != nullptr
        && this->error_ != nullptr && this->state_ != nullptr && this->taskId_ != nullptr && this->taskType_ != nullptr && this->updated_ != nullptr; };
    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClusterTasksResponseBodyTasks& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const Models::DescribeClusterTasksResponseBodyTasksError & error() const { DARABONBA_PTR_GET_CONST(error_, Models::DescribeClusterTasksResponseBodyTasksError) };
    inline Models::DescribeClusterTasksResponseBodyTasksError error() { DARABONBA_PTR_GET(error_, Models::DescribeClusterTasksResponseBodyTasksError) };
    inline DescribeClusterTasksResponseBodyTasks& setError(const Models::DescribeClusterTasksResponseBodyTasksError & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline DescribeClusterTasksResponseBodyTasks& setError(Models::DescribeClusterTasksResponseBodyTasksError && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterTasksResponseBodyTasks& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeClusterTasksResponseBodyTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeClusterTasksResponseBodyTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeClusterTasksResponseBodyTasks& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The time when the task was created.
    std::shared_ptr<string> created_ = nullptr;
    // The error returned for the task.
    std::shared_ptr<Models::DescribeClusterTasksResponseBodyTasksError> error_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> state_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of task.
    std::shared_ptr<string> taskType_ = nullptr;
    // The time when the task was updated.
    std::shared_ptr<string> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
