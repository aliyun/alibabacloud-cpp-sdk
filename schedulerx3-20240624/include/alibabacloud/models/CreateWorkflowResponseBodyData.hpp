// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateWorkflowResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    CreateWorkflowResponseBodyData() = default ;
    CreateWorkflowResponseBodyData(const CreateWorkflowResponseBodyData &) = default ;
    CreateWorkflowResponseBodyData(CreateWorkflowResponseBodyData &&) = default ;
    CreateWorkflowResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowResponseBodyData() = default ;
    CreateWorkflowResponseBodyData& operator=(const CreateWorkflowResponseBodyData &) = default ;
    CreateWorkflowResponseBodyData& operator=(CreateWorkflowResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workflowId_ == nullptr; };
    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline CreateWorkflowResponseBodyData& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    std::shared_ptr<int64_t> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
