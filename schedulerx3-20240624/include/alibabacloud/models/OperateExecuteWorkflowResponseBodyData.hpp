// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEEXECUTEWORKFLOWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_OPERATEEXECUTEWORKFLOWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateExecuteWorkflowResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateExecuteWorkflowResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WorkflowExecutionId, workflowExecutionId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateExecuteWorkflowResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkflowExecutionId, workflowExecutionId_);
    };
    OperateExecuteWorkflowResponseBodyData() = default ;
    OperateExecuteWorkflowResponseBodyData(const OperateExecuteWorkflowResponseBodyData &) = default ;
    OperateExecuteWorkflowResponseBodyData(OperateExecuteWorkflowResponseBodyData &&) = default ;
    OperateExecuteWorkflowResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateExecuteWorkflowResponseBodyData() = default ;
    OperateExecuteWorkflowResponseBodyData& operator=(const OperateExecuteWorkflowResponseBodyData &) = default ;
    OperateExecuteWorkflowResponseBodyData& operator=(OperateExecuteWorkflowResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workflowExecutionId_ == nullptr; };
    // workflowExecutionId Field Functions 
    bool hasWorkflowExecutionId() const { return this->workflowExecutionId_ != nullptr;};
    void deleteWorkflowExecutionId() { this->workflowExecutionId_ = nullptr;};
    inline string workflowExecutionId() const { DARABONBA_PTR_GET_DEFAULT(workflowExecutionId_, "") };
    inline OperateExecuteWorkflowResponseBodyData& setWorkflowExecutionId(string workflowExecutionId) { DARABONBA_PTR_SET_VALUE(workflowExecutionId_, workflowExecutionId) };


  protected:
    std::shared_ptr<string> workflowExecutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
