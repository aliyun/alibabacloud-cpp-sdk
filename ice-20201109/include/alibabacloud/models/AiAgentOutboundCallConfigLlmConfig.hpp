// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGLLMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGLLMCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AIAgentOutboundCallConfigLlmConfigFunctionMap.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfigLlmConfigLlmHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentOutboundCallConfigLlmConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentOutboundCallConfigLlmConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BailianAppParams, bailianAppParams_);
      DARABONBA_PTR_TO_JSON(FunctionMap, functionMap_);
      DARABONBA_PTR_TO_JSON(LlmCompleteReply, llmCompleteReply_);
      DARABONBA_PTR_TO_JSON(LlmHistory, llmHistory_);
      DARABONBA_PTR_TO_JSON(LlmHistoryLimit, llmHistoryLimit_);
      DARABONBA_PTR_TO_JSON(LlmSystemPrompt, llmSystemPrompt_);
      DARABONBA_PTR_TO_JSON(OpenAIExtraQuery, openAIExtraQuery_);
      DARABONBA_PTR_TO_JSON(OutputMaxDelay, outputMaxDelay_);
      DARABONBA_PTR_TO_JSON(OutputMinLength, outputMinLength_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentOutboundCallConfigLlmConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BailianAppParams, bailianAppParams_);
      DARABONBA_PTR_FROM_JSON(FunctionMap, functionMap_);
      DARABONBA_PTR_FROM_JSON(LlmCompleteReply, llmCompleteReply_);
      DARABONBA_PTR_FROM_JSON(LlmHistory, llmHistory_);
      DARABONBA_PTR_FROM_JSON(LlmHistoryLimit, llmHistoryLimit_);
      DARABONBA_PTR_FROM_JSON(LlmSystemPrompt, llmSystemPrompt_);
      DARABONBA_PTR_FROM_JSON(OpenAIExtraQuery, openAIExtraQuery_);
      DARABONBA_PTR_FROM_JSON(OutputMaxDelay, outputMaxDelay_);
      DARABONBA_PTR_FROM_JSON(OutputMinLength, outputMinLength_);
    };
    AIAgentOutboundCallConfigLlmConfig() = default ;
    AIAgentOutboundCallConfigLlmConfig(const AIAgentOutboundCallConfigLlmConfig &) = default ;
    AIAgentOutboundCallConfigLlmConfig(AIAgentOutboundCallConfigLlmConfig &&) = default ;
    AIAgentOutboundCallConfigLlmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentOutboundCallConfigLlmConfig() = default ;
    AIAgentOutboundCallConfigLlmConfig& operator=(const AIAgentOutboundCallConfigLlmConfig &) = default ;
    AIAgentOutboundCallConfigLlmConfig& operator=(AIAgentOutboundCallConfigLlmConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bailianAppParams_ == nullptr
        && return this->functionMap_ == nullptr && return this->llmCompleteReply_ == nullptr && return this->llmHistory_ == nullptr && return this->llmHistoryLimit_ == nullptr && return this->llmSystemPrompt_ == nullptr
        && return this->openAIExtraQuery_ == nullptr && return this->outputMaxDelay_ == nullptr && return this->outputMinLength_ == nullptr; };
    // bailianAppParams Field Functions 
    bool hasBailianAppParams() const { return this->bailianAppParams_ != nullptr;};
    void deleteBailianAppParams() { this->bailianAppParams_ = nullptr;};
    inline string bailianAppParams() const { DARABONBA_PTR_GET_DEFAULT(bailianAppParams_, "") };
    inline AIAgentOutboundCallConfigLlmConfig& setBailianAppParams(string bailianAppParams) { DARABONBA_PTR_SET_VALUE(bailianAppParams_, bailianAppParams) };


    // functionMap Field Functions 
    bool hasFunctionMap() const { return this->functionMap_ != nullptr;};
    void deleteFunctionMap() { this->functionMap_ = nullptr;};
    inline const vector<Models::AIAgentOutboundCallConfigLlmConfigFunctionMap> & functionMap() const { DARABONBA_PTR_GET_CONST(functionMap_, vector<Models::AIAgentOutboundCallConfigLlmConfigFunctionMap>) };
    inline vector<Models::AIAgentOutboundCallConfigLlmConfigFunctionMap> functionMap() { DARABONBA_PTR_GET(functionMap_, vector<Models::AIAgentOutboundCallConfigLlmConfigFunctionMap>) };
    inline AIAgentOutboundCallConfigLlmConfig& setFunctionMap(const vector<Models::AIAgentOutboundCallConfigLlmConfigFunctionMap> & functionMap) { DARABONBA_PTR_SET_VALUE(functionMap_, functionMap) };
    inline AIAgentOutboundCallConfigLlmConfig& setFunctionMap(vector<Models::AIAgentOutboundCallConfigLlmConfigFunctionMap> && functionMap) { DARABONBA_PTR_SET_RVALUE(functionMap_, functionMap) };


    // llmCompleteReply Field Functions 
    bool hasLlmCompleteReply() const { return this->llmCompleteReply_ != nullptr;};
    void deleteLlmCompleteReply() { this->llmCompleteReply_ = nullptr;};
    inline bool llmCompleteReply() const { DARABONBA_PTR_GET_DEFAULT(llmCompleteReply_, false) };
    inline AIAgentOutboundCallConfigLlmConfig& setLlmCompleteReply(bool llmCompleteReply) { DARABONBA_PTR_SET_VALUE(llmCompleteReply_, llmCompleteReply) };


    // llmHistory Field Functions 
    bool hasLlmHistory() const { return this->llmHistory_ != nullptr;};
    void deleteLlmHistory() { this->llmHistory_ = nullptr;};
    inline const vector<Models::AIAgentOutboundCallConfigLlmConfigLlmHistory> & llmHistory() const { DARABONBA_PTR_GET_CONST(llmHistory_, vector<Models::AIAgentOutboundCallConfigLlmConfigLlmHistory>) };
    inline vector<Models::AIAgentOutboundCallConfigLlmConfigLlmHistory> llmHistory() { DARABONBA_PTR_GET(llmHistory_, vector<Models::AIAgentOutboundCallConfigLlmConfigLlmHistory>) };
    inline AIAgentOutboundCallConfigLlmConfig& setLlmHistory(const vector<Models::AIAgentOutboundCallConfigLlmConfigLlmHistory> & llmHistory) { DARABONBA_PTR_SET_VALUE(llmHistory_, llmHistory) };
    inline AIAgentOutboundCallConfigLlmConfig& setLlmHistory(vector<Models::AIAgentOutboundCallConfigLlmConfigLlmHistory> && llmHistory) { DARABONBA_PTR_SET_RVALUE(llmHistory_, llmHistory) };


    // llmHistoryLimit Field Functions 
    bool hasLlmHistoryLimit() const { return this->llmHistoryLimit_ != nullptr;};
    void deleteLlmHistoryLimit() { this->llmHistoryLimit_ = nullptr;};
    inline int32_t llmHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(llmHistoryLimit_, 0) };
    inline AIAgentOutboundCallConfigLlmConfig& setLlmHistoryLimit(int32_t llmHistoryLimit) { DARABONBA_PTR_SET_VALUE(llmHistoryLimit_, llmHistoryLimit) };


    // llmSystemPrompt Field Functions 
    bool hasLlmSystemPrompt() const { return this->llmSystemPrompt_ != nullptr;};
    void deleteLlmSystemPrompt() { this->llmSystemPrompt_ = nullptr;};
    inline string llmSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(llmSystemPrompt_, "") };
    inline AIAgentOutboundCallConfigLlmConfig& setLlmSystemPrompt(string llmSystemPrompt) { DARABONBA_PTR_SET_VALUE(llmSystemPrompt_, llmSystemPrompt) };


    // openAIExtraQuery Field Functions 
    bool hasOpenAIExtraQuery() const { return this->openAIExtraQuery_ != nullptr;};
    void deleteOpenAIExtraQuery() { this->openAIExtraQuery_ = nullptr;};
    inline string openAIExtraQuery() const { DARABONBA_PTR_GET_DEFAULT(openAIExtraQuery_, "") };
    inline AIAgentOutboundCallConfigLlmConfig& setOpenAIExtraQuery(string openAIExtraQuery) { DARABONBA_PTR_SET_VALUE(openAIExtraQuery_, openAIExtraQuery) };


    // outputMaxDelay Field Functions 
    bool hasOutputMaxDelay() const { return this->outputMaxDelay_ != nullptr;};
    void deleteOutputMaxDelay() { this->outputMaxDelay_ = nullptr;};
    inline string outputMaxDelay() const { DARABONBA_PTR_GET_DEFAULT(outputMaxDelay_, "") };
    inline AIAgentOutboundCallConfigLlmConfig& setOutputMaxDelay(string outputMaxDelay) { DARABONBA_PTR_SET_VALUE(outputMaxDelay_, outputMaxDelay) };


    // outputMinLength Field Functions 
    bool hasOutputMinLength() const { return this->outputMinLength_ != nullptr;};
    void deleteOutputMinLength() { this->outputMinLength_ = nullptr;};
    inline int32_t outputMinLength() const { DARABONBA_PTR_GET_DEFAULT(outputMinLength_, 0) };
    inline AIAgentOutboundCallConfigLlmConfig& setOutputMinLength(int32_t outputMinLength) { DARABONBA_PTR_SET_VALUE(outputMinLength_, outputMinLength) };


  protected:
    std::shared_ptr<string> bailianAppParams_ = nullptr;
    std::shared_ptr<vector<Models::AIAgentOutboundCallConfigLlmConfigFunctionMap>> functionMap_ = nullptr;
    std::shared_ptr<bool> llmCompleteReply_ = nullptr;
    std::shared_ptr<vector<Models::AIAgentOutboundCallConfigLlmConfigLlmHistory>> llmHistory_ = nullptr;
    std::shared_ptr<int32_t> llmHistoryLimit_ = nullptr;
    std::shared_ptr<string> llmSystemPrompt_ = nullptr;
    std::shared_ptr<string> openAIExtraQuery_ = nullptr;
    std::shared_ptr<string> outputMaxDelay_ = nullptr;
    std::shared_ptr<int32_t> outputMinLength_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
