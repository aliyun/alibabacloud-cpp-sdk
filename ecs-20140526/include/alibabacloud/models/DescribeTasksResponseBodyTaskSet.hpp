// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYTASKSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYTASKSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTasksResponseBodyTaskSetTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTasksResponseBodyTaskSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBodyTaskSet& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBodyTaskSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeTasksResponseBodyTaskSet() = default ;
    DescribeTasksResponseBodyTaskSet(const DescribeTasksResponseBodyTaskSet &) = default ;
    DescribeTasksResponseBodyTaskSet(DescribeTasksResponseBodyTaskSet &&) = default ;
    DescribeTasksResponseBodyTaskSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBodyTaskSet() = default ;
    DescribeTasksResponseBodyTaskSet& operator=(const DescribeTasksResponseBodyTaskSet &) = default ;
    DescribeTasksResponseBodyTaskSet& operator=(DescribeTasksResponseBodyTaskSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->task_ != nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::DescribeTasksResponseBodyTaskSetTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::DescribeTasksResponseBodyTaskSetTask>) };
    inline vector<Models::DescribeTasksResponseBodyTaskSetTask> task() { DARABONBA_PTR_GET(task_, vector<Models::DescribeTasksResponseBodyTaskSetTask>) };
    inline DescribeTasksResponseBodyTaskSet& setTask(const vector<Models::DescribeTasksResponseBodyTaskSetTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeTasksResponseBodyTaskSet& setTask(vector<Models::DescribeTasksResponseBodyTaskSetTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::DescribeTasksResponseBodyTaskSetTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
