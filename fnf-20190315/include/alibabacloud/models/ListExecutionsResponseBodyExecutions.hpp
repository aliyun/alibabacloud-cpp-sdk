// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODYEXECUTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONSRESPONSEBODYEXECUTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListExecutionsResponseBodyExecutionsEnvironment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListExecutionsResponseBodyExecutions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionsResponseBodyExecutions& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(FlowDefinition, flowDefinition_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoppedTime, stoppedTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionsResponseBodyExecutions& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(FlowDefinition, flowDefinition_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoppedTime, stoppedTime_);
    };
    ListExecutionsResponseBodyExecutions() = default ;
    ListExecutionsResponseBodyExecutions(const ListExecutionsResponseBodyExecutions &) = default ;
    ListExecutionsResponseBodyExecutions(ListExecutionsResponseBodyExecutions &&) = default ;
    ListExecutionsResponseBodyExecutions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionsResponseBodyExecutions() = default ;
    ListExecutionsResponseBodyExecutions& operator=(const ListExecutionsResponseBodyExecutions &) = default ;
    ListExecutionsResponseBodyExecutions& operator=(ListExecutionsResponseBodyExecutions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environment_ == nullptr
        && return this->flowDefinition_ == nullptr && return this->flowName_ == nullptr && return this->input_ == nullptr && return this->name_ == nullptr && return this->output_ == nullptr
        && return this->startedTime_ == nullptr && return this->status_ == nullptr && return this->stoppedTime_ == nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline const Models::ListExecutionsResponseBodyExecutionsEnvironment & environment() const { DARABONBA_PTR_GET_CONST(environment_, Models::ListExecutionsResponseBodyExecutionsEnvironment) };
    inline Models::ListExecutionsResponseBodyExecutionsEnvironment environment() { DARABONBA_PTR_GET(environment_, Models::ListExecutionsResponseBodyExecutionsEnvironment) };
    inline ListExecutionsResponseBodyExecutions& setEnvironment(const Models::ListExecutionsResponseBodyExecutionsEnvironment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
    inline ListExecutionsResponseBodyExecutions& setEnvironment(Models::ListExecutionsResponseBodyExecutionsEnvironment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


    // flowDefinition Field Functions 
    bool hasFlowDefinition() const { return this->flowDefinition_ != nullptr;};
    void deleteFlowDefinition() { this->flowDefinition_ = nullptr;};
    inline string flowDefinition() const { DARABONBA_PTR_GET_DEFAULT(flowDefinition_, "") };
    inline ListExecutionsResponseBodyExecutions& setFlowDefinition(string flowDefinition) { DARABONBA_PTR_SET_VALUE(flowDefinition_, flowDefinition) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline ListExecutionsResponseBodyExecutions& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline ListExecutionsResponseBodyExecutions& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListExecutionsResponseBodyExecutions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline ListExecutionsResponseBodyExecutions& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline string startedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, "") };
    inline ListExecutionsResponseBodyExecutions& setStartedTime(string startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExecutionsResponseBodyExecutions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedTime Field Functions 
    bool hasStoppedTime() const { return this->stoppedTime_ != nullptr;};
    void deleteStoppedTime() { this->stoppedTime_ = nullptr;};
    inline string stoppedTime() const { DARABONBA_PTR_GET_DEFAULT(stoppedTime_, "") };
    inline ListExecutionsResponseBodyExecutions& setStoppedTime(string stoppedTime) { DARABONBA_PTR_SET_VALUE(stoppedTime_, stoppedTime) };


  protected:
    std::shared_ptr<Models::ListExecutionsResponseBodyExecutionsEnvironment> environment_ = nullptr;
    // The definition of the flow.
    std::shared_ptr<string> flowDefinition_ = nullptr;
    // The name of the flow.
    std::shared_ptr<string> flowName_ = nullptr;
    // The input of the execution, which is in the JSON format.
    std::shared_ptr<string> input_ = nullptr;
    // The name of the execution.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the execution, which is in the JSON format
    std::shared_ptr<string> output_ = nullptr;
    // The time when the execution started.
    std::shared_ptr<string> startedTime_ = nullptr;
    // The status of the execution.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the execution stopped.
    std::shared_ptr<string> stoppedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
