// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKFNFPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKFNFPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkFnfParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkFnfParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkFnfParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    GetEventStreamingResponseBodyDataSinkSinkFnfParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkFnfParameters(const GetEventStreamingResponseBodyDataSinkSinkFnfParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkFnfParameters(GetEventStreamingResponseBodyDataSinkSinkFnfParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkFnfParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkFnfParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkFnfParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkFnfParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkFnfParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkFnfParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionName_ != nullptr
        && this->flowName_ != nullptr && this->input_ != nullptr && this->roleName_ != nullptr; };
    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName & executionName() const { DARABONBA_PTR_GET_CONST(executionName_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName executionName() { DARABONBA_PTR_GET(executionName_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFnfParameters& setExecutionName(const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName & executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFnfParameters& setExecutionName(Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName && executionName) { DARABONBA_PTR_SET_RVALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName & flowName() const { DARABONBA_PTR_GET_CONST(flowName_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName flowName() { DARABONBA_PTR_GET(flowName_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFnfParameters& setFlowName(const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName & flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFnfParameters& setFlowName(Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName && flowName) { DARABONBA_PTR_SET_RVALUE(flowName_, flowName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput input() { DARABONBA_PTR_GET(input_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput) };
    inline GetEventStreamingResponseBodyDataSinkSinkFnfParameters& setInput(const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetEventStreamingResponseBodyDataSinkSinkFnfParameters& setInput(Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFnfParameters& setRoleName(const Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline GetEventStreamingResponseBodyDataSinkSinkFnfParameters& setRoleName(Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


  protected:
    // The execution name.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersExecutionName> executionName_ = nullptr;
    // The flow name.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersFlowName> flowName_ = nullptr;
    // The execution input information.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersInput> input_ = nullptr;
    // The role name.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkFnfParametersRoleName> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
