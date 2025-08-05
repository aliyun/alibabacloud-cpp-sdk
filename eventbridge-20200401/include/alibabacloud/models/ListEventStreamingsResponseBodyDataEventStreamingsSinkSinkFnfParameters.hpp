// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKFNFPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKFNFPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionName_ != nullptr
        && this->flowName_ != nullptr && this->input_ != nullptr && this->roleName_ != nullptr; };
    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName & executionName() const { DARABONBA_PTR_GET_CONST(executionName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName executionName() { DARABONBA_PTR_GET(executionName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& setExecutionName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName & executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& setExecutionName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName && executionName) { DARABONBA_PTR_SET_RVALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName & flowName() const { DARABONBA_PTR_GET_CONST(flowName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName flowName() { DARABONBA_PTR_GET(flowName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& setFlowName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName & flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& setFlowName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName && flowName) { DARABONBA_PTR_SET_RVALUE(flowName_, flowName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput input() { DARABONBA_PTR_GET(input_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& setInput(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& setInput(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName & roleName() const { DARABONBA_PTR_GET_CONST(roleName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName roleName() { DARABONBA_PTR_GET(roleName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& setRoleName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParameters& setRoleName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


  protected:
    // The execution name.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersExecutionName> executionName_ = nullptr;
    // The flow name.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersFlowName> flowName_ = nullptr;
    // The input information of the execution.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersInput> input_ = nullptr;
    // The role name.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFnfParametersRoleName> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
