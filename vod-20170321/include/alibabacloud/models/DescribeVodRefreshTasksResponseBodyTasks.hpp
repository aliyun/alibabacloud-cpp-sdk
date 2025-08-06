// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODREFRESHTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODREFRESHTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodRefreshTasksResponseBodyTasksTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodRefreshTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodRefreshTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodRefreshTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeVodRefreshTasksResponseBodyTasks() = default ;
    DescribeVodRefreshTasksResponseBodyTasks(const DescribeVodRefreshTasksResponseBodyTasks &) = default ;
    DescribeVodRefreshTasksResponseBodyTasks(DescribeVodRefreshTasksResponseBodyTasks &&) = default ;
    DescribeVodRefreshTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodRefreshTasksResponseBodyTasks() = default ;
    DescribeVodRefreshTasksResponseBodyTasks& operator=(const DescribeVodRefreshTasksResponseBodyTasks &) = default ;
    DescribeVodRefreshTasksResponseBodyTasks& operator=(DescribeVodRefreshTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->task_ != nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::DescribeVodRefreshTasksResponseBodyTasksTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::DescribeVodRefreshTasksResponseBodyTasksTask>) };
    inline vector<Models::DescribeVodRefreshTasksResponseBodyTasksTask> task() { DARABONBA_PTR_GET(task_, vector<Models::DescribeVodRefreshTasksResponseBodyTasksTask>) };
    inline DescribeVodRefreshTasksResponseBodyTasks& setTask(const vector<Models::DescribeVodRefreshTasksResponseBodyTasksTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeVodRefreshTasksResponseBodyTasks& setTask(vector<Models::DescribeVodRefreshTasksResponseBodyTasksTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodRefreshTasksResponseBodyTasksTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
