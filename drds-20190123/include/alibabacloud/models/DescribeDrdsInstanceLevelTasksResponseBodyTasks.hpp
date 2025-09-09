// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCELEVELTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCELEVELTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsInstanceLevelTasksResponseBodyTasksTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceLevelTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceLevelTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceLevelTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeDrdsInstanceLevelTasksResponseBodyTasks() = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasks(const DescribeDrdsInstanceLevelTasksResponseBodyTasks &) = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasks(DescribeDrdsInstanceLevelTasksResponseBodyTasks &&) = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceLevelTasksResponseBodyTasks() = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasks& operator=(const DescribeDrdsInstanceLevelTasksResponseBodyTasks &) = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasks& operator=(DescribeDrdsInstanceLevelTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->task_ != nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::DescribeDrdsInstanceLevelTasksResponseBodyTasksTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::DescribeDrdsInstanceLevelTasksResponseBodyTasksTask>) };
    inline vector<Models::DescribeDrdsInstanceLevelTasksResponseBodyTasksTask> task() { DARABONBA_PTR_GET(task_, vector<Models::DescribeDrdsInstanceLevelTasksResponseBodyTasksTask>) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasks& setTask(const vector<Models::DescribeDrdsInstanceLevelTasksResponseBodyTasksTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasks& setTask(vector<Models::DescribeDrdsInstanceLevelTasksResponseBodyTasksTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsInstanceLevelTasksResponseBodyTasksTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
