// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSINTASKFLOWRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSINTASKFLOWRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTasksInTaskFlowResponseBodyTasksTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTasksInTaskFlowResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksInTaskFlowResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksInTaskFlowResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    ListTasksInTaskFlowResponseBodyTasks() = default ;
    ListTasksInTaskFlowResponseBodyTasks(const ListTasksInTaskFlowResponseBodyTasks &) = default ;
    ListTasksInTaskFlowResponseBodyTasks(ListTasksInTaskFlowResponseBodyTasks &&) = default ;
    ListTasksInTaskFlowResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksInTaskFlowResponseBodyTasks() = default ;
    ListTasksInTaskFlowResponseBodyTasks& operator=(const ListTasksInTaskFlowResponseBodyTasks &) = default ;
    ListTasksInTaskFlowResponseBodyTasks& operator=(ListTasksInTaskFlowResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->task_ != nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::ListTasksInTaskFlowResponseBodyTasksTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::ListTasksInTaskFlowResponseBodyTasksTask>) };
    inline vector<Models::ListTasksInTaskFlowResponseBodyTasksTask> task() { DARABONBA_PTR_GET(task_, vector<Models::ListTasksInTaskFlowResponseBodyTasksTask>) };
    inline ListTasksInTaskFlowResponseBodyTasks& setTask(const vector<Models::ListTasksInTaskFlowResponseBodyTasksTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline ListTasksInTaskFlowResponseBodyTasks& setTask(vector<Models::ListTasksInTaskFlowResponseBodyTasksTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::ListTasksInTaskFlowResponseBodyTasksTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
