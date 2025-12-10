// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLETASK_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLETASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LifecycleRule.hpp>
#include <alibabacloud/models/WorkflowInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class LifecycleTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecycleTask& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(LifecycleRule, lifecycleRule_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WorkflowInstance, workflowInstance_);
    };
    friend void from_json(const Darabonba::Json& j, LifecycleTask& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(LifecycleRule, lifecycleRule_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstance, workflowInstance_);
    };
    LifecycleTask() = default ;
    LifecycleTask(const LifecycleTask &) = default ;
    LifecycleTask(LifecycleTask &&) = default ;
    LifecycleTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecycleTask() = default ;
    LifecycleTask& operator=(const LifecycleTask &) = default ;
    LifecycleTask& operator=(LifecycleTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->lifecycleRule_ == nullptr && return this->name_ == nullptr && return this->workflowInstance_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline LifecycleTask& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // lifecycleRule Field Functions 
    bool hasLifecycleRule() const { return this->lifecycleRule_ != nullptr;};
    void deleteLifecycleRule() { this->lifecycleRule_ = nullptr;};
    inline const LifecycleRule & lifecycleRule() const { DARABONBA_PTR_GET_CONST(lifecycleRule_, LifecycleRule) };
    inline LifecycleRule lifecycleRule() { DARABONBA_PTR_GET(lifecycleRule_, LifecycleRule) };
    inline LifecycleTask& setLifecycleRule(const LifecycleRule & lifecycleRule) { DARABONBA_PTR_SET_VALUE(lifecycleRule_, lifecycleRule) };
    inline LifecycleTask& setLifecycleRule(LifecycleRule && lifecycleRule) { DARABONBA_PTR_SET_RVALUE(lifecycleRule_, lifecycleRule) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LifecycleTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // workflowInstance Field Functions 
    bool hasWorkflowInstance() const { return this->workflowInstance_ != nullptr;};
    void deleteWorkflowInstance() { this->workflowInstance_ = nullptr;};
    inline const WorkflowInstance & workflowInstance() const { DARABONBA_PTR_GET_CONST(workflowInstance_, WorkflowInstance) };
    inline WorkflowInstance workflowInstance() { DARABONBA_PTR_GET(workflowInstance_, WorkflowInstance) };
    inline LifecycleTask& setWorkflowInstance(const WorkflowInstance & workflowInstance) { DARABONBA_PTR_SET_VALUE(workflowInstance_, workflowInstance) };
    inline LifecycleTask& setWorkflowInstance(WorkflowInstance && workflowInstance) { DARABONBA_PTR_SET_RVALUE(workflowInstance_, workflowInstance) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<LifecycleRule> lifecycleRule_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<WorkflowInstance> workflowInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
