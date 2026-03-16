// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DescribeExecutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(FlowDefinition, flowDefinition_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoppedTime, stoppedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(FlowDefinition, flowDefinition_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoppedTime, stoppedTime_);
    };
    DescribeExecutionResponseBody() = default ;
    DescribeExecutionResponseBody(const DescribeExecutionResponseBody &) = default ;
    DescribeExecutionResponseBody(DescribeExecutionResponseBody &&) = default ;
    DescribeExecutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutionResponseBody() = default ;
    DescribeExecutionResponseBody& operator=(const DescribeExecutionResponseBody &) = default ;
    DescribeExecutionResponseBody& operator=(DescribeExecutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Environment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Environment& obj) { 
        DARABONBA_PTR_TO_JSON(Variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, Environment& obj) { 
        DARABONBA_PTR_FROM_JSON(Variables, variables_);
      };
      Environment() = default ;
      Environment(const Environment &) = default ;
      Environment(Environment &&) = default ;
      Environment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Environment() = default ;
      Environment& operator=(const Environment &) = default ;
      Environment& operator=(Environment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Variables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variables& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Variables& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Variables() = default ;
        Variables(const Variables &) = default ;
        Variables(Variables &&) = default ;
        Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Variables() = default ;
        Variables& operator=(const Variables &) = default ;
        Variables& operator=(Variables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Variables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->variables_ == nullptr; };
      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const vector<Environment::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Environment::Variables>) };
      inline vector<Environment::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Environment::Variables>) };
      inline Environment& setVariables(const vector<Environment::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline Environment& setVariables(vector<Environment::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    protected:
      shared_ptr<vector<Environment::Variables>> variables_ {};
    };

    virtual bool empty() const override { return this->environment_ == nullptr
        && this->flowDefinition_ == nullptr && this->flowName_ == nullptr && this->input_ == nullptr && this->name_ == nullptr && this->output_ == nullptr
        && this->requestId_ == nullptr && this->startedTime_ == nullptr && this->status_ == nullptr && this->stoppedTime_ == nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline const DescribeExecutionResponseBody::Environment & getEnvironment() const { DARABONBA_PTR_GET_CONST(environment_, DescribeExecutionResponseBody::Environment) };
    inline DescribeExecutionResponseBody::Environment getEnvironment() { DARABONBA_PTR_GET(environment_, DescribeExecutionResponseBody::Environment) };
    inline DescribeExecutionResponseBody& setEnvironment(const DescribeExecutionResponseBody::Environment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
    inline DescribeExecutionResponseBody& setEnvironment(DescribeExecutionResponseBody::Environment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


    // flowDefinition Field Functions 
    bool hasFlowDefinition() const { return this->flowDefinition_ != nullptr;};
    void deleteFlowDefinition() { this->flowDefinition_ = nullptr;};
    inline string getFlowDefinition() const { DARABONBA_PTR_GET_DEFAULT(flowDefinition_, "") };
    inline DescribeExecutionResponseBody& setFlowDefinition(string flowDefinition) { DARABONBA_PTR_SET_VALUE(flowDefinition_, flowDefinition) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline DescribeExecutionResponseBody& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline DescribeExecutionResponseBody& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeExecutionResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeExecutionResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExecutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline string getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, "") };
    inline DescribeExecutionResponseBody& setStartedTime(string startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExecutionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedTime Field Functions 
    bool hasStoppedTime() const { return this->stoppedTime_ != nullptr;};
    void deleteStoppedTime() { this->stoppedTime_ = nullptr;};
    inline string getStoppedTime() const { DARABONBA_PTR_GET_DEFAULT(stoppedTime_, "") };
    inline DescribeExecutionResponseBody& setStoppedTime(string stoppedTime) { DARABONBA_PTR_SET_VALUE(stoppedTime_, stoppedTime) };


  protected:
    shared_ptr<DescribeExecutionResponseBody::Environment> environment_ {};
    // The definition of the flow.
    shared_ptr<string> flowDefinition_ {};
    // The name of the flow.
    shared_ptr<string> flowName_ {};
    // The input of the execution, which is in the JSON format.
    shared_ptr<string> input_ {};
    // The name of the execution.
    shared_ptr<string> name_ {};
    // The execution result, which is in the JSON format.
    shared_ptr<string> output_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The time when the execution started.
    shared_ptr<string> startedTime_ {};
    // The execution status. Valid values:
    // 
    // *   **Starting**
    // *   **Running**
    // *   **Stopped**
    // *   **Succeeded**
    // *   **Failed**
    // *   **TimedOut**
    shared_ptr<string> status_ {};
    // The time when the execution stopped.
    shared_ptr<string> stoppedTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
