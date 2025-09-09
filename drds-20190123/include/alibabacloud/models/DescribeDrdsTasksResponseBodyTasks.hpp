// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsTasksResponseBodyTasksTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeDrdsTasksResponseBodyTasks() = default ;
    DescribeDrdsTasksResponseBodyTasks(const DescribeDrdsTasksResponseBodyTasks &) = default ;
    DescribeDrdsTasksResponseBodyTasks(DescribeDrdsTasksResponseBodyTasks &&) = default ;
    DescribeDrdsTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsTasksResponseBodyTasks() = default ;
    DescribeDrdsTasksResponseBodyTasks& operator=(const DescribeDrdsTasksResponseBodyTasks &) = default ;
    DescribeDrdsTasksResponseBodyTasks& operator=(DescribeDrdsTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->task_ != nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::DescribeDrdsTasksResponseBodyTasksTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::DescribeDrdsTasksResponseBodyTasksTask>) };
    inline vector<Models::DescribeDrdsTasksResponseBodyTasksTask> task() { DARABONBA_PTR_GET(task_, vector<Models::DescribeDrdsTasksResponseBodyTasksTask>) };
    inline DescribeDrdsTasksResponseBodyTasks& setTask(const vector<Models::DescribeDrdsTasksResponseBodyTasksTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeDrdsTasksResponseBodyTasks& setTask(vector<Models::DescribeDrdsTasksResponseBodyTasksTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsTasksResponseBodyTasksTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
