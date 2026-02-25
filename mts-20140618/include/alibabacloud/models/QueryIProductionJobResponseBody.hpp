// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryIProductionJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIProductionJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIProductionJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    QueryIProductionJobResponseBody() = default ;
    QueryIProductionJobResponseBody(const QueryIProductionJobResponseBody &) = default ;
    QueryIProductionJobResponseBody(QueryIProductionJobResponseBody &&) = default ;
    QueryIProductionJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIProductionJobResponseBody() = default ;
    QueryIProductionJobResponseBody& operator=(const QueryIProductionJobResponseBody &) = default ;
    QueryIProductionJobResponseBody& operator=(QueryIProductionJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr
        && this->input_ == nullptr && this->jobId_ == nullptr && this->jobParams_ == nullptr && this->output_ == nullptr && this->pipelineId_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->state_ == nullptr && this->userData_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline QueryIProductionJobResponseBody& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline QueryIProductionJobResponseBody& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryIProductionJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline QueryIProductionJobResponseBody& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline QueryIProductionJobResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QueryIProductionJobResponseBody& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryIProductionJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline QueryIProductionJobResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryIProductionJobResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryIProductionJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> functionName_ {};
    shared_ptr<string> input_ {};
    shared_ptr<string> jobId_ {};
    shared_ptr<string> jobParams_ {};
    shared_ptr<string> output_ {};
    shared_ptr<string> pipelineId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> result_ {};
    shared_ptr<string> state_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
