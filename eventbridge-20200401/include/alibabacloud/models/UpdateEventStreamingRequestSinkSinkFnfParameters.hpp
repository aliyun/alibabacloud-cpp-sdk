// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKFNFPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKFNFPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFnfParametersFlowName.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFnfParametersInput.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkFnfParametersRoleName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkFnfParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkFnfParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkFnfParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    UpdateEventStreamingRequestSinkSinkFnfParameters() = default ;
    UpdateEventStreamingRequestSinkSinkFnfParameters(const UpdateEventStreamingRequestSinkSinkFnfParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkFnfParameters(UpdateEventStreamingRequestSinkSinkFnfParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkFnfParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkFnfParameters() = default ;
    UpdateEventStreamingRequestSinkSinkFnfParameters& operator=(const UpdateEventStreamingRequestSinkSinkFnfParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkFnfParameters& operator=(UpdateEventStreamingRequestSinkSinkFnfParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionName_ != nullptr
        && this->flowName_ != nullptr && this->input_ != nullptr && this->roleName_ != nullptr; };
    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName & executionName() const { DARABONBA_PTR_GET_CONST(executionName_, Models::UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName) };
    inline Models::UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName executionName() { DARABONBA_PTR_GET(executionName_, Models::UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName) };
    inline UpdateEventStreamingRequestSinkSinkFnfParameters& setExecutionName(const Models::UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName & executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };
    inline UpdateEventStreamingRequestSinkSinkFnfParameters& setExecutionName(Models::UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName && executionName) { DARABONBA_PTR_SET_RVALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFnfParametersFlowName & flowName() const { DARABONBA_PTR_GET_CONST(flowName_, Models::UpdateEventStreamingRequestSinkSinkFnfParametersFlowName) };
    inline Models::UpdateEventStreamingRequestSinkSinkFnfParametersFlowName flowName() { DARABONBA_PTR_GET(flowName_, Models::UpdateEventStreamingRequestSinkSinkFnfParametersFlowName) };
    inline UpdateEventStreamingRequestSinkSinkFnfParameters& setFlowName(const Models::UpdateEventStreamingRequestSinkSinkFnfParametersFlowName & flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };
    inline UpdateEventStreamingRequestSinkSinkFnfParameters& setFlowName(Models::UpdateEventStreamingRequestSinkSinkFnfParametersFlowName && flowName) { DARABONBA_PTR_SET_RVALUE(flowName_, flowName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFnfParametersInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::UpdateEventStreamingRequestSinkSinkFnfParametersInput) };
    inline Models::UpdateEventStreamingRequestSinkSinkFnfParametersInput input() { DARABONBA_PTR_GET(input_, Models::UpdateEventStreamingRequestSinkSinkFnfParametersInput) };
    inline UpdateEventStreamingRequestSinkSinkFnfParameters& setInput(const Models::UpdateEventStreamingRequestSinkSinkFnfParametersInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline UpdateEventStreamingRequestSinkSinkFnfParameters& setInput(Models::UpdateEventStreamingRequestSinkSinkFnfParametersInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkFnfParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::UpdateEventStreamingRequestSinkSinkFnfParametersRoleName) };
    inline Models::UpdateEventStreamingRequestSinkSinkFnfParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::UpdateEventStreamingRequestSinkSinkFnfParametersRoleName) };
    inline UpdateEventStreamingRequestSinkSinkFnfParameters& setRoleName(const Models::UpdateEventStreamingRequestSinkSinkFnfParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline UpdateEventStreamingRequestSinkSinkFnfParameters& setRoleName(Models::UpdateEventStreamingRequestSinkSinkFnfParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


  protected:
    // The execution name.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFnfParametersExecutionName> executionName_ = nullptr;
    // The flow name.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFnfParametersFlowName> flowName_ = nullptr;
    // The input information of the execution.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFnfParametersInput> input_ = nullptr;
    // The role name.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkFnfParametersRoleName> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
