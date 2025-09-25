// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunAgentResponseBodyDataFunctionCallResponses.hpp>
#include <alibabacloud/models/RunAgentResponseBodyDataResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunAgentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAgentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(functionCallResponses, functionCallResponses_);
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(response, response_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, RunAgentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(functionCallResponses, functionCallResponses_);
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(response, response_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    RunAgentResponseBodyData() = default ;
    RunAgentResponseBodyData(const RunAgentResponseBodyData &) = default ;
    RunAgentResponseBodyData(RunAgentResponseBodyData &&) = default ;
    RunAgentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAgentResponseBodyData() = default ;
    RunAgentResponseBodyData& operator=(const RunAgentResponseBodyData &) = default ;
    RunAgentResponseBodyData& operator=(RunAgentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionCallResponses_ != nullptr
        && this->inputTokens_ != nullptr && this->outputTokens_ != nullptr && this->response_ != nullptr && this->threadId_ != nullptr && this->traceId_ != nullptr
        && this->versionId_ != nullptr; };
    // functionCallResponses Field Functions 
    bool hasFunctionCallResponses() const { return this->functionCallResponses_ != nullptr;};
    void deleteFunctionCallResponses() { this->functionCallResponses_ = nullptr;};
    inline const vector<Models::RunAgentResponseBodyDataFunctionCallResponses> & functionCallResponses() const { DARABONBA_PTR_GET_CONST(functionCallResponses_, vector<Models::RunAgentResponseBodyDataFunctionCallResponses>) };
    inline vector<Models::RunAgentResponseBodyDataFunctionCallResponses> functionCallResponses() { DARABONBA_PTR_GET(functionCallResponses_, vector<Models::RunAgentResponseBodyDataFunctionCallResponses>) };
    inline RunAgentResponseBodyData& setFunctionCallResponses(const vector<Models::RunAgentResponseBodyDataFunctionCallResponses> & functionCallResponses) { DARABONBA_PTR_SET_VALUE(functionCallResponses_, functionCallResponses) };
    inline RunAgentResponseBodyData& setFunctionCallResponses(vector<Models::RunAgentResponseBodyDataFunctionCallResponses> && functionCallResponses) { DARABONBA_PTR_SET_RVALUE(functionCallResponses_, functionCallResponses) };


    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int32_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
    inline RunAgentResponseBodyData& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int32_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
    inline RunAgentResponseBodyData& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::RunAgentResponseBodyDataResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::RunAgentResponseBodyDataResponse) };
    inline Models::RunAgentResponseBodyDataResponse response() { DARABONBA_PTR_GET(response_, Models::RunAgentResponseBodyDataResponse) };
    inline RunAgentResponseBodyData& setResponse(const Models::RunAgentResponseBodyDataResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline RunAgentResponseBodyData& setResponse(Models::RunAgentResponseBodyDataResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline RunAgentResponseBodyData& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline RunAgentResponseBodyData& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline RunAgentResponseBodyData& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    std::shared_ptr<vector<Models::RunAgentResponseBodyDataFunctionCallResponses>> functionCallResponses_ = nullptr;
    std::shared_ptr<int32_t> inputTokens_ = nullptr;
    std::shared_ptr<int32_t> outputTokens_ = nullptr;
    std::shared_ptr<Models::RunAgentResponseBodyDataResponse> response_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
