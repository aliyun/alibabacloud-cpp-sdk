// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTasksResponseBodyTasksTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeTasksResponseBodyTasks() = default ;
    DescribeTasksResponseBodyTasks(const DescribeTasksResponseBodyTasks &) = default ;
    DescribeTasksResponseBodyTasks(DescribeTasksResponseBodyTasks &&) = default ;
    DescribeTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBodyTasks() = default ;
    DescribeTasksResponseBodyTasks& operator=(const DescribeTasksResponseBodyTasks &) = default ;
    DescribeTasksResponseBodyTasks& operator=(DescribeTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->task_ == nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::DescribeTasksResponseBodyTasksTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::DescribeTasksResponseBodyTasksTask>) };
    inline vector<Models::DescribeTasksResponseBodyTasksTask> task() { DARABONBA_PTR_GET(task_, vector<Models::DescribeTasksResponseBodyTasksTask>) };
    inline DescribeTasksResponseBodyTasks& setTask(const vector<Models::DescribeTasksResponseBodyTasksTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeTasksResponseBodyTasks& setTask(vector<Models::DescribeTasksResponseBodyTasksTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::DescribeTasksResponseBodyTasksTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
