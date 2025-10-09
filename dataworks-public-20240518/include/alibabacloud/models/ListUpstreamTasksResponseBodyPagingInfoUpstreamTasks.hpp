// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPSTREAMTASKSRESPONSEBODYPAGINGINFOUPSTREAMTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTUPSTREAMTASKSRESPONSEBODYPAGINGINFOUPSTREAMTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks& obj) { 
      DARABONBA_PTR_TO_JSON(DependencyType, dependencyType_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(DependencyType, dependencyType_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks() = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks(const ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks &) = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks(ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks &&) = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks() = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks& operator=(const ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks &) = default ;
    ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks& operator=(ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks &&) = default ;
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
    inline ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks& setDependencyType(string dependencyType) { DARABONBA_PTR_SET_VALUE(dependencyType_, dependencyType) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTask & task() const { DARABONBA_PTR_GET_CONST(task_, Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTask) };
    inline Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTask task() { DARABONBA_PTR_GET(task_, Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTask) };
    inline ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks& setTask(const Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTask & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks& setTask(Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTask && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The scheduling dependency type. Valid values:
    // 
    // *   Normal: same-cycle scheduling dependency
    // *   CrossCycle: cross-cycle scheduling dependency
    std::shared_ptr<string> dependencyType_ = nullptr;
    // The information about the task.
    std::shared_ptr<Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasksTask> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
