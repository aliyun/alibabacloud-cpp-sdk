// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODYEXECUTIONSCURRENTTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODYEXECUTIONSCURRENTTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionsResponseBodyExecutionsCurrentTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionsResponseBodyExecutionsCurrentTasks& obj) { 
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionsResponseBodyExecutionsCurrentTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(TaskExecutionId, taskExecutionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    ListExecutionsResponseBodyExecutionsCurrentTasks() = default ;
    ListExecutionsResponseBodyExecutionsCurrentTasks(const ListExecutionsResponseBodyExecutionsCurrentTasks &) = default ;
    ListExecutionsResponseBodyExecutionsCurrentTasks(ListExecutionsResponseBodyExecutionsCurrentTasks &&) = default ;
    ListExecutionsResponseBodyExecutionsCurrentTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionsResponseBodyExecutionsCurrentTasks() = default ;
    ListExecutionsResponseBodyExecutionsCurrentTasks& operator=(const ListExecutionsResponseBodyExecutionsCurrentTasks &) = default ;
    ListExecutionsResponseBodyExecutionsCurrentTasks& operator=(ListExecutionsResponseBodyExecutionsCurrentTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskAction_ == nullptr
        && return this->taskExecutionId_ == nullptr && return this->taskName_ == nullptr; };
    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline ListExecutionsResponseBodyExecutionsCurrentTasks& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskExecutionId Field Functions 
    bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
    void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
    inline string taskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
    inline ListExecutionsResponseBodyExecutionsCurrentTasks& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListExecutionsResponseBodyExecutionsCurrentTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The execution template of the task.
    std::shared_ptr<string> taskAction_ = nullptr;
    // The ID of the task execution.
    std::shared_ptr<string> taskExecutionId_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
