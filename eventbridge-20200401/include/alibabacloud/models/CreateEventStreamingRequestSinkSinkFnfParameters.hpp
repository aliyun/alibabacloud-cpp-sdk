// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKFNFPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKFNFPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFnfParametersExecutionName.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFnfParametersFlowName.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFnfParametersInput.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkFnfParametersRoleName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkFnfParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkFnfParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkFnfParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    CreateEventStreamingRequestSinkSinkFnfParameters() = default ;
    CreateEventStreamingRequestSinkSinkFnfParameters(const CreateEventStreamingRequestSinkSinkFnfParameters &) = default ;
    CreateEventStreamingRequestSinkSinkFnfParameters(CreateEventStreamingRequestSinkSinkFnfParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkFnfParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkFnfParameters() = default ;
    CreateEventStreamingRequestSinkSinkFnfParameters& operator=(const CreateEventStreamingRequestSinkSinkFnfParameters &) = default ;
    CreateEventStreamingRequestSinkSinkFnfParameters& operator=(CreateEventStreamingRequestSinkSinkFnfParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionName_ != nullptr
        && this->flowName_ != nullptr && this->input_ != nullptr && this->roleName_ != nullptr; };
    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFnfParametersExecutionName & executionName() const { DARABONBA_PTR_GET_CONST(executionName_, Models::CreateEventStreamingRequestSinkSinkFnfParametersExecutionName) };
    inline Models::CreateEventStreamingRequestSinkSinkFnfParametersExecutionName executionName() { DARABONBA_PTR_GET(executionName_, Models::CreateEventStreamingRequestSinkSinkFnfParametersExecutionName) };
    inline CreateEventStreamingRequestSinkSinkFnfParameters& setExecutionName(const Models::CreateEventStreamingRequestSinkSinkFnfParametersExecutionName & executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };
    inline CreateEventStreamingRequestSinkSinkFnfParameters& setExecutionName(Models::CreateEventStreamingRequestSinkSinkFnfParametersExecutionName && executionName) { DARABONBA_PTR_SET_RVALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFnfParametersFlowName & flowName() const { DARABONBA_PTR_GET_CONST(flowName_, Models::CreateEventStreamingRequestSinkSinkFnfParametersFlowName) };
    inline Models::CreateEventStreamingRequestSinkSinkFnfParametersFlowName flowName() { DARABONBA_PTR_GET(flowName_, Models::CreateEventStreamingRequestSinkSinkFnfParametersFlowName) };
    inline CreateEventStreamingRequestSinkSinkFnfParameters& setFlowName(const Models::CreateEventStreamingRequestSinkSinkFnfParametersFlowName & flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };
    inline CreateEventStreamingRequestSinkSinkFnfParameters& setFlowName(Models::CreateEventStreamingRequestSinkSinkFnfParametersFlowName && flowName) { DARABONBA_PTR_SET_RVALUE(flowName_, flowName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFnfParametersInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::CreateEventStreamingRequestSinkSinkFnfParametersInput) };
    inline Models::CreateEventStreamingRequestSinkSinkFnfParametersInput input() { DARABONBA_PTR_GET(input_, Models::CreateEventStreamingRequestSinkSinkFnfParametersInput) };
    inline CreateEventStreamingRequestSinkSinkFnfParameters& setInput(const Models::CreateEventStreamingRequestSinkSinkFnfParametersInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateEventStreamingRequestSinkSinkFnfParameters& setInput(Models::CreateEventStreamingRequestSinkSinkFnfParametersInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkFnfParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::CreateEventStreamingRequestSinkSinkFnfParametersRoleName) };
    inline Models::CreateEventStreamingRequestSinkSinkFnfParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::CreateEventStreamingRequestSinkSinkFnfParametersRoleName) };
    inline CreateEventStreamingRequestSinkSinkFnfParameters& setRoleName(const Models::CreateEventStreamingRequestSinkSinkFnfParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline CreateEventStreamingRequestSinkSinkFnfParameters& setRoleName(Models::CreateEventStreamingRequestSinkSinkFnfParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


  protected:
    // The execution name.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFnfParametersExecutionName> executionName_ = nullptr;
    // The flow name.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFnfParametersFlowName> flowName_ = nullptr;
    // The input information of the execution.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFnfParametersInput> input_ = nullptr;
    // The role name.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkFnfParametersRoleName> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
