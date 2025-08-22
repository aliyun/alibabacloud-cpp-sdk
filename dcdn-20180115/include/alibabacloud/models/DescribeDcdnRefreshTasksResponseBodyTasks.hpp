// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREFRESHTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREFRESHTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnRefreshTasksResponseBodyTasksTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRefreshTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRefreshTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRefreshTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeDcdnRefreshTasksResponseBodyTasks() = default ;
    DescribeDcdnRefreshTasksResponseBodyTasks(const DescribeDcdnRefreshTasksResponseBodyTasks &) = default ;
    DescribeDcdnRefreshTasksResponseBodyTasks(DescribeDcdnRefreshTasksResponseBodyTasks &&) = default ;
    DescribeDcdnRefreshTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRefreshTasksResponseBodyTasks() = default ;
    DescribeDcdnRefreshTasksResponseBodyTasks& operator=(const DescribeDcdnRefreshTasksResponseBodyTasks &) = default ;
    DescribeDcdnRefreshTasksResponseBodyTasks& operator=(DescribeDcdnRefreshTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->task_ != nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<Models::DescribeDcdnRefreshTasksResponseBodyTasksTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<Models::DescribeDcdnRefreshTasksResponseBodyTasksTask>) };
    inline vector<Models::DescribeDcdnRefreshTasksResponseBodyTasksTask> task() { DARABONBA_PTR_GET(task_, vector<Models::DescribeDcdnRefreshTasksResponseBodyTasksTask>) };
    inline DescribeDcdnRefreshTasksResponseBodyTasks& setTask(const vector<Models::DescribeDcdnRefreshTasksResponseBodyTasksTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeDcdnRefreshTasksResponseBodyTasks& setTask(vector<Models::DescribeDcdnRefreshTasksResponseBodyTasksTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnRefreshTasksResponseBodyTasksTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
