// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRefreshTasksResponseBodyTasksTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeRefreshTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefreshTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefreshTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeRefreshTasksResponseBodyTasks() = default ;
    DescribeRefreshTasksResponseBodyTasks(const DescribeRefreshTasksResponseBodyTasks &) = default ;
    DescribeRefreshTasksResponseBodyTasks(DescribeRefreshTasksResponseBodyTasks &&) = default ;
    DescribeRefreshTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefreshTasksResponseBodyTasks() = default ;
    DescribeRefreshTasksResponseBodyTasks& operator=(const DescribeRefreshTasksResponseBodyTasks &) = default ;
    DescribeRefreshTasksResponseBodyTasks& operator=(DescribeRefreshTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->task_ != nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::DescribeRefreshTasksResponseBodyTasksTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::DescribeRefreshTasksResponseBodyTasksTask>) };
    inline vector<Models::DescribeRefreshTasksResponseBodyTasksTask> task() { DARABONBA_PTR_GET(task_, vector<Models::DescribeRefreshTasksResponseBodyTasksTask>) };
    inline DescribeRefreshTasksResponseBodyTasks& setTask(const vector<Models::DescribeRefreshTasksResponseBodyTasksTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeRefreshTasksResponseBodyTasks& setTask(vector<Models::DescribeRefreshTasksResponseBodyTasksTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::DescribeRefreshTasksResponseBodyTasksTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
