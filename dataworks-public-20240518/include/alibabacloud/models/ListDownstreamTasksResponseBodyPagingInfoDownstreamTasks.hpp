// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKSRESPONSEBODYPAGINGINFODOWNSTREAMTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKSRESPONSEBODYPAGINGINFODOWNSTREAMTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks& obj) { 
      DARABONBA_PTR_TO_JSON(DependencyType, dependencyType_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(DependencyType, dependencyType_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks() = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks(const ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks &) = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks(ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks &&) = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks() = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks& operator=(const ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks &) = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks& operator=(ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dependencyType_ != nullptr
        && this->task_ != nullptr; };
    // dependencyType Field Functions 
    bool hasDependencyType() const { return this->dependencyType_ != nullptr;};
    void deleteDependencyType() { this->dependencyType_ = nullptr;};
    inline string dependencyType() const { DARABONBA_PTR_GET_DEFAULT(dependencyType_, "") };
    inline ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks& setDependencyType(string dependencyType) { DARABONBA_PTR_SET_VALUE(dependencyType_, dependencyType) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const Models::ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTask & task() const { DARABONBA_PTR_GET_CONST(task_, Models::ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTask) };
    inline Models::ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTask task() { DARABONBA_PTR_GET(task_, Models::ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTask) };
    inline ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks& setTask(const Models::ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTask & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline ListDownstreamTasksResponseBodyPagingInfoDownstreamTasks& setTask(Models::ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTask && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The scheduling dependency type. Valid values:
    // 
    // *   Normal: same-cycle scheduling dependency
    // *   CrossCycle: cross-cycle scheduling dependency
    std::shared_ptr<string> dependencyType_ = nullptr;
    // The information about the task.
    std::shared_ptr<Models::ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTask> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
