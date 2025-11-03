// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODYTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODYTASKINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataFlowTasksResponseBodyTaskInfoTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowTasksResponseBodyTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowTasksResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowTasksResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeDataFlowTasksResponseBodyTaskInfo() = default ;
    DescribeDataFlowTasksResponseBodyTaskInfo(const DescribeDataFlowTasksResponseBodyTaskInfo &) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfo(DescribeDataFlowTasksResponseBodyTaskInfo &&) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowTasksResponseBodyTaskInfo() = default ;
    DescribeDataFlowTasksResponseBodyTaskInfo& operator=(const DescribeDataFlowTasksResponseBodyTaskInfo &) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfo& operator=(DescribeDataFlowTasksResponseBodyTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->task_ == nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTask>) };
    inline vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTask> task() { DARABONBA_PTR_GET(task_, vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTask>) };
    inline DescribeDataFlowTasksResponseBodyTaskInfo& setTask(const vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeDataFlowTasksResponseBodyTaskInfo& setTask(vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
