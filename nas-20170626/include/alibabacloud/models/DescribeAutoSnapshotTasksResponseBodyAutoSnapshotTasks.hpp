// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTTASKSRESPONSEBODYAUTOSNAPSHOTTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTTASKSRESPONSEBODYAUTOSNAPSHOTTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotTask, autoSnapshotTask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotTask, autoSnapshotTask_);
    };
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks() = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks(const DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks &) = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks(DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks &&) = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks() = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks& operator=(const DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks &) = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks& operator=(DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSnapshotTask_ != nullptr; };
    // autoSnapshotTask Field Functions 
    bool hasAutoSnapshotTask() const { return this->autoSnapshotTask_ != nullptr;};
    void deleteAutoSnapshotTask() { this->autoSnapshotTask_ = nullptr;};
    inline const vector<Models::DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask> & autoSnapshotTask() const { DARABONBA_PTR_GET_CONST(autoSnapshotTask_, vector<Models::DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask>) };
    inline vector<Models::DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask> autoSnapshotTask() { DARABONBA_PTR_GET(autoSnapshotTask_, vector<Models::DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask>) };
    inline DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks& setAutoSnapshotTask(const vector<Models::DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask> & autoSnapshotTask) { DARABONBA_PTR_SET_VALUE(autoSnapshotTask_, autoSnapshotTask) };
    inline DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasks& setAutoSnapshotTask(vector<Models::DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask> && autoSnapshotTask) { DARABONBA_PTR_SET_RVALUE(autoSnapshotTask_, autoSnapshotTask) };


  protected:
    std::shared_ptr<vector<Models::DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask>> autoSnapshotTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
