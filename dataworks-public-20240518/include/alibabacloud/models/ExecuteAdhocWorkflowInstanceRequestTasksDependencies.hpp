// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSDEPENDENCIES_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSDEPENDENCIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecuteAdhocWorkflowInstanceRequestTasksDependencies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdhocWorkflowInstanceRequestTasksDependencies& obj) { 
      DARABONBA_PTR_TO_JSON(UpstreamOutput, upstreamOutput_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdhocWorkflowInstanceRequestTasksDependencies& obj) { 
      DARABONBA_PTR_FROM_JSON(UpstreamOutput, upstreamOutput_);
    };
    ExecuteAdhocWorkflowInstanceRequestTasksDependencies() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksDependencies(const ExecuteAdhocWorkflowInstanceRequestTasksDependencies &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksDependencies(ExecuteAdhocWorkflowInstanceRequestTasksDependencies &&) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksDependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdhocWorkflowInstanceRequestTasksDependencies() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksDependencies& operator=(const ExecuteAdhocWorkflowInstanceRequestTasksDependencies &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksDependencies& operator=(ExecuteAdhocWorkflowInstanceRequestTasksDependencies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->upstreamOutput_ != nullptr; };
    // upstreamOutput Field Functions 
    bool hasUpstreamOutput() const { return this->upstreamOutput_ != nullptr;};
    void deleteUpstreamOutput() { this->upstreamOutput_ = nullptr;};
    inline string upstreamOutput() const { DARABONBA_PTR_GET_DEFAULT(upstreamOutput_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasksDependencies& setUpstreamOutput(string upstreamOutput) { DARABONBA_PTR_SET_VALUE(upstreamOutput_, upstreamOutput) };


  protected:
    // The identifier of the output of the ancestor task.
    std::shared_ptr<string> upstreamOutput_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
