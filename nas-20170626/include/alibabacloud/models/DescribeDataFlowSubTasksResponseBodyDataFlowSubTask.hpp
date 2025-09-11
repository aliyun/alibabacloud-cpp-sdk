// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSRESPONSEBODYDATAFLOWSUBTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSRESPONSEBODYDATAFLOWSUBTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowSubTasksResponseBodyDataFlowSubTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowSubTasksResponseBodyDataFlowSubTask& obj) { 
      DARABONBA_PTR_TO_JSON(DataFlowSubTask, dataFlowSubTask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowSubTasksResponseBodyDataFlowSubTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DataFlowSubTask, dataFlowSubTask_);
    };
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTask() = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTask(const DescribeDataFlowSubTasksResponseBodyDataFlowSubTask &) = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTask(DescribeDataFlowSubTasksResponseBodyDataFlowSubTask &&) = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowSubTasksResponseBodyDataFlowSubTask() = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTask& operator=(const DescribeDataFlowSubTasksResponseBodyDataFlowSubTask &) = default ;
    DescribeDataFlowSubTasksResponseBodyDataFlowSubTask& operator=(DescribeDataFlowSubTasksResponseBodyDataFlowSubTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataFlowSubTask_ != nullptr; };
    // dataFlowSubTask Field Functions 
    bool hasDataFlowSubTask() const { return this->dataFlowSubTask_ != nullptr;};
    void deleteDataFlowSubTask() { this->dataFlowSubTask_ = nullptr;};
    inline const vector<Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask> & dataFlowSubTask() const { DARABONBA_PTR_GET_CONST(dataFlowSubTask_, vector<Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask>) };
    inline vector<Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask> dataFlowSubTask() { DARABONBA_PTR_GET(dataFlowSubTask_, vector<Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask>) };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTask& setDataFlowSubTask(const vector<Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask> & dataFlowSubTask) { DARABONBA_PTR_SET_VALUE(dataFlowSubTask_, dataFlowSubTask) };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTask& setDataFlowSubTask(vector<Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask> && dataFlowSubTask) { DARABONBA_PTR_SET_RVALUE(dataFlowSubTask_, dataFlowSubTask) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataFlowSubTasksResponseBodyDataFlowSubTaskDataFlowSubTask>> dataFlowSubTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
